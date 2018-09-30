#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a,b,c,d,e,f,z,s1,s2;
	char s[10];
	puts("Enter card number");
	scanf("%d",&z);
	a=z/100000;
	b=(z%100000)/10000;
	c=(z%10000)/1000;
	d=(z%1000)/100;
	e=(z%100)/10;
	f=z%10;
	s1=a+b+c;
	s2=d+e+f;
	itoa(z,s,10);
	if (strlen(s)<=5 || strlen(s)>=7) printf("Wrong numer");
		else
			if (s1==s2) printf("Your card is lucky!");
				else printf("Your card isn't lucky.");
	return 0;
}
