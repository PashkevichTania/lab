#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i,j,len;
	char s[50];
	puts("vvedite stroku");
	gets(s);
	puts("stroka :");
	puts(s);
	//char a = getchar ();
	//printf("%c %d",a,a);
	len= strlen(s);
	for (i=0;i<len;i++){
		if (s[i] == ' '){
			for (j=i;j<len;j++){
			s[j]=s[j+1];
		}
			len--;
		}
	}
	puts("stroka bez probelov :");
	puts(s);
	return 0;
}
