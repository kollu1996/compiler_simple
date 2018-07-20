yacc -d symbol.y
lex symbol.l
gcc -w lex.yy.c y.tab.c 
./a.out test3.txt
lex symbol1.l
gcc -w lex.yy.c
./a.out assem.xsm
cd /home/nikhil/stage7/xsm_expl
./xsm -e assem1.xsm

cd /home/nikhil/Downloads/stage7/xsm_expl
./xsm -e assem1.xsm

cd /home/nikhil/Downloads/stage7/xsm_expl
./xsm -e assem1.xsm

cd /home/nikhil/Downloads/stage7/xsm_expl
./xsm -e assem1.xsm




Int factorial(Int n)
{
decl
		Int f;
	enddecl
	begin
		if(n<1) then
			f=1;
		else
			f=n*factorial(n-1);
		endif;
		ret f;
	end
}

Int factorial(Int n)
{
decl
		Int f;
	enddecl
	begin
		if(n<1) then
			f=1;
		else
			f=n*factorial(n-1);
		endif;
		ret f;
	end
}





Int main()
{
decl
Int n,m,res;
enddecl
 begin
        read(n);
		while( n > 1 ) do
			read(m);
			res=factorial(m);
			n = n-1;
		endwhile;
   end
}

Int factorial(Int n)
{
decl
		Int f;
	enddecl
	begin
		if(n<1) then
			f=1;
		else
			f=n*factorial(n-1);
		endif;
		ret f;res=factorial(m);
	end
}

Int factorial(Int n)
{
decl
		Int f;
	enddecl
	begin
		if(n<1) then
			f=1;
		else
			f=n*factorial(n-1);
		endif;
		ret f;
	end
}

res=factorial(m);




Int add(Int a,Int b)
{
 decl
 Int s;
enddecl
begin
s = a + b;
ret s;
end
}


r = add(p,q);


lex symbol1.l
gcc -w lex.yy.c
./a.out assem.xsm
cd /home/nikhil/Downloads/stage7/xsm_expl
./xsm -e assem1.xsm










lex symbol1.l
gcc -w lex.yy.c
./a.out assem.xsm
cd /home/nikhil/Music/stage10/xsm_expl
./xsm -e assem1.xsm
gcc -w lex.yy.c
./a.out assem.xsm
cd /home/nikhil/Music/stage10/xsm_expl
./xsm -e assem1.xsm



