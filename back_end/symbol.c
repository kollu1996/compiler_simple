
FILE *nikhil;
struct gsymbol *head=NULL;
struct gsymbol *hash=NULL;
struct gsymbol *head1=NULL;
struct gsymbol *head2=NULL;
struct gsymbol *head3=NULL;
int counter=-1;
int count=4096;
int cou=2056;
int label=-1,count2=0,count3=0,count4=0;
 


struct arglist *arglistentry (struct tnode *tnode2,int type,struct arglist *next)
{
  struct arglist *temp;
  temp=(struct arglist*)malloc(sizeof(struct arglist));
  temp->tnode1=tnode2;
  temp->type=type;
  temp->next=NULL;
  
if(head3==NULL)
{
 head3=temp;
}
else
{
struct arglist *temp1=head3;
     while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
  return(head3);
}
 

struct parameter *makeparamentry(char *name,int type,int bind,struct parameter *next)
{
struct parameter *temp;
temp=(struct parameter*)malloc(sizeof(struct parameter));
temp->name=(char*)malloc(sizeof(char));
strcpy(temp->name,name);
temp->type=type;
temp->bind=bind;
temp->next=NULL;

if(head1==NULL)
{
  head1=temp;



























}
else
{
 struct parameter *temp1=head1;
     while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
  return(head1);
 }

 struct gsymbol* makeanentry(char *NAME,int TYPE,int BINDING,struct makeanentry *next,int sizeofarray,int flabel,struct parameter *paramlist)
{
  
  struct gsymbol *temp;
temp=(struct gsymbol*)malloc(sizeof(struct gsymbol));
temp->NAME=(char*)malloc(sizeof(char));
strcpy(temp->NAME,NAME);
temp->TYPE=TYPE;
temp->BINDING=count;
temp->sizeofarray=sizeofarray;
count=count+sizeofarray;
 //printf("size is %d\n",sizeofarray);
temp->next=NULL;
temp->flabel=flabel;
temp->paramlist=NULL;

if(head==NULL)
{
  head=temp;
}
else
{
struct gsymbol *temp1=head;
     while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
//printf("%s\n",head->NAME);
  return(head);
}



struct lsymbol *makelocal(char *NAME,int type,int bind,struct lsymbol *next)
{
   struct lsymbol *temp7;
 temp7=(struct lsymbol*)malloc(sizeof(struct lsymbol));
 temp7->NAME=(char*)malloc(sizeof(char));
 strcpy(temp7->NAME,NAME);
 temp7->type=type;
temp7->bind=bind;
 temp7->next=NULL;

if(head2==NULL)
{
  head2=temp7;
}
else
{
 struct lsymbol *temp1=head2;
   while(temp1->next!=NULL)
   {
      temp1=temp1->next;
   }
  temp1->next=temp7;
}
return (head2);
}


 

 struct gsymbol* Glookup(char *NAME)
{
   struct gsymbol *star;
     star=head;
   
 
   while(star!=NULL)
   {
   if(strcmp(star->NAME,NAME)==0)
   {
     
     return(star);
   }
   star=star->next;
  }
   if(star==NULL)
  {
    return (NULL);
   }
}

struct lsymbol* llookup(char *NAME)
{
   struct lsymbol *star;
   star=head2;
   while(star!=NULL)
   {
   if(strcmp(star->NAME,NAME)==0)
   {
     return(star);
   }
   star=star->next;
  }
   if(star==NULL)
  {
    return (NULL);
   }
}

struct parameter *plookup(char *name)
{
   struct parameter *star;
    star=head1;
   while(star!=NULL)
 {
    if(strcmp(star->name,name)==0)
    {
         return (star);
     }
   star=star->next;
   }
  if(star==NULL)
  {
      return (NULL);
 }
}

struct tnode* makenode(int type,int NODETYPE,char* name,int value,  struct tnode *l,struct tnode *r,struct tnode *m)
{

struct tnode *temp;
temp=(struct tnode*)malloc(sizeof(struct tnode));
temp->type=type;
temp->NODETYPE=NODETYPE;
temp->name=(char*)malloc(sizeof(char));
strcpy(temp->name,name);


temp->value=value;
temp->arglistentry1=arglistentry2;
temp->left=l;
temp->right=r;
temp->middle=m;
return temp;
}


 void typecheck (struct tnode *tnode)
{
  struct gsymbol *hash1;
  struct lsymbol *hash2;
  struct parameter *hash3;
   switch(tnode->NODETYPE)
   {
     case 4: /* plus */
     
     if(((tnode->left->type)!=(tnode->right->type))&&(tnode->left->type==1))
     {
           printf("add only integers not booleans\n");
           exit(1);
      }
       break;

     case 5: /* MULT */
     if(((tnode->left->type)!=(tnode->right->type))&&(tnode->left->type==1))
     {
           printf("multiply only integers not booleans\n");
             exit(1);
      }
     break;

    case 6: /* sub */
     if(((tnode->left->type)!=(tnode->right->type))&&(tnode->left->type==1))
     {
           printf("subtract only integers not booleans\n");
             exit(1);
      }
     break;

    case 7: /* div */
     if(((tnode->left->type)!=(tnode->right->type))&&(tnode->left->type==1))
     {
           printf("divide only integers not booleans\n");
              exit(1);
      }
     break;

     case 10: /* > */
     if(((tnode->left->type)!=(tnode->right->type))) 
     {
           printf("compare only booleans not integers  or integers and booleans \n");
             exit(1);
      }
     break;

    case 11: /* < */
     if(((tnode->left->type)!=(tnode->right->type)))
     {
           printf("compare only booleans not integers\n");
                 exit(1);
      }
     break;

    case 12: /* = */
     if(((tnode->left->type)!=(tnode->right->type)))
     {
           printf("compare only booleans not integers\n");
              exit(1);
      }
     break;
    case 1: /* assign */
    
   hash1=Glookup(tnode->left->name);
    hash2=llookup(tnode->left->name);
    hash3=plookup(tnode->left->name);
   //printf("%s\n",tnode->left->name);
   if(hash2!=NULL)
  {
    tnode->left->type= hash2->type;
  }
 else if(hash3!=NULL)
 {
   tnode->left->type= hash3->type;
 }
  else if(hash1!=NULL)
 {
    tnode->left->type= hash1->TYPE;
 }
    if(((tnode->left->type)!=(tnode->right->type)))
    {
          printf("%d\n",tnode->left->type);
          printf("%d\n",tnode->right->type);
           printf("assign only like datatypes \n");
            exit(0);   
      }
     break;

     case 2: /* assign */
    
    tnode->left->type= Glookup(tnode->left->name)->TYPE;
    if((Glookup(tnode->left->name)->sizeofarray)==0)
     {
           printf("you are trying to assign data to a non array type\n");
             exit(1);
       }
       
    else if(((tnode->left->type)!=(tnode->right->type)))
    {
           printf("assign only like datatypes\n");
              exit(1);
      }
     break;
  }
}

void nikhil_codegen()
 {
   
   nikhil=fopen("assem.xsm","w+");
   if(nikhil==NULL)
   {
     printf("error in file opening\n");
     exit(1);
    } 
   
    fprintf(nikhil, " %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n ",0,2056,0,0,0,0,0,0);
 // fprintf(nikhil, "START\n");
        
	fprintf(nikhil, "MOV SP,%d\n",count-1);	
        fprintf(nikhil, "MOV BP,%d\n",count-1);	
	//codegen(tnode);
        fprintf(nikhil,"CALL MAIN\n");
	fprintf(nikhil, "INT 10\n");
	//fclose(nikhil);
       
    }
int get_label()
{
 ++label;
}
int getreg()
{
  if(counter <8)
 {
   ++counter;
  
 }
 else
  {
   printf("running out of registers\n");
  }
}

void freereg()
{
  if(counter >= 0)
   {
      counter--;
   }
}


int codegen(struct tnode *tnode)
{
  
int *p,number,R1,R2,a,s,offset,L1,L2;
 struct gsymbol*hash1;
 struct lsymbol *hash2;
  struct lsymbol *temp9,*temp2,*temp4;
 struct parameter *hash3;
 struct arglist *hash5,*hash6;
  if(nikhil==NULL)
  {
    printf("error while creating assembly code\n");
    exit(1);
   }

   switch(tnode->NODETYPE)
   {
      case 1:/* ASSIGN */
     
       
       hash1=Glookup(tnode->left->name);
       hash2=llookup(tnode->left->name);
       hash3=plookup(tnode->left->name);
       number = codegen(tnode->right);
	 R1=getreg();
     
        if(hash2!=NULL)
       {
        
         int v=hash2->bind;
         fprintf(nikhil,"MOV R%d,BP\n",R1);
         fprintf(nikhil,"ADD R%d, %d\n",R1,v);
         fprintf(nikhil,"MOV [R%d], R%d\n",R1,number);
         cou=cou+1;
        }

    else if(hash3!=NULL)
       {
         int v=hash3->bind;
         fprintf(nikhil,"MOV R%d,BP\n",R1);
         fprintf(nikhil,"SUB R%d, %d\n",R1,2);
         fprintf(nikhil,"SUB R%d, %d\n",R1,v);	
         fprintf(nikhil,"MOV [R%d], R%d\n",R1,number);
         cou=cou+1;
        
       }
       else if(hash1!=NULL)
       {
       fprintf(nikhil,"MOV [%d], R%d\n",(hash1->BINDING),number);
         cou=cou+1;
       }
 freereg();
 freereg();
          break;



case 2: /* ASSIGN ARRAY */
 
  hash1=Glookup(tnode->left->name);
   offset=codegen(tnode->middle);
   R1=getreg();
   fprintf(nikhil,"MOV R%d,%d\n",R1,hash1->BINDING);
      fprintf(nikhil," ADD R%d,R%d\n",offset,R1);
      R1=codegen(tnode->right);
      fprintf(nikhil,"MOV [R%d], R%d\n",offset,R1);
      freereg();
      freereg();
     break;

 
  case 101: /* AN ARRAY */
      offset=codegen(tnode->middle);
      R1=getreg();
      hash1=Glookup(tnode->left->name);
     fprintf(nikhil,"MOV R%d,%d\n",R1,hash1->BINDING);
      fprintf(nikhil," ADD R%d,R%d\n",R1,offset);
      fprintf(nikhil,"MOV R%d,[R%d]\n",offset,R1);
       freereg();
      return offset;
      break;


  case 31: /* READ ARRAY */
     
     
     for(s=0;s<=counter;s++)
    {
      fprintf(nikhil,"PUSH R%d\n",s);
    }
     offset=codegen(tnode->middle);
     hash1=Glookup(tnode->left->name);
     R1=getreg();
     fprintf(nikhil,"MOV R%d,%d\n",R1,(hash1->BINDING)); 
     fprintf(nikhil, "ADD R%d,R%d\n",offset,R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,7);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,R%d\n",R1,offset);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"INT 6\n");
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
      freereg(); 
      freereg();
     for(s=counter;s!=-1;s--)
    {
      fprintf(nikhil,"POP R%d\n",s);
    }
     
     break;

case 3: /* WRITE */
      
     for(s=0;s<=counter;s++)
    {
      fprintf(nikhil,"PUSH R%d\n",s);
    }
     R1=codegen(tnode->left);
       
     R2=getreg();
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,SP\n",R2);
     fprintf(nikhil,"MOV R%d,%d\n",R1,5);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"PUSH R%d\n",R2);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"INT 7\n");
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
    
     freereg();
     freereg();
     for(s=counter;s!=-1;s--)
    {
      fprintf(nikhil,"POP R%d\n",s);
    }
     break;




     case 30: /* READ*/

          
      hash1=Glookup(tnode->left->name);
      hash2=llookup(tnode->left->name);
      hash3=plookup(tnode->left->name);
       
	 for(s=0;s<=counter;s++)
    {
      fprintf(nikhil,"PUSH R%d\n",s);
    }
	 R1 = getreg();
      
      if(hash2!=NULL)
     {
      
      int v=hash2->bind;
        
    	
     fprintf(nikhil,"MOV R%d,%d\n",R1,7);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,BP\n",R1);
     fprintf(nikhil,"ADD R%d,%d\n",R1,v);
     
     /*fprintf(nikhil,"MOV R%d,%d\n",R1,(hash2->BINDING));*/
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
      
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"INT 6\n");
    
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
   //  fprintf(nikhil,"POP R%d\n",R1);
     
    
      }


     else if(hash3!=NULL)
     {
         
      
       
       int v=hash3->bind;
       
    	
     fprintf(nikhil,"MOV R%d,%d\n",R1,7);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,BP\n",R1);
     fprintf(nikhil,"SUB R%d,%d\n",R1,v);
     fprintf(nikhil,"SUB R%d,%d\n",R1,2);
     /*fprintf(nikhil,"MOV R%d,%d\n",R1,(hash2->BINDING));*/
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
      
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"INT 6\n");
    
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
   //  fprintf(nikhil,"POP R%d\n",R1);

     
      }
      
     else if(hash1!=NULL)
     {
        
     fprintf(nikhil,"MOV R%d,%d\n",R1,7);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
     fprintf(nikhil,"PUSH R%d\n",R1);
      
     fprintf(nikhil,"MOV R%d,%d\n",R1,(hash1->BINDING));
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"MOV R%d,%d\n",R1,-1);
      
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"PUSH R%d\n",R1);
     fprintf(nikhil,"INT 6\n");
    
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
     fprintf(nikhil,"POP R%d\n",R1);
    // fprintf(nikhil,"POP R%d\n",R1);
  
     }


	     freereg();
	 for(s=counter;s!=-1;s--)
    {
      fprintf(nikhil,"POP R%d\n",s);
    }

    break;



     case 20:
     R1=getreg();
     fprintf(nikhil,"MOV R%d,%d\n",R1,tnode->value);
     return R1;
     break;



      case 21:
     R1=getreg();
     fprintf(nikhil,"MOV R%d,%d\n",R1,tnode->value);
     return R1;
     break;


      case 4: /*+*/
       R1 = codegen(tnode->left);
       R2 = codegen(tnode->right);
      fprintf(nikhil,"ADD R%d,R%d\n",R1,R2);
      freereg();
      return R1;
      /*return(evaluate(tnode->left) + evaluate(tnode->right));*/
      break;


      case 5:/*  * */
       R1 = codegen(tnode->left);
       R2 = codegen(tnode->right);
      fprintf(nikhil,"MUL R%d,R%d\n",R1,R2);
      freereg();
      return R1;
      /*return(evaluate(tnode->left) * evaluate(tnode->right));*/
      break;


      case 6:/*-*/
       R1 = codegen(tnode->left);
       R2 = codegen(tnode->right);
      fprintf(nikhil,"SUB R%d,R%d\n",R1,R2);
      freereg();
      return R1;
      /*return(evaluate(tnode->left) - evaluate(tnode->right));*/
      break;


      case 7:/* / */
       R1 = codegen(tnode->left);
       R2 = codegen(tnode->right);
      fprintf(nikhil,"DIV R%d,R%d\n",R1,R2);
  
      freereg();
       return R1;
     /* return(evaluate(tnode->left) / evaluate(tnode->right));*/
      break;


      case 8: /* NUM */
       R1=getreg();
      fprintf(nikhil, "MOV R%d , %d\n",R1,(tnode -> value));
       return R1;
     /*return (tnode->value);*/
      break;


      case 9: /* ID */

      hash1=Glookup(tnode->name);
      hash2=llookup(tnode->name);
       hash3=plookup(tnode->name);
	 R1=getreg();
         R2=getreg();
     
        if(hash2!=NULL)
     {
      
     
      int v=hash2->bind;
       fprintf(nikhil,"MOV R%d,BP\n",R2);
         fprintf(nikhil,"ADD R%d,%d\n",R2,v);	
      fprintf(nikhil, "MOV R%d ,[R%d]\n",R1,R2);
      
      }

  else  if(hash3!=NULL)
   {
   
     int v=hash3->bind; 
     
    fprintf(nikhil,"MOV R%d,BP\n",R2);
         fprintf(nikhil,"SUB R%d,%d\n",R2,v);
         fprintf(nikhil,"SUB R%d,%d\n",R2,2);
      fprintf(nikhil, "MOV R%d ,[R%d]\n",R1,R2);
      
   
  }
  else if(hash1!=NULL)
      {
     
      fprintf(nikhil, "MOV R%d [%d]\n",R1,(hash1-> BINDING));
      
      }
	freereg();
    return R1;
    break;
      //printf("fgh %s\n",hash1->NAME);
      										
      


      case 0:
      codegen(tnode->left);
      codegen(tnode->right);
      break;


      case 10: /* > */
       
     R1=codegen(tnode->left);
     R2=codegen(tnode->right);
      
     fprintf(nikhil,"GT R%d,R%d\n",R1,R2);
    
      freereg();
     return R1;
     break;


     case 11: /* < */
     
     R1=codegen(tnode->left);
     R2=codegen(tnode->right);
     fprintf(nikhil,"LT R%d,R%d\n",R1,R2);
    
      freereg();
     return R1;
      break;

      case 23: /* <= */
     
     R1=codegen(tnode->left);
     R2=codegen(tnode->right);
     fprintf(nikhil,"LE R%d,R%d\n",R1,R2);
    
      freereg();
     return R1;
      break;

      case 22: /* >= */
     
     R1=codegen(tnode->left);
     R2=codegen(tnode->right);
     fprintf(nikhil,"GE R%d,R%d\n",R1,R2);
    
      freereg();
     return R1;
      break;

    case 90: /* != */
     R1=codegen(tnode->left);
     R2=codegen(tnode->right);
     fprintf(nikhil,"NE R%d,R%d\n",R1,R2);
     freereg();
    return R1;
     break;
 
     case 12: /* == */
       
     R1=codegen(tnode->left);
     R2=codegen(tnode->right);
     fprintf(nikhil,"EQ R%d,R%d\n",R1,R2);
   
      freereg();
     return R1;
    break;
   
    case 14: /* WHILE */
   
    L1=get_label();
    L2=get_label();
    number=getreg();
     
    fprintf(nikhil,"L%d:\n",L1);
 
    number=codegen(tnode->left);
    
    fprintf(nikhil,"JZ R%d,L%d\n",number,L2);
   
     freereg();
    number=codegen(tnode->right);
    fprintf(nikhil,"JMP L%d\n",L1);
    
    fprintf(nikhil,"L%d:\n",L2);
    
    freereg();
    break;
 
    
    case 13: /* IF */
    
    
    L2=get_label();

    number=codegen(tnode->left);
    fprintf(nikhil,"JZ R%d,L%d\n",number,L2);
    codegen(tnode->right);
    fprintf(nikhil,"L%d:\n",L2);
    freereg();
    break;

    case 15: /* IF THEN ELSE */
    L1=get_label();
    L2=get_label();
    
    number=codegen(tnode->left);
    fprintf(nikhil,"JZ R%d,L%d\n",number,L2);
     codegen(tnode->right);
     fprintf(nikhil,"JMP L%d\n",L1);
     fprintf(nikhil,"L%d:\n",L2);
     codegen(tnode->middle);
      fprintf(nikhil,"L%d:\n",L1);
      freereg();
  break;






  case 45: /* MAIN */
 
  count2=0;
  fprintf(nikhil,"MAIN:\n");
  fprintf(nikhil ,"PUSH BP\n");
  fprintf(nikhil,"MOV BP,SP\n");
  
  temp9=head2;

  while(temp9!=NULL)
 {
   
   temp9=temp9->next;
   count2=count2+1;
 }
  
 fprintf(nikhil,"ADD SP,%d\n",count2);
 
 codegen(tnode->left);
 
  break;






 case 48: /* INT FUNCTION(INT,INT)*/
   count2=0;
  fprintf(nikhil,"F%d:\n",(Glookup(tnode->right->name))->flabel);
  
  fprintf(nikhil ,"PUSH BP\n");
  fprintf(nikhil,"MOV BP,SP\n");
  
  temp4=head2;
  
  while(temp4!=NULL)
 {
   temp4=temp4->next;
   count2=count2+1;
 }
 fprintf(nikhil," ADD SP,%d\n",count2);
 codegen(tnode->left);
 break;





 



 case 44: /* CALLING IN MAIN */{
int usedreg=counter;
for(s=0;s<=usedreg;s++)
{
  fprintf(nikhil,"PUSH R%d\n",s);
}
 hash5=tnode->arglistentry1;
 hash6=hash5;
 R1=getreg();
 R2=getreg();
 if(hash5==NULL)
 {
  printf("NIKHIL...................\n");
 }
 while(hash5!=NULL)
{
 R2=codegen(hash5->tnode1);
 fprintf(nikhil,"PUSH R%d\n",R2);   
 hash5=hash5->next;
}
fprintf(nikhil,"PUSH R%d\n",R1);

fprintf(nikhil,"CALL F%d\n",(Glookup(tnode->left->name)->flabel));
  
  fprintf(nikhil,"POP R%d\n",R2);
  fprintf(nikhil,"MOV R%d,R%d\n",R1,R2);
  
  
while(hash6!=NULL)
{
  fprintf(nikhil,"POP R%d\n",R2);
  hash6=hash6->next;
}

for(s=usedreg;s!=-1;s--)
{
 fprintf(nikhil,"POP R%d\n",s);
}
freereg();
return R1;

 break;



}



case 67:

 R1=codegen(tnode->left);
 temp2=head2;
 count3=0;
 while(temp2!=NULL)
{
  count3=count3+1;
  temp2=temp2->next;
 }
 fprintf(nikhil,"SUB SP,%d\n",count3); 
 R2=getreg();
 if(cef==2){
 fprintf(nikhil,"MOV R%d,BP\n",R2);
 fprintf(nikhil,"SUB R%d,2\n",R2);
 fprintf(nikhil,"MOV [R%d],R%d\n",R2,R1);}
 fprintf(nikhil,"POP BP\n");
 fprintf(nikhil,"RET\n");
 freereg();
 freereg();
 break;

}

}
      

  
   


