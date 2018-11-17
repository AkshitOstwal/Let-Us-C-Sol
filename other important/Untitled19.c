#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(short col,short row);
main()
{
	gotoxy(20,8);
	printf("hello");
}
void gotoxy(short col,short row)
{
	HANDLE h =GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position ={col,row};
	SetConsoleCursorPosition (h, position);
}
