#include<stdio.h> 
#include<conio.h> 
#include<locale.h>
#include<string.h>
#include <windows.h>
char output();
char add();
char search(char *n);
struct gos
{ 
  char name[20];  
  char capital[20];
  char population[30];
  char area[3];
} ;
struct gos inf[30];
int r;
int i,x,x1;
char n[20];

char output(){
	FILE *f;
	int i;
    printf("List:\n");
if(!(f=fopen("gos.dat","r")))
{ printf("can not open the file\n"); return 0;}
for(i=0;i<r;i++)
{ 
  puts(inf[i].name);
  puts(inf[i].capital);
  puts(inf[i].population);
  puts(inf[i].area);
printf("\n\n");
}
fclose(f);
}

char add(){
    FILE *f;
	int i;
	if(!(f = fopen("gos.dat", "a+"))) {
             printf("can not create the file\n");
             return 0;
       }
{   printf("number %d\n",r+1);
	puts("Enter the name");
	fflush(stdin);
	gets(inf[r].name);
	fputs(inf[r].name,f);
	fputs ("\n", f);
	puts("Enter capital");
	fflush(stdin);
	gets(inf[r].capital);
	fputs(inf[r].capital,f);
	fputs ("\n", f);
    puts("Enter population");
	fflush(stdin);
	gets(inf[r].population);
	fputs(inf[r].population,f);
	fputs ("\n", f);
	puts("Enter area");
	fflush(stdin);
	gets(inf[r].area);
	fputs(inf[r].area,f);
	fputs ("\n\n", f);
	r++;
}
fclose(f);
}
char search(char *n){
	FILE *f;
	if(!(f = fopen("gos.dat", "r"))) {
    printf("can not open the file\n");
    return 0;
}

for(i=0; i<r;i++)
{
    if (!strcmp(inf[i].name,n))
		{
        printf("\n\nName: %s \n",inf[i].name);
        printf("capital: %s \n",inf[i].capital);
        printf("population: %s \n",inf[i].population);
        printf ("area: %s \n",inf[i].area);
                }
}
fclose(f);
fflush(stdin);
return 0;
}

int main(){
FILE *f;
        if(!(f = fopen("gos.dat", "w+b"))) {
             printf("can not open the file\n");
             return 0;
       }
 r=0;
do
{
add();
puts("add? enter 1 or 0");
scanf("%d", &i);
} 
while(i);
do {
printf("1-output\n2-add\n3-search\n4-Exit\n");
scanf("%d",&x);
switch(x){
	case 1:
		output();
		break;
	case 2:
		add();
		break;
	case 3:
		printf("Enter the name of the counry\n");
		scanf("%s",&n);
		search(n);
	case 4:
		break;
}
printf("Continue? (1/0)\n");
scanf("%d",&x1);}
while(x1);
}
