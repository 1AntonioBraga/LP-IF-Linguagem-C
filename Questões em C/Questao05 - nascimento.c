#include<stdio.h>
main()
{
int anonow, nascimento, aux;
printf("Digite seu ano de nascimento: ");
scanf("%d",&nascimento);
anonow = 2023;
aux = anonow - nascimento;
if(aux>=18)
	{
	printf("Voce ja pode votar e tirar a cnh. Sua idade eh: %d",aux);
	}
	else
	{
	printf("Atualmente menor de idade, nao pode dirigir nem votar!");	
	
	}	
	
}
