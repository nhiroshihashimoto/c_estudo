#include<stdio.h>
main()
{
	float salariobruto;
	float refeicaodia;
	float transportedia;
	float gratificacao;
	float diasuteis;
	
	printf("\n Este calculo eh baseado no custo do funcionario para a empresa. \n Informe o Salario Bruto: R$");
	scanf("%f",&salariobruto);
	
	printf("\n Informe o valor do Vale Refeicao por dia: R$");
	scanf("%f",&refeicaodia);
	
	printf("\n Informe o valor do Vale Transporte por dia: R$");
	scanf("%f",&transportedia);
	
	printf("\n Informe o valor mensal da Gratificacao: R$ ");
	scanf("%f",&gratificacao);
	
	printf("\n Informe o numero de dias uteis do mes: ");
	scanf("%f",&diasuteis);
		
	printf("\n\n\n\n\n\n Resultado detalhado abaixo \n\n Salario Bruto:              R$ %.2f",salariobruto);
	
	float inssfgts;
	inssfgts=(salariobruto+gratificacao)*0.3147;
	
	printf("\n INSS+FGTS:                  R$ %.2f",inssfgts);
	
	float refeicaomensal;
	refeicaomensal=refeicaodia*diasuteis;
	
	printf("\n Vale Alimentacao:           R$ %.2f",refeicaomensal);
	
	float transportemensal;
	transportemensal=transportedia*diasuteis;
	
	printf("\n Vale Transporte:            R$ %.2f",transportemensal);
	
	float custofinal;
	custofinal=salariobruto+gratificacao+inssfgts+refeicaomensal+transportemensal;
	
	float decimoterceiro;
	decimoterceiro=custofinal/12;
	
	printf("\n Parcela do decimo terceiro: R$ %.2f",decimoterceiro);
	
	printf("\n\n Custo total mensal do funcionario: R$ %.2f \n\n\n",custofinal);
system("PAUSE");
}




