#include<stdio.h>
main()
{
float peso,altura,imc;
printf("Digite seu peso e sua altura: ");
scanf("%f %f", &peso,&altura);
imc = peso /((altura)*(altura));
if (imc < 18.5)
	{printf("Abaixo do peso!");}
	else {
		if ((imc>=18.5) && (imc<=25))
		{printf("Peso normal");}
		else {
			if ((imc>25) && (imc<=30))
			{printf("Acima do peso!");}
			else {
				if(imc>30)
				{printf("Obeso");}		
			}		
		}	
	}
}

