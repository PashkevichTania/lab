#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i=0,j=0,t=0,summin=0,summax=0,min=10,max=0,*p,*b;
	int *a;
	a = (int*)calloc(36,sizeof(int));
for (i=0;i<6;i++)
for (j=0;j<6;j++){ 
{*(a+i+j)=rand() %10;
}
}
printf("Matrix: \n"); 
printf("\n"); 
for (i=0;i<6;i++) 
{ 
for (j=0;j<6;j++) 
printf("%d ", *(a+i+j)); 
printf("\n"); 
} 
for (i=1;i<6;i+=2){
	for (j=0;j<6;j++){
		if (*(a+i+j)>max) 
			{
				max=*(a+i+j);
				t=max;
			}	
		}
		summax+=t;
		max=0;
	}
t=0;
printf("summa max elementov=%d\n", summax);
for (i=0;i<6;i+=2){
	for (j=0;j<6;j++){
		if (*(a+i+j)<min) 
			{
				min=*(a+i+j);
				t=min;
			}	
		}
		summin+=t;
		min=10;
	}
printf("summa min elementov=%d", summin);
free(a);
return 0;
}
