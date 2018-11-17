#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 
#include "windows.h" 

struct chel 
{ 
char fio[20]; 
char adres[20]; 
unsigned long long int num; 
int age; 
}; 

struct chel person[20]; 
struct chel buffer; 
int i,j,n,menu,k,x,age1,z=0,y,r, s; 
unsigned long long int num1;
char fio1[20],adres1[20]; 

int main(){
printf("Vvedite kol-vo chelovek: "); 
scanf("%d",&n); 
for(i=0;i<n;i++) 
{ 
printf("Chelovek %d :\n", i+1); 
puts("Vvedite F.I.O.: "); 
fflush(stdin); 
gets(person[i].fio); 
puts("Vvedite adres: "); 
fflush(stdin); 
gets(person[i].adres); 
puts("Vvedite nomer: "); 
scanf("%llu", &person[i].num); 
puts("Vvedite vozrast: "); 
scanf("%d", &person[i].age); 
} printf("\n\n"); 
while(1) 
{ 
printf("\nOperaciia: "); 
printf("\nSort-1 "); 
printf("\nPoisk-2 "); 
printf("\nIzmenenie-3 "); 
printf("\nUdalenie-4 "); 
printf("\nSpisok-5 "); 
printf("\nVihod-6 \n"); 
scanf("%d",&menu); 
switch(menu) 
{ 
case 1: 
{ 
printf("\nKriterii sort:\n"); 
printf("1-fio\n"); 
printf("2-adres\n"); 
printf("3-nomer\n"); 
printf("4-vozrast\n"); 
printf("0-vihod\n"); 
printf("Vibor kriteria "); 
scanf("%d",&x); 

switch(x){ 
case 0:break; 
case 1:{ 
for (i=0; i<n-1; i++) 
for (j=i+1; j<n; j++) 
if(strcmp(person[i].fio,person[j].fio)>0){ 
buffer=person[i]; 
person[i]=person[j]; 
person[j]=buffer; 
} 

for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("chelovek %d\n",i+1); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 
} 
break; 
} 
case 2:{ 
for (i=0; i<n-1; i++) 
for (j=i+1; j<n; j++) 
if (strcmp(person[i].adres,person[j].adres)>0){ 
buffer=person[i]; 
person[i]=person[j]; 
person[j]=buffer; 
} 

for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("chelovek %d\n",i+1); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 
} 
break; 
} 
case 3:{ 
for (i=0; i<n-1; i++) 
for (j=i+1; j<n; j++) 
if (person[i].num>person[j].num){ 
buffer=person[i]; 
person[i]=person[j]; 
person[j]=buffer; 
} 

for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("chelovek %d\n",i+1); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu",person[i].num); 
printf("vozrast: %d ",person[i].age); 
} 
break; 
} 
case 4:{ 
for (i=0; i<n-1; i++) 
for (j=i+1; j<n; j++) 
if (person[i].age>person[j].age){ 
buffer=person[i]; 
person[i]=person[j]; 
person[j]=buffer; 
} 

for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("chelovek %d\n",i+1); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 
} 
break; 
} 

} 
break; 
} 
case 2: 
{ 
while(1) 
{ 
printf("\nKriterii sort:\n"); 
printf("1-fio\n"); 
printf("2-adres\n"); 
printf("3-nomer numa\n"); 
printf("4-vozrast\n"); 
printf("0-vihod iz kriteria\n"); 
printf("Vibor kriteria "); 
scanf("%d",&x); 
switch(x) 
{ 
case 0:break; 
case 1: 
{ 
z=0; 
printf("vvedite fio: "); 
fflush(stdin); 
gets(fio1); 
for(i=0;i<n;i++) 
{ 
if(strcmp(fio1,person[i].fio)==0) 
{ 
printf("chelovek %d\n",i+1);
 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 
z++; 
} 
} 
if(z==0) 
printf("ne naideno\n"); 
break; 
} 
case 2: 
{ 
z=0; 
printf(" adres: "); 
fflush(stdin); 
gets(adres1); 
for(i=0;i<n;i++) 
{ 
if(strcmp(adres1,person[i].adres)==0) 
{ 
printf("chelovek %d\n",i+1); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 
z++; 
} 
} 
if(z==0) 
printf("ne naiden\n"); 
break; 
} 
case 3: 
{ 
z=0; 
printf("num: "); 
fflush(stdin); 
scanf("%d",&num1); 
for(i=0;i<n;i++) 
{ 
if(num1==person[i].num) 
{ 
printf("chelovek %d\n",i+1); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 
z++; 
} 
} 
if(z==0) 
printf("Ne naiden\n"); 
break; 
} 
case 4: 
{ 
z=0; 
printf("vozrast: "); 
fflush(stdin); 
scanf("%d",&age1); 
for(i=0;i<n;i++) 
{ 
if(age1==person[i].age) 
{ 
printf("chelovek %d\n",i+1); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 
z++; 
} 
} 
if(z==0) 
printf("Ne naiden\n"); 
break; 
} 

} 
if(x==0) 
break; 
continue; 
} 
break; 
} 
case 3: 
{ 
while(1) 
{ 
printf("\nVvedite N cheloveka kogo izmenit "); 
scanf("%d",&r); 
printf("\nvvedite kriterii ");
printf("\n1-fio ");
printf("\n2-adres");
printf(" \n3-nomer  ");
printf("\n4-vozrast ");
printf("\n0-vihod  \n");
scanf("%d",&y); 
switch(y) 
{ 
case 0:break; 
case 1:{ 
printf("novaia familia: "); 
fflush(stdin); 
gets(fio1); 
strcpy(person[r-1].fio,fio1); 
break; 
} 
case 2: 
{ 
printf("nov adres: "); 
fflush(stdin); 
gets(adres1); 
strcpy(person[r-1].adres,adres1); 
break; 
} 
case 3: 
{ 
printf("nov nomer: "); 
scanf("%llu",&num1); 
person[r-1].num=num1; 
break; 
} 
case 4: 
{ 
printf("nov vozrast: "); 
scanf("%d",&age1); 
person[r-1].age=age1; 
break; 
} 

} 
if(y==0) 
break; 
continue; 
} 
break; 
} 
case 4: 
{ 
printf("Vvedite N chelovekya kogo udalit "); 
scanf("%d",&s); 
s--; 
printf("\n\n"); 
printf("chelovek %d udalen\n",s+1); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 

for(s;s<=n;s++) 
{ 
strcpy(person[s].fio, person[s+1].fio); 
strcpy(person[s].adres, person[s+1].adres); 
person[s].num = person[s+1].num; 
person[s].age = person[s+1].age; 
} 
n--; 
break; 
} 
case 5: 
{ 
for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("fio: %s ",person[i].fio); 
printf("adres: %s ",person[i].adres); 
printf("num: %llu ",person[i].num); 
printf("vozrast: %d ",person[i].age); 
} 
break; 
} 
case 6:exit(1); 
} 
continue; 
} 
return 0; 
}
