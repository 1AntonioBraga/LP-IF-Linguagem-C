#include<stdio.h>

main()
{
int codpay;
printf("Digite o codigo do produto: ");
scanf("%d",&codpay);
	switch (codpay)
	{
	case 1:printf("Pagamento a vista em dinheiro ou cheque, 10 porcento de desconto!"); break;
	case 2:printf("Pagamento a vista no cartao de credito, 15 porcento de desconto!"); break;
	case 3:printf("Pagamento em duas vezes, valor normal sem juros."); break;
	case 4:printf("Pagamento em duas vezes, valor normal e juros de 10 porcento.");break;
	default:printf("Codigo invalido!");
	}	
}
