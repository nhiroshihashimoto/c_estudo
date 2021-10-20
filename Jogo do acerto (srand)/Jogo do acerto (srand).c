#include<stdio.h>

main(){
	int repeticao=1;
	while(repeticao==1){
	printf("Criado por Hiroshi Hashimoto.\n\nVamos ao jogo!\n\nEu imaginei um numero de 1 a 100, tente acerta-lo!\nPS: Caso voce erre, informarei um novo intervalo de numeros para voce ter outra chance.\n");
		srand((unsigned) time(NULL));
		int n=(rand() % 100)+1;
		int r;
		int min=1;
		int max=100;
		int t=0;
	
		while(r!=n){
		printf("\nInsira um numero entre %d e %d:\n", min, max);
		scanf("%d", &r);
			if(r<n){
				if(r>min){
					min=r;
					t++;
				}
			}
			else{
				if(r<max){
				max=r;
				t++;
				}
			}
		}
			printf("\n\nACERTOOO MIZERAVIIIII!!!!");
				if(t>6){
				printf("\nDEMOROU MAS CONSEGUIU!\n");
				}
			printf("\n\nInsira 1: Para jogar novamente.\nInsira 0: Para terminar o programa. :(\n");
			scanf("%d", &repeticao);
			
         system("cls");
	}
	
	system("\nPAUSE");
	return 0;
}
