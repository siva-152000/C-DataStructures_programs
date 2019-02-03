#include<stdio.h>
void main()
{
int num,i,fib1,fib2,fib;
clrscr();
printf("How many terms\n");
scanf("%d",&num);
fib1=0;
fib2=1;
pirntf("%d\t%d\t",fib1,fib2);
i=3;
while(i<num)
{
fib=fib1+fib2;
printf("%d",fib);
fib1=fib2;
fib2=fib;
i++;
}
getch();
}
