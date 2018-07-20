
typedef struct tnode {
int type; 
int NODETYPE;
char* name; 
int value; 
struct arglist *arglistentry1;
struct tnode *left,*right,*middle;
}tnode;



struct gsymbol 
{
char *NAME; 
int TYPE; 
int BINDING;
int sizeofarray;
int flabel;
struct parameter *paramlist;
struct gsymbol *next;
};


struct parameter 
{
 char *name;
 int type;
 int bind;
 struct parameter *next;
};


struct arglist
{
   struct tnode *tnode1;
   int type;
   struct arglist *next;
};

struct lsymbol 
{
char *NAME; 
int type; 
int bind;
struct lsymbol *next;
};





void typecheck (struct tnode *tnode);
int codegen(struct tnode *tnode);
void nikhil_codegen();
 struct parameter *headparam;
struct parameter *makeparamentry(char *name,int type,int bind,struct parameter *next);
struct tnode* makenode(int type,int NODETYPE,char* NAME,int value, struct tnode *l,struct tnode *r,struct tnode *m);
 struct lsymbol *llookup(char *NAME);
struct parameter *plookup(char *name);
 




 



