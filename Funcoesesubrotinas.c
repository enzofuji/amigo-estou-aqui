#include <stdio.h>
//Funçőes entre subrotinas


int num;

void calc (double a, double b, double r1, double r2, double r3, double r4){

 printf("Digite o valor de num: \n");	
 scanf("%d",&num);
 printf("%f",a);
 printf("%f",b);
 printf("%d",num);

 switch (num) {
  case 1:
	r1= a + b;
	printf("%f",r1);
	break;
	
  case 2:	
	r2= a - b;
	printf("%f",r2);
	break;
	
  case 3:
	r3= a * b;
	printf("%f",r3);
	break;
	
  case 4:
	r4= a / b;
	printf("%f",r4);
	break;
	
 }
}

int main(){
	
	double a,b,r1=0,r2=0,r3=0,r4=0;

	printf("Digite o valor de A: \n");

	scanf("%f",&a);

	printf("Digite o valor de B: \n");
	scanf("%f",&b);

	
  	calc(a,b,r1,r2,r3,r4);

 
 return 0;
}
