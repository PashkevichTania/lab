#include <stdio.h>
#include <stdlib.h>

void sorting(int array[], int  n){ 
int i, j; 
for(i = 0, j = n - 1; i < j; --j, ++i){ 
int t = array[j]; 
array[j] = array[i]; 
array[i] = t; 
} 
} 
int main(void){
	int s=0,i=0,j=0,n=0,t=0,c=0;
	printf("vvedite colichestvo strok i stolbcov\n");
	scanf("%d",&n);
	int array[n][n];
	for (i=0;i<n;i++)
	for (j=0;j<n;j++){ 
	printf("Vvedite element [%d,%d]\n", i+1, j+1);
	scanf("%d",&array[i][j]);
}
printf("Matrix: \n"); 
printf("\n"); 
for (i=0;i<n;i++) 
{ 
for (j=0;j<n;j++) 
printf("%d ", array[i][j]); 
printf("\n"); 
} 
for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (array[i][j+1]>array[i][j]) {
				sorting(array[i], n); 
			} break;
		}break;
	}
	printf("\n"); 
	printf("new matrix:\n"); 
	for(i = 0; i < n; ++i){ 
	printf("\n"); 
	for(j = 0; j < n; ++j) 
	printf("%d ", array[i][j]); 
	} 
	return 0; 
}
