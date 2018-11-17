#include <stdio.h>
 
int main()
{
    unsigned int x ;
    unsigned char i;
    printf("enter 8 bit no\n");
    scanf("%u",&x);
    i=((x&0x0F)<<4|(x&0xF0)>>4);
    printf("%u\n",i);
 	showbits(i);
}
void showbits(unsigned char n)
{
	int i;
	unsigned char j,k,andmask;
	for(i=7;i>=0;i--)
	{
		j=i;
		andmask=1<<j;
		k=n&andmask;
		k==0?printf("0"):printf("1");
	}
}
