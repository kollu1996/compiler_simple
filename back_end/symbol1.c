 struct labeltrans
{
 int address;
 char *label;
 struct labeltrans *next;
};
 struct labeltrans *head1=NULL;

struct labeltrans *translate (int address,char *label, struct labeltrans *next)
{
   struct labeltrans *temp;
   temp=(struct labeltrans*)malloc(sizeof (struct labeltrans));
   temp->address=address;
   temp->label=(char*)malloc(sizeof (char));
   strcpy(temp->label,label);
  temp->next=NULL;

 if(head1==NULL)
 {
   head1=temp;
  }
  else 
  {
    struct labeltrans *temp1=head1;
      while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
  return(head1);
}


struct labeltrans *llookup(char *label)
 {
    struct labeltrans *star1;
    star1=head1;
  while(star1!=NULL)
 {  
    if(strcmp(star1->label,label)==0)
      {
          return(star1);
      }
     star1=star1->next;
  }
 
    return(NULL);
}

















