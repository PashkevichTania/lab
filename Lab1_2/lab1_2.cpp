#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float x,y,z,s,a,b,c,d,f,v;
	puts("Enter numbers x,y,z");
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	//x= 3.74*pow(10,-2);
	//y= -0.825;
	//z= 0.16*10*10;
	a= 1+pow(sin(x+y),2);
	f=(2*y)/(1+x*x*y*y);
	b= fabs(x-f);
	c=pow(x, fabs(y));
	d=cos(atan(1/z))*cos(atan(1/z));
	s=(a/b)*c+d;
	puts("result");
	printf("%.5f",s);
	return 0;
}
