#include<stdio.h>
#include<conio.h>
int main()
{
int m,d;
printf("enter month & date in numbers");
scanf("%d %d",&m,&d);
if((m==12&&d>=22)||(m==1&&d<=19))
printf("Capricon");
if((m==1&&d>=20)||(m==2&&d<=17))
printf("Aquarius");
if((m==2&&d>=18)||(m==3&&d<=19))
printf("pisces"); 
if((m==3&&d>=20)||(m==4&&d<=19))
printf("Aries");
if((m==4&&d>=20)||(m==5&&d<=20))
printf("Taurus");
if((m==5&&d>=21)||(m==6&&d<=20))
printf("Gemini");
if((m==6&&d>=21)||(m==7&&d<=22))
printf("Cancer");
if((m==7&&d>=23)||(m==8&&d<=22))
printf("Leo");
if((m==8&&d>=23)||(m==9&&d<=22))
printf("Vigro");
if((m==9&&d>=23)||(m==10&&d<=22))
printf("Libra");
if((m==10&&d>=23)||(m==11&&d<=21))
printf("Scoroio");
if((m==11&&d>=22)||(m==12&&d<=21))
printf("Sagittarius");
getch();
}
