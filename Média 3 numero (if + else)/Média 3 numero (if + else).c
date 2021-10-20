#include<stdio.h>
main()
{
  float a;
  float b;
  float c;
  float n1;
  float n2;
  float n3;
  
  	printf("Digite a primeira nota: ");
  	scanf("%f",&a);
  	printf("Digite a segunda nota: ");
  	scanf("%f",&b);
  	printf("Digite a terceira nota: ");
  	scanf("%f",&c);
  	
  		if(a >= b){
  			if(b >= c){
  				n1=a;
  				n2=b;
  				n3=c;
			  }
			else{
				if(c >= a){
				n1=c;
				n2=a;
				n3=b;
				}
				else{
				n1=c;
				n2=b;
				n3=a;
				}
			}
		}
		else{
			if(b >= c){
			n1=b;
			n2=c;
			n3=a;
			}
			else{
			n1=c;
			n2=b;
			n3=a;
			}
		}





	float media;
	media=(n1+n2)/2;
	if(media>=6)
	{
	printf("\nAprovado!");
	}
	else
	{
	printf("\nReprovado!");
	}
		
	printf ("\nMedia = %.1f\n",media);
	
  
  system("PAUSE");
}
