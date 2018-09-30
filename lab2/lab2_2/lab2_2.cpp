#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"rus");
	int a,b,c,n;
	puts("Введите числа a,b,c,N");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&n);
	a%n==0 ? puts("Число N является делителем числа a.") : puts("Число N не является делителем числа a.");
	b%n==0 ? puts("Число N является делителем числа b.") : puts("Число N не является делителем числа b.");
	c%n==0 ? puts("Число N является делителем числа c.") : puts("Число N не является делителем числа c");
	return 0;
}
