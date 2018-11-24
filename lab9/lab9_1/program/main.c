#include <stdio.h>
#include <locale.h>

int main(){
	int i,q[10],K;
	FILE *f,*g;
printf("enter K\n");
scanf("%d",&K);
if(!(f = fopen("f.txt","r")))
{ printf("can not open the file\n");
return 0; }
for (i=0; i<10; i++) {
fscanf(f,"%d",&q[i]);
}
fclose(f);
if(!(g = fopen("g.txt", "w+")))  {
printf("can not create the file\n");
return 0;}
for (i=0; i<10; i++){
	if(q[i]>K){
	fprintf(g,"%d ",q[i]);
}
}
fclose (g);
printf("numbers are wroted down in the file");
return 0;
}
