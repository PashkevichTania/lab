#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Rus");
	int a[10];
	int i=0,n,counter=0,sum=0;
	float average=0;
	printf("введите количество элементов массива\n");
	scanf("%d",&n);
	for (i=0; i<n; i++){
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	for ( i = 0; i < n; i++){
		sum += a[i];
	}
	average=sum/n;
	printf("среднее значение = %.2f\n",average);
	for (i=0;i<n;i++){
	if (a[i]>average){
	counter++;
	}
	}
	printf("колличество элементов больше среднего значения = %d",counter);
	return 0;
}
