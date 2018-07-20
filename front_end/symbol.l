%{
	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>
        #include  <string.h>
       
	int p;
        char *s;

%}

%%
[0-9]+  {p=atoi(yytext); 
         char m = 'q';char *m1 = &m;
        
         yylval=makenode(0,8,m1,p,NULL,NULL,NULL);
         
          return NUM;}
"!="    {return NEQ;}
"+"	{return *yytext;}
"-"	{return *yytext;}
"*"	{return *yytext;}
"/"	{return *yytext;}
";"     {return *yytext;}
"<="    {return *yytext;}
">="    {return *yytext;}
"=="    {return DE;}
","     {return *yytext;}
" "     {}
"\n"    { }
"<"     { return *yytext;}
">"    {return *yytext;}
[()]	{return *yytext;}
"="     {return *yytext;}
"["     {return *yytext;}
"]"     {return *yytext;}
"end"     {return END ;}
"read"  {return READ;}
"write"  {return WRITE;}
"if"     {return IF;}
"then"   {return THEN;}
"do"    {return DO;}
"while"  {return WHILE;}
"endif"  {return ENDIF;}
"endwhile" {return ENDWHILE;}
"Int"   {return INT;}
"Bool"  {return BOOL;}
"decl"  {return DECL;}
"enddecl" {return ENDDECL;}
"begin"   {return BE;}
"else"    {return ELSE;}
"main"   {return MAIN;}
"ret"   {return RET;}
"{"     {return *yytext;}
"}"     {return *yytext;}

"true"     {
               char m = 'q';char *m2 = &m;
              yylval=makenode(1,20,m2,1,NULL,NULL,NULL);
              return TRUE;}

"false" { 
              char m = 'q';char *m2 = &m;
             yylval=makenode(1,21,m2,0,NULL,NULL,NULL);
              return FALSE;}



[a-z]+     {
           s=(char *)malloc(sizeof(char)); 
           strcpy(s,yytext); 
           yylval=makenode(0,9,s,10,NULL,NULL,NULL); 
           return ID;}

.          { printf("%s\n",yytext);}
%%


int yywrap(void) {
	return 1;
}

