yacc -d symbol.y
lex symbol.l
gcc -w lex.yy.c y.tab.c 
./a.out test5.txt
lex symbol1.l
gcc -w lex.yy.c
./a.out assem.xsm
cd /home/nikhil/Music/stage10/xsm_expl
./xsm -e assem1.xsm

