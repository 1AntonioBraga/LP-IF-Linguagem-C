#include<stdio.h>
main()
{
int	a,b,c;
printf("Digite 3 numeros diferentes: ");
scanf("%d %d %d",&a,&b,&c);
if ((a<b) && (a<c) && (b<c))
	{printf("A ordem correta eh: %d %d %d",a,b,c);}	
	else {
		if ((b<a) && (b<c) && (a<c))
		{printf("A ordem correta eh: %d %d %d",b,a,c);}
		else {
			if ((c<a)&&(c<b)&&(a<b))
			{printf("A ordem correta eh: %d %d %d",c,a,b);}
			else {
				if (((c<a)&&(c<b)&&(a>b)))
				{printf("A ordem correta eh: %d %d %d",c,b,a);}
				else{
					if ((a<b) && (a<c) && (b>c))
					{printf("A ordem correta eh: %d %d %d", a,c,b);}
					else{
						if (((b<a) && (b<c) && (c<a)))
						{printf("A ordem correta eh: %d %d %d",b,c,a);}
					}
				}
			}
		}
	}
	
}
