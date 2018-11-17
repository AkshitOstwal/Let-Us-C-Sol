#include<stdio.h>
#include<conio.h>

void main() {         
FILE *fp,*ft;
char ch;

fp=fopen("19_g.txt","r");
ft=fopen("19_g encry1.txt","w");


if(fp==NULL)  
{
	printf("cannot open one of files!");
	exit(1);
}

while(1) 
{
	ch=fgetc(fp);
	if(ch==EOF)
		break;
	ch=ch+128;//ch=ch-128 for decrypt
	fputc(ch,ft);
}
fclose(fp);
fclose(ft);
printf("offset encrypted file is 19_g encrypt1 and decrypted file is 19_g\n");

fp=fopen("19_g.txt","r");
ft=fopen("19_g encry2.txt","w");

if(fp==NULL) 
{
	printf("cannot open one of files!");
	exit(1);
}

while(1) {
ch=fgetc(fp);
if(ch==EOF)
break;
encrypt(&ch);          /* function for encryption */
fputc(ch,ft);
}
fclose(fp);
fclose(ft);

printf("substitution encrypted file is 19_g encrpt2 \n");
getch();

}

encrypt(char *c) {
if(*c=='a') 
{
*c='!';
}
if(*c=='e') 
{
*c='@';
}
if(*c=='i') 
{
*c='#';
}
if(*c=='o') 
{
*c='$';
}
if(*c=='u') 
{
*c='%';
}
if(*c==' ') 
{
*c='^';
}
}
