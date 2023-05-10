#include<stdio.h>
main()
{
int prodc;
printf("Digite o codigo do produto: ");
scanf("%d",&prodc);
switch (prodc)
	{
	case 1:printf("Alimento nao-perecivel");break;
	case 2 ... 4:printf("Alimento perecivel");break;
	case 5 ... 6:printf("Vestuario");break;
	case 8 ... 15:printf("Limpeza e utensilios domesticos");break;
	default:printf("Codigo invalido!!");
	}
	
}
