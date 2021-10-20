#include<stdio.h>
main()
{
	printf("\nO programa vai somar todos os numeros pares ate o valor inserido.");
	printf("\nInsira com um numero inteiro:\n");


	int final = 0;
	scanf("%d",&final);
	
	int total = 0;
	int numero = 0;
	
	for ( int i=0; i<=final; i++){
		
		if(i%2==0){
			total=total+i;
			
		}
	}
	printf("\nTotal: %d\n",total);
	
	system("PAUSE");
	return 0;
}
