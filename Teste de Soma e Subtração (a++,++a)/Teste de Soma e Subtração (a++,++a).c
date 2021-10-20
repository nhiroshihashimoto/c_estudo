#include<stdio.h>
main()
{
	int a;
	int b;
	int c;
	
	c=6;
	a=3;
	a++;
	a=c;
	b=a++;  //valor de incremento está após a variável "a"
		   //sendo assim, ele adiciona para depois somar.
	b=++c; //Valor de incrementos está antes da variável "c"
		  //Sendo assim, ele soma para depois adicionar.
	c=c*b;
	
	printf("Valor de C: %d \n%d\n",c,b);
	
	system("PAUSE");
}
