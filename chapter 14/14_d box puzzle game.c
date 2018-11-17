#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(short col,short row);
void showarray();

int a[4][4]={{1,4,15,7},{8,10,2,11},{14,3,6,13},{12,9,5,0}};
void gotoxy(short col,short row)
{
	HANDLE h =GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position ={col,row};
	SetConsoleCursorPosition (h, position);
}
main(){
	char ch;
	printf("arrange in ascending order\n");
	printf("enter ur choice up,down,right,left key\n");
	showarray();
	
	ch=getch();
	update(ch);
	gotoxy(4,4);
	
	getch();
}

void update(char ch)
{ int t;
	if (ch==w)
	
}
void showarray(){
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}
