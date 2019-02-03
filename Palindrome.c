#include<stdio.h>
int main()
{
   long num,rev,temp;
   int digit;
   clrscr();
   printf("Enter any number");
   scanf("%d",&num);
   rev=0;
  temp=num;
       while(n>0)
         {
           digit=num%10;
           num=num/10;
           rev=rev*10+r;
         }
   printf("\n Reverse of the number is:%d",rev);
   if(temp==rev)
   printf("%d is a palindrome",temp);
   else
   printf("%d is not a palindrome",temp);
}