#include<graphics.h>
#include<conio.h>
 
main()
{
   int gd = DETECT, gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
 
   circle(100,100,50);          /* drawn in white color */ 
   setcolor(RED);
   circle(200,200,50);          /* drawn in red color   */
 
   closegraph();
   return 0;
}

