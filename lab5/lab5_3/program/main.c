#include <stdio.h>
#include <stdlib.h>

int main(void){
	int s=0,i=0,j=0,str=0,stolb=0,t=0,c=0;
	printf("vvedite colichestvo strok i stolbcov\n");
	scanf("%d",&str);
	scanf("%d",&stolb);
	int array[str][stolb];
	for (i=0;i<str;i++)
	for (j=0;j<stolb;j++){ 
	printf("Vvedite element [%d,%d]\n", i+1, j+1);
	scanf("%d",&array[i][j]);
}
printf("Matrix: \n"); 
printf("\n"); 
for (i=0;i<str;i++) 
{ 
for (j=0;j<stolb;j++) 
printf("%d ", array[i][j]); 
printf("\n"); 
} 

	printf("A new matrix: \n");
	for (i = 0; i < str; i++)
	{
		for (j = 0; j < stolb; j++)
		{
			if (array[i][j+1]>array[i][j]) 
			{
				c += 1; 
			}
		}
		if (c == stolb - 1) 
		{
			for (j = stolb - 1; j > -1; j--)
			{
				printf("%d ", array[i][j]);
			}
			printf("\n");
		}
		else
		{
			for (j = 0; j < stolb; j++)
			{
				printf("%d ", array[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
	
}
