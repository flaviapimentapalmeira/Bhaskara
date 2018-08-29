#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "English");
// Escrever a fórmula de Bhaskara.

int a,b,c,delta;
float x1,x2;
printf("\t Digite o valor de a:\t");
scanf("%d",&a);
printf("\t Digite o valor de b:\t");
scanf("%d",&b);
printf("\t Digite o valor de c:\t");
scanf("%d",&c);
delta= abs((b*b)-4*a*c);
printf("\t Valor do delta:\t");
printf("%d",delta);
x1=(-b+sqrt(delta))/(2*a);
printf("\n\tValor de x1= ");
printf("\t%f",x1);
x2=(-b-sqrt(delta))/(2*a);
printf("\n\tValor de x2= ");
printf("\t%f",x2);




//Fim do algoritmo
fflush(stdin);
getch();
return 0;
}



