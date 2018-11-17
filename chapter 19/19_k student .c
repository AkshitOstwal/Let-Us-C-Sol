#include<stdio.h>
#include<conio.h>
void main() {
struct name {
      int sn;
      char name[30];
      }s;
int i,num,flag=0;
long recsize;
char another,ch;
FILE *fp;
fp=fopen("std.DAT","r+");

if(fp==NULL) 
{
fp=fopen("std.DAT","w+");
if(fp==NULL)
printf("cannot open file! \n");

}
recsize=sizeof(s);
while(1) 
{
printf("\t\tStudent Names:\n");
printf("\t\t**************\n\n\n");
printf("\t1: Add names of students:\n\n");
printf("\t2: Search a student name:\n\n");
printf("\t3: List all names starting with 'S':\n\n");
printf("\t0: Exit\n\n");
printf("Your choice: ");
fflush(stdin);
ch=getchar();
switch(ch) 
{
case '1':
fseek(fp,0,SEEK_END);
another='y';
while(another=='y' || another=='Y') 
{
printf("\t\tAdd names of students:\n");
printf("\t\t**********************\n\n");
printf("Enter student number: ");
scanf("%d",&s.sn);
printf("\n\nEnter student name: ");
scanf("%s",s.name);
fwrite(&s,recsize,1,fp);
printf("Enter another name(Y/N): ");
fflush(stdin);
another=getchar();
}
break;

case '2':
printf("\t\tSearch a student name:\n");
printf("\t\t**********************\n\n");
printf("Enter student number: ");
scanf("%d",&num);
rewind(fp);
while(fread(&s,recsize,1,fp)==1) {
if(s.sn==num) {
printf("\n\nStudent Number: %d\n\n",s.sn);
printf("Student name:   %s\n\n",s.name);
flag=1;
break;
}
 }

if(flag==0) {
printf("\n\n\nNo such name found!\n");
}
printf("press any key to return...\n");
getch();
break;

case '3':
printf("\t\tAll name starting with 'S':\n");
printf("\t\t***************************\n\n\n");
rewind(fp);
while(fread(&s,recsize,1,fp)==1) {
if(strncmp('s',s.name[0])==0) {     /* comparing only first character of name if it is "s" */
printf("\n%d\t%s\n",s.sn,s.name);
flag=1;
}
}
if(flag==0) {
printf("\n\n\nNo name starting with \'S\' found!\n");
}
printf("\n\n\npress any key to return...\n");
getch();
break;

case '0':
fclose(fp);

}


}
}
