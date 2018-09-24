#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float x,a;
	printf("Enter nuber x :");
	scanf("%f",&x);
	x= pow(x,5);
	a= 8*x;
	printf("Result : %.3f",a);
	return 0;
}
