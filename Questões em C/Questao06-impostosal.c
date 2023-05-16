#include<stdio.h>
main()
{
float salario;
printf("Digite o seu salario: ");
scanf("%f",&salario);
if (salario <= 1903.98)
{printf("O imposto de renda eh de 0 reais. ");}	
	else {
		if ((salario>=1903.99)&&(salario<=2826.65))
		{printf("O valor do imposto de renda eh: %.2f", salario*0.075);}
		else {
			if ((salario>=2826.66) && (salario<=3751.05))
			{printf("O valor do imposto de renda eh: %.2f", salario*0.15);}
			else {
				if((salario>=3751.06)&&(salario<=4664.68))
				{printf("O valor do imposto de renda eh: %.2f", salario*0.225);}
				else {
					if (salario>4664.68)
					printf("O valor do impos de renda eh: %.2f",salario*0.275);
					}
				}		
			}		
		}	
	}

