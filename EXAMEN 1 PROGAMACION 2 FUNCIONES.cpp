#include<iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

int A,B,C;
int r;
int xo,vot,ac,t;
int m;

int ecuacion (int A, int B, int C);
int volumen (int r);
int mruv (int xo, int vot, int ac, int t);

int main()
{
printf("Que operacion desea realizar? \n");
printf("1. Ecuacion de segundo grado \n");
printf("2. Volumen de la esfera \n");
printf("3. Desplazamiento de un movil en MRUV \n \n");
scanf("%d" , &m);

switch(m){

case 1:
	{
		ecuacion(A,B,C);
		break;
	}
case 2:
	{
		volumen(r);
		break;
	}
case 3:
	{
		mruv(xo,vot,ac,t);
		break;	
	}
}
getch();
return 0;
}

int ecuacion (int A, int B, int C)
{
	printf("Digite el primer coeficiente del polinomio (A) \n");
	scanf("%d", &A);
	printf("Digite el segundo coeficiente del polinomio (B) \n");
	scanf("%d", &B);
	printf("Digite el tercer coeficiente del polinomio (C) \n");
	scanf("%d", &C);
	int x1= (-B + sqrt(pow(B,2)-4*A*C))/2*A;
	int x2= (-B - sqrt(pow(B,2)-4*A*C))/2*A;
	printf("Las raices de su operacion son: \n %d para la raiz positiva y %d para la raiz negativa" , x1, x2);
}

int volumen(int r)
{
	while(r<=0) {
	printf("Digite el valor del radio: ");
	scanf("%d" , &r);
	}
	float v=(1.333333333)*3.1416*pow(r,3);
	printf("El volumen de la esfera de radio %d es igual a %.2f" , r, v);

}

int mruv(int xo,int vot,int ac,int t)
{
	printf("Digite el valor del desplazamiento inicial: \n");
	scanf("%d", &xo);
	printf("Digite el valor de la velocidad inicial: \n");
	scanf("%d", &vot);
	printf("Digite el valor del tiempo de desplazamiento: \n");
	scanf("%d", &t);
	printf("Digite el valor de la aceleracion: \n");
	scanf("%d", &ac);
	int xf=xo+vot+((ac*t*t))/2;
	printf("El valor del desplazamiento final es de %d", xf);
}
