#include<stdio.h>
void main()
{
  int a,b,x,y,LCM,GCD,r;
  clrscr();
  printf("Enter the values of the a and b:");
  scanf("%d%d",&x.&y);
  a=x;
  b=y;
  while(b!=0)
   {
        r=a%b;
       a=b;
       b=r;
   }
GCD=a;
LCM=(x*y)/GCD;
printf("Greatest Common Divisor of %d and%d =%d\n",x,y,GCD);
printf("Least Common Multiple of  %d and%d=%d\n",x,y,LCM);
getch();
}
