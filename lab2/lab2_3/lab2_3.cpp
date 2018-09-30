#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"rus");
	int a;
	printf("Choose season\n");
	puts("1-summer");
	puts("2-winter");
	puts("3-fall");
	puts("4-spring");
	scanf("%d",&a);
	switch (a)
	{
		case 1: puts("june,july,august"); break; 
		case 2: puts("december,january,february"); break; 
		case 3: puts("september,october,november"); break; 
		case 4: puts("march,april,may");  break; 
		default : puts("error,wrong number");  break;
	}
	return 0;
}
