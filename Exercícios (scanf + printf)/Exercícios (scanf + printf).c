#include<stdio.h>
#include<math.h>
main()
{
         printf("\n                 Lista de Exercicios\n                             Aluno: Hiroshi Hashimoto\n");
         printf("\nExercicio numero 1: \nImprima seu nome no terminal de saida.\n");
         printf("\nResposta: Hiroshi Hashimoto\n");
         system("PAUSE");
         
         system("cls");
         
         char nome[10];
         printf("Exercicio numero 2: \nEntre com um nome qualquer e o imprima.\n");
         scanf("%s",&nome);
         printf("\nResposta: %s\n\n",nome);
         
         system("PAUSE");
         system("cls");
         
         char avo[10];
         printf("Exercicio numero 3: \nEntrar com o nome de seu avo(masculino) e imprimir 100.000 de vezes.\n");
         scanf("%s",&avo);
         
         float imp1;
         for(imp1=1; imp1<=100000; imp1++)
                  {
                  printf("%.f - %s\n",imp1,avo);
                  }
                  {
                  printf("\nFeito!\n\n");
                  }
                  
         system("PAUSE");
         system("cls");
         
         float base;
         float altura;
         printf("Exercicio numero 4: \nEntre com a base e altura de um retangulo e imprima a area e o perimetro.\n");
         printf("\nInforme a base: \n");
         scanf("%f",&base);
         printf("\nInforme a altura: \n");
         scanf("%f",&altura);
         
         float area;
         area=altura*base;
         
         printf("\nArea: %.f",area);
         
         float perimetro;
         perimetro=2*(altura+base);
         
         printf("\nPerimetro: %.f\n\n",perimetro);
          system("PAUSE");
          
          system("cls");
        
        float notaav1;
          printf("Exercicio numero 5: \nEntre com as notas AV1 e AV2 e imprima a media.\n");
          printf("\nInforme a nota da AV1: \n");
          scanf("%f",&notaav1);
          float notaav2;
          printf("\nInforme a nota da AV2: \n");
          scanf("%f",&notaav2);
          float medianota;
          medianota=(notaav1+notaav2)/2;
          
          printf("\n\nMedia: %.2f\n\n",medianota);
          
          system("PAUSE");
          system("cls");
          
          printf("Exercicio numero 6 foi ignorado devido as ordens do docente.\n\n");
          
          system("PAUSE");
          system("cls");
          
          printf("Exercicio numero 7: \nAvo Chico tem 1,75 metros e diminui 1,5 cm por ano, enquanto o avo Juca tem 1,65 e diminui 1 cm por ano. Construir um programa que calcule quantos anos serao necessarios para que Juca seja maior que Chico.\n");
          float avodechicometro;
          avodechicometro=1.75; //diminui .015 por ano
          
          float avodejucametro;
          avodejucametro=1.65; //diminui .01 por ano
          
          int ano=0;
          
          for (ano=0; avodechicometro>avodejucametro; ano++)
          {
           avodejucametro=avodejucametro-0.01;
           avodechicometro=avodechicometro-0.015;
          }
          
          printf("\nAno %d\n\nTamanho do Avo Chico: %.3f.\n\nTamanho do Avo de Juca: %.3f.\n\n",ano,avodechicometro,avodejucametro);

          system("PAUSE");
          system("cls");
          
          printf("Exercicio numero 8: \nUm comerciante comprou um produto e quer vende-lo com o lucro de 40 por cento se o valor da compra for menor que R$28,00. Caso contrario o lucro devera ser de 25 por cento.\n\nEntrar com o nome e o valor de compra do produto e imprimir o valor da venda.\n\n");
          printf("Insira o nome do produto: ");
          char nomecomerciante[10];
          scanf("%s",&nomecomerciante);
          
          printf("\n\nInsira o valor da mercadoria: ");
          float valorcompra;
          scanf("%f",&valorcompra);
          
          if(valorcompra<=28){
          valorcompra=valorcompra+(valorcompra*.4);
          }
                    else{
                    valorcompra=valorcompra+(valorcompra*.25);
                    }
          
          printf("\n\nNome do produto: %s\nValor do produto: %.2f\n\n",nomecomerciante,valorcompra);
          
          system("PAUSE");
          system("cls");
          
          printf("Exercicio numero 9: Faca um programa que retorne se um numero inteiro lido a apartir do teclado e primo ou nao.");
          printf("\n\nInforme qualquer numero: ");
          int numeroaleatorio;
          scanf("%d",&numeroaleatorio);
          int a=0;
          a=sqrt(numeroaleatorio); //M�todo Crivo de Erat�stenes (Utilizado para menor consumo de processamento)
          
          float c=1;
          int b=2;
          
          for (b=2; b<=a && c!=0;  b++){
          c=numeroaleatorio%b;
          }
                              if(c==0 || numeroaleatorio<=1){
                              printf("\nNumero inserido nao e primo.\n\n");
                              }
                              else{
                              printf("\nNumero inserido e primo.\n\n");
                              }
                              
                              system("PAUSE");
                              
                              system("cls");
                    
          printf("Exercicio numero 10:\nLeia uma temperatura em graus centigrados e apresenta-la covertida em Fahrenheit.\nFormula de conversao: F = (9*C+160) / 5 \n");
          printf("\n\nInforme uma temperatura: ");
          float temperatura;
          scanf("%f",&temperatura);
          printf("\n\nTemperatura informada em Graus Celsius: %.1f",temperatura);
          temperatura=(9*temperatura+160)/5;
          printf("\n\nTemperatura convertida para Fahrenheit: %.1f\n\n",temperatura);
          
          system("PAUSE");
          system("cls");
          
          printf("Exercicios finalizados.\n\n");
          
         system("PAUSE");
}
