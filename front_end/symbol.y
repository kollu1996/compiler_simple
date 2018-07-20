%{
	#include <stdio.h>
	#include <stdlib.h>
        #include<string.h>
	
	
   

      	int yylex(void);
        int yyerror();
         FILE *yyin;
         struct arglist *arglistentry2=NULL,*temp5,*temp6,*temp10,*kay,*kay1;
   	 int a=2,countes=0,countes1=0,c=-1,z=0,u=0,cef=0,w;
	#include "symbol.h"
	#include "symbol.c"
	#define YYSTYPE tnode *
%}

%token END NUM ID READ WRITE IF THEN ELSE DO WHILE ENDIF ENDWHILE DE BOOL INT DECL ENDDECL INTEGER BE FINAL FALSE TRUE  MAIN RET NEQ  
%left '+' '-'
%left '*' '/'
%nonassoc DE '>' '<' "<=" ">=" NEQ



%% 
  
Program: GdeclBlock FdefBlock MainBlock {  }
	| GdeclBlock MainBlock
        | GdeclBlock FdefBlock
	| MainBlock 
        | GdeclBlock
;

GdeclBlock : DECL Gdecllist ENDDECL { nikhil_codegen(); 
					 } 
             | DECL ENDDECL 
             ;

Gdecllist : Gdecllist Gdecl 
            | Gdecl  
            ;
          
Gdecl : Type Gidlist  
           ; 

Gidlist : Gidlist ',' Gid 
            | Gid
             ;



Gid: ID                   {int *t; t=(int*)malloc(sizeof(int)); 
                            
                            if(Glookup($1->name)!=NULL) {printf("identifier already found\n"); exit(1);}
                             if((a%2)==0) { $$=makeanentry($1->name,0,0,NULL,1,-1,NULL);} 
                              else if((a%2)!=0){$$=makeanentry($1->name,1,0,NULL,1,-1,NULL);}}

     | ID'[' NUM ']'      {int *b; b=(int*)malloc(($3->value)*sizeof(int));

                                if(Glookup($1->name)!=NULL) {
                      printf("identifier already found\n");exit(1);} 
                 if((a%2)==0){$$=makeanentry($1->name,0,0,NULL,($3->value),-1,NULL);}
                        else if((a%2)!=0){$$=makeanentry($1->name,1,0,NULL,($3->value),-1,NULL);}}
       

     | ID'('ArgaList')' 
                             {int *b=(int*)malloc(countes*sizeof(int));
                           if(Glookup($1->name)!=NULL)
                          { 
                          $$=makeanentry($1->name,1,0,NULL,0,c,headparam);
                          }
                          else if(Glookup($1->name)==NULL)
                            {
                              c++;
                              if(($1->type)==0)
                               $$=makeanentry($1->name,0,0,NULL,0,c,headparam);
                             else if(($1->type)==1)
                               $$=makeanentry($1->name,1,0,NULL,0,c,headparam);
                            }  
                          }
        ;

ArgaList : ArgaList ',' Arga 
          | Arga
 ;

Arga : Type ID {
                  countes=countes+1;
                /*if(llookup($2->name)!=NULL) { printf("Re decleration of variable\n"); exit(1);} */
                           
                          } 
       ;

FdefBlock : FdefBlock Fdef 
            | Fdef 
          ;

Fdef :Type ID '(' Paramlist ')' '{' LdeclBlock K '}' 
                                                       { 
                                                          
                                                        
                                                        char x = 'a';char *y = &x; $$=makenode(0,48,y,0,$8,$2,NULL); 
                                                  
                                                      
                                                        //printf("%d-%d\n",(Glookup($2->name)->TYPE),$2->type);
							if(Glookup($2->name)==NULL) { printf("no function exists\n"); exit(1);}
                                                        
						          if((Glookup($2->name)->TYPE)!=(a%2))
                                                         {
                                                            printf("error in function decleration type\n");
                                                            exit(0);
                                                         }
							/*struct parameter *paramlist1=headparam;

                                                       
							while((kay!=NULL)&&(paramlist1!=NULL))
							{
							
							   if(kay->type!=paramlist1->type)
							     
							      {
								   printf("conflicting in arguments types\n");
								   exit(1);
							       }
							   

							 

							   kay=kay->next;
							   paramlist1=paramlist1->next;
							}
                                                       */

                                                        cef=2;
							codegen($$);
                                                       
                                                          
					               head3=NULL;
                                                       head2=NULL;
                                                       head1=NULL;
                                                       
                                                        
							z=0;
							u=0;
                                                       
                                                      }
							;


Paramlist : Paramlist ',' Param 
          | Param 
 ;
                            
Param : Type ID {u=u+1;  if((a%2)==0){ headparam=makeparamentry($2->name,0,u,NULL);}
                            else if((a%2)==1) { headparam=makeparamentry($2->name,1,u,NULL);}
                  } 
       ;



LdeclBlock : DECL Ldecllist ENDDECL   
                 | DECL ENDDECL
            ; 

Ldecllist : Ldecllist Ldecl 
         | Ldecl
          ;


Ldecl : Type Lidlist ';' 
      ; 

Lidlist : Lidlist ',' ID 
                       {if(llookup($3->name)!=NULL) { printf("Re decleration of variable 1\n"); exit(1);} 
                               
                       z=z+1;  if(($3->type)==0) {$$=makelocal($3->name,0,z,NULL); }
                              else if(($3->type)==1) {$$=makelocal($3->name,1,z,NULL);}
                           
                         }
     

       | ID                    { if(llookup($1->name)!=NULL) { printf("Re decleration of variable 2\n"); exit(1);} 
                                    
                         z=z+1;  if(($1->type)==0) {$$=makelocal($1->name,0,z,NULL);}
                                 else if(($1->type)==1) {$$=makelocal($1->name,1,z,NULL);}
                         
                             
                          }     
        

      ;

MainBlock:INT MAIN '(' ')' '{' LdeclBlock K  '}'        { char x = 'a';char *y = &x;$$=makenode(0,45,y,0,$7,NULL,NULL);
							cef=1;
							 codegen($$); 
							head3=NULL;head2=NULL;head1=NULL;
							z=0;
							u=0;
							
                                                       }
    ; 

Type :INT {a=a+2;}
      | BOOL {a=a+1;}
    ;

K : BE Slist END {$$=$2;}
     ;

Slist : Slist Stmt {char x = 'a';char *y = &x;$$ = makenode(0,0,y,0,$1,$2,NULL);}
        |Stmt   {$$ = $1;}
         ;

Stmt : ID '=' E ';'  {char x = '=';char *y = &x;if((Glookup($1->name))&&(llookup($1->name))==NULL){printf("you are printing something undeclared ffff \n");exit(1);}
$$ = makenode(0,1,y,0,$1,$3,NULL);  typecheck($$); }
                     
       

     |ID'[' E ']' '=' E ';' { char x = '=';char *y = &x;if((Glookup($3->name))&&(llookup($3->name))==NULL){printf("you are printing something undeclared\n"); exit(1);} $$ = makenode(0,2,y,0,$1,$6,$3); typecheck($$);}




      | READ '(' ID ')' ';' {char x = '=';char *y = &x;if((Glookup($3->name))&&(llookup($3->name))==NULL){printf("you are printing something undeclared ggggg\n");exit(1);}$$ = makenode(0,30,y,0,$3,NULL,NULL); 
                                 }







       | READ '(' ID '[' E ']' ')' ';'  {char x = '=';char *y = &x;if((Glookup($3->name))==NULL){printf("you are printing something undecalredr\n");exit(1);}  $$ = makenode(0,31,y,0,$3,NULL,$5);}



       | WRITE '(' E ')' ';'{char x = 'a';char *y = &x; $$ = makenode(0,3,y,0,$3,NULL,NULL);}
       | IF '(' E ')' THEN Slist ENDIF ';'  {char x = 'a';char *y = &x; $$ = makenode(0,13,y,0,$3,$6,NULL); }
       | WHILE '(' E ')' DO Slist ENDWHILE ';' {char x = 'a';char *y = &x;
                                                 $$ = makenode(0,14,y,0,$3,$6,NULL);
                                                }
       | IF '(' E ')' THEN Slist  ELSE Slist ENDIF ';' {char x='a';char *y=&x; $$ =makenode(0,15,y,0,$3,$6,$8);}
        
       |RET E ';'  {char x = 'a';char *y = &x;$$ = makenode(0,67,y,0,$2,NULL,NULL);}
    ;

     

E : E '+' E   { char x = '+';char *y = &x;$$=makenode(0,4,y,0,$1,$3,NULL);typecheck($$);}
    | E '*' E  { char x = '*';char *y = &x;$$=makenode(0,5,y,0,$1,$3,NULL); typecheck($$);}
    | E '-' E {char x= "-"; char *y = &x;$$=makenode(0,6,y,0,$1,$3,NULL);typecheck($$);}
    | E '/' E {char x= "/"; char *y = &x;$$=makenode(0,7,y,0,$1,$3,NULL);typecheck($$);}
    | '(' E ')'   {$$=$2;}
    |  E '<' E  {char x = '<';char *y = &x;$$=makenode(1,11,y,0,$1,$3,NULL);typecheck($$);}
    |  E '>' E   {char x = '>';char *y = &x;$$=makenode(1,10,y,0,$1,$3,NULL);typecheck($$);}
    |  E "<=" E  {char x = "<=";char *y = &x;$$=makenode(1,23,y,0,$1,$3,NULL);typecheck($$);}
    |  E ">=" E   {char x = ">=";char *y = &x;$$=makenode(1,22,y,0,$1,$3,NULL);typecheck($$);}
    |  E NEQ E   {char x = "!=";char *y = &x;$$=makenode(1,90,y,0,$1,$3,NULL);typecheck($$);}
    |  E DE E     {char x = '>';char *y = &x;$$=makenode(1,12,y,0,$1,$3,NULL); typecheck($$);}
    |NUM     { $$=$1;}
    | ID      {    if((Glookup($1->name))&&(llookup($1->name))==NULL)
                         {printf("you are printing something undeclared hhhh\n");exit(1);}  
                   struct gsymbol*hash1;
                   struct lsymbol*hash2;
                   struct parameter *hash3;
                  hash1=Glookup($1->name);
                  hash2=llookup($1->name);
                  hash3=plookup($1->name);
                  
                  if(hash1!=NULL)
                  {
                  if(hash1->TYPE==1){ $1->type=1;} 
                 else if(hash1->TYPE==0) { $1->type=0;}
                  }


                 if(hash2!=NULL)
                {
                   if(hash2->type==1){ $1->type=1;} 
                 else if(hash2->type==0) { $1->type=0;}
                   
                }   
               
                 if(hash3!=NULL)
                 {
                   if(hash3->type==1){ $1->type=1;} 
                 else if(hash3->type==0) { $1->type=0;}
                }
                       
            
                   $$=$1;}

    | ID'['E']'  {char x = '>';char *y = &x;if((Glookup($1->name))==NULL){printf("you are printing something undeclared\n"); exit(1);} 
                 $$=makenode(0,101,y,0,$1,NULL,$3);}
    | TRUE       {  $$=$1;}
     | FALSE     { $$=$1;}
      | ID '(' ')'   {char x = '=';char *y = &x;$$=makenode(0,43,y,0,$1,NULL,NULL);}

     | ID'(' ArgList ')' {struct arglist * temp7; temp7=llookup($1->name);
                   if(temp7!=NULL){printf("redecleration of variable\n"); exit(1);}
                char x = '=';char *y = &x; kay=temp5; arglistentry2=temp5;
                  
                $$=makenode(0,44,y,0,$1,NULL,NULL);  
                
                  kay=$$->arglistentry1;
                  kay1=kay;
                 while(kay!=NULL)
                  {
                    countes1=countes1+1;
                    kay=kay->next;
                   }
                 /* if(countes1!=countes)
                    {
                      printf("error in number of arguments\n");
                      exit(0);
                    } */
               
       
                                                      struct parameter *paramlist1=headparam;
                                                    
                                                       
							while((kay1!=NULL)&&(paramlist1!=NULL))
							{
							  //printf("%d\n",kay1->type);
                                                              
							   if(kay1->type!=paramlist1->type)
							     
							      {
								   printf("conflicting in arguments types\n");
								   exit(1);
							       }
							   kay1=kay1->next;
							   paramlist1=paramlist1->next;
							}
                        
                                              if(paramlist1!=NULL||kay1!=NULL)
                                              {
                                                  printf("error in number of arguments\n");
                                                       exit(1);
                                               }
                                                       

         // printf("hai\n");
		head3=NULL;
                arglistentry2=NULL; 
               }
    ;

ArgList : ArgList ',' E { if(($3->type)==0){temp5=arglistentry($3,0,NULL);}
                          else if(($3->type)==1){temp5=arglistentry($3,1,NULL);}
                         }
                        
           | E              { 
			     if(($1->type)==0)
                             {
                              temp5=arglistentry($1,0,NULL);
                              }
                             else if(($1->type)==1)
                             {
                            temp5=arglistentry($1,1,NULL);
                            }
                            }
        ;

%%                         

int  yyerror(char const *s)
{
    printf("yyerror %s",s);
     return 0;
}


int main(int argc,char *argv[]) {
     yyin=fopen(argv[1],"r");
	yyparse();
	return 0;
}
