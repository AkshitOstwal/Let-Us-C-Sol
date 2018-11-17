#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char tmp[10],*s[]={
					"to err is human"
					,"but to really mess things up",
					"one needs to know C!!"
				};
	int i;
	for (i=0;i<3;i++)
	printf("%s\n",s[i]);
	printf("\n the reverse of this is \n");
	char *p[13];
	for (i=0;i<3;i++)
	{
		strcpy(p,s[i]);
		strrev(p);
		s[i] = p;
		puts(s[i]);
	}
}


