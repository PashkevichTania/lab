#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL,"rus");
	int a,b,c,n;
	puts("������� ����� a,b,c,N");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&n);
	a%n==0 ? puts("����� N �������� ��������� ����� a.") : puts("����� N �� �������� ��������� ����� a.");
	b%n==0 ? puts("����� N �������� ��������� ����� b.") : puts("����� N �� �������� ��������� ����� b.");
	c%n==0 ? puts("����� N �������� ��������� ����� c.") : puts("����� N �� �������� ��������� ����� c");
	return 0;
}
