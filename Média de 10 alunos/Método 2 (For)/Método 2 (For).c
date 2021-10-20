#include<stdio.h>
main()
{
	printf("\nMetodo 2\n");
	printf("\nExercicio 1: Entre com a nota de 10 alunos e informe sua media.\nAluno 1: ");
	system("PAUSE");
	
	float aluno;//nota individual
	int cont;//controle do for
	float pesototal=0;
	
	for(cont=1; cont<=10; cont++){
			printf("Insira a nota do aluno %d: ",cont);
			scanf("%f",&aluno);
			pesototal=pesototal+aluno;
			}
		
		float media;
		media=pesototal/10;
		printf("Media: %.2f",media);
			
	system("PAUSE");
	return 0;
}
