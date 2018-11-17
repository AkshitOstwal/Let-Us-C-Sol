#include<stdio.h>
#include<conio.h>
//0 is for monday, 1 for tuesday and so on
int leapyear(int year)
{
   if (year % 400 == 0)
   return 1;
   if (year % 4 == 0 && year % 100 != 0)
   return 1;
   return 0;
}
int year_days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
void main()
{
    int days, no_of_leap,yeardif,month,year,oddays,i;
    month = 1;
    printf ("Enter the month and the year: ");
    scanf ("%d %d",&month,&year);
    yeardif = year - 1900;
    no_of_leap = yeardif / 4;
    if (leapyear(year))
    no_of_leap--;
    oddays = no_of_leap * 2;
    oddays += (yeardif - no_of_leap);
 for (i=1;i<month;i++)
 {
    oddays += year_days[i];
 }
    if (leapyear(year) && month >2)
       oddays++;
    oddays = oddays % 7;
    printf ("\tMon\tTue\tWed\tThu\tFri\tSat\tSun\n");
    for (i=0;i<oddays;i++)
       printf ("         ");
    if (leapyear(year) && month == 2)
       days = 29;
    else
       days = year_days[month];
    for (i=1;i<=days;i++)
    {
  if ((i+oddays)%7 == 1)
  printf ("\n");
  printf ("%9d",i);
    }
    getch();
}
