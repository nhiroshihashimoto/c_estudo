#include<stdio.h>
main()
{
	printf("\nExercicio 1: Entre com a nota de 10 alunos e informe sua media.\nAluno 1: ");
	float aluno;
	scanf("%f",&aluno);
	
	printf("\nAluno 2: ");
	float aluno2;
	scanf("%f",&aluno2);

	printf("\nAluno 3: ");
	float aluno3;
	scanf("%f",&aluno3);
	
	printf("\nAluno 4: ");
	float aluno4;
	scanf("%f",&aluno4);
	
	printf("\nAluno 5: ");
	float aluno5;
	scanf("%f",&aluno5);
	
	printf("\nAluno 6: ");
	float aluno6;
	scanf("%f",&aluno6);
	
	printf("\nAluno 7: ");
	float aluno7;
	scanf("%f",&aluno7);
	
	printf("\nAluno 8: ");
	float aluno8;
	scanf("%f",&aluno8);
	
	printf("\nAluno 9: ");
	float aluno9;
	scanf("%f",&aluno9);
	
	printf("\nAluno 10: ");
	float aluno10;
	scanf("%f",&aluno10);
	
	float media;
	media=(aluno+aluno2+aluno3+aluno4+aluno5+aluno6+aluno7+aluno8+aluno9+aluno10)/10;
	printf("\nMedia: %.2f",media);	
	
	system("PAUSE");
	return 0;
}
