#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a[10];
	int i=0,max=0,min=32767,t=0;
	int t1=0,t2=0;
	for (i=0; i<10; i++){
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	max=a[0];
	for (i=0;i<10;i++){
	if (a[i]>max){
	max=a[i];
	t1=i;
	}	
	}
	printf("max=%d\n",max);
	for (i=0;i<10;i++){
	if (a[i]<min){
	min=a[i];
	t2=i;
	}	
	}
	printf("min=%d\n",min);
	printf("pozicia max %d\n",t1);
	printf("pozicia min %d\n",t2);
	t=a[t1]; a[t1]=a[t2]; a[t2]=t;
	for(i=0;i<10;i++) {
	printf("a[%i]=%i ",i,a[i]);
	}
	return 0;
}
