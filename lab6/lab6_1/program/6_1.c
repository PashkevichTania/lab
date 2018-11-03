#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,t=0,n,max=0,sum=0;
	printf("vvedite kol-vo elementov \n");
	scanf("%d",&n);
	int *a;
	a = (int*)calloc(n,sizeof(int));
	for (i=0;i<n;i++){
		printf("vvedite element [%d]\n", i);
		scanf("%d",a+i);
	}
	printf("\nIshodni massiv: \n", i);
	for (i=0;i<n;i++){
		printf("%d ", *(a+i));
	}
	for (i=0;i<n;i++){
		if (*(a+i)>max)
		max=*(a+i);
	}
	printf("max=%d\n", max);
	for (i=0;i<n;i++){
		if (*(a+i)>0)
		t=i;
	}
	printf("nomer poslednego pologitelnogo elementa'=%d\n", t);
	for (i=0;i<=t;i++){
		sum+=*(a+i);
	}
	printf("sum=%d\n", sum);
	free(a);
	return 0;
}
