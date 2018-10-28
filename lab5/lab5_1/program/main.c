#include <stdio.h>
#include <stdlib.h>
int kol_elem(int ** mas, int n, int i)
{
    int j, temp, max=1, col, fl;
    for(j=0; j<n-1; j++)
    {
        col=1;
        fl=1;
        for(temp=0; temp<j && fl; temp++)
            if(mas[i][j]==mas[i][temp])
                fl=0;
        if(fl)
            for(temp=j+1; temp<n; temp++)
                if(mas[i][j]==mas[i][temp])
                    col++;      
        if(col>max)
            max=col;
    }
    return max;
}
 
int main ()
{
    int **mas, n, i,j, temp, i1,count;
  printf("Razmernost matrici n= ");
  scanf("%d", &n);
  mas = (int **)malloc (n * sizeof (int *));
  for (i = 0; i < n; i++)
  mas [i] = (int *)malloc (n * sizeof (int));
  for(i=0;i<n;i++)  
     for(j=0;j<n;j++)
     {
        printf("[%d][%d]=",i,j);
        scanf("%d",&mas[i][j]);
     }
  printf("Ishodnay matrica\n");
  for(i=0;i<n;i++)  
  {
          for(j=0;j<n;j++)
         printf("%d ",mas[i][j]);  
      printf("\n");
  }
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            if(kol_elem(mas, n, j)>kol_elem(mas, n, j+1))
                for(i1=0; i1<n; i1++)
                {
                    temp=mas[j][i1];
                    mas[j][i1]=mas[j+1][i1];
                    mas[j+1][i1]=temp;
                }
    printf("Poluchennay matrica:\n");
    for(i=0; i<n; i++)
        {
       for(j=0; j<n; j++)
                   printf("%d ", mas[i][j]);
           printf("\n");
        }
        
        
for (j=0;j<n;j++)
            {
                for (i=0;i<n;i++) if (mas[i][j] >= 0) count++;
                if (count == n)
                {
                    printf("stolbec bez otricatelnyh elementov %d\n",j);
                    break;
                }
                count = 0;
            }
	return 0;
}
