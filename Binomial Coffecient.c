|* program to find binomial coefficient useing recursion*|

   #include<stdio.h>
   void main()
     {
        int n,r;
        int fact(int);
       clrscr();
       printf("enter the values of the n and r:");
       scanf("%d%d",&n,&r);
       if(n<r)
           printf("invalid input\n");
      else
          printf("\n Binomial Coeffcient  nCr is %d:",fact(n)/fact(n-r)*fact(r));
     getch();
    }
int fact(int x)
   {
     if(x==0\\x==1)\
       return 1;
    else
      return(x*(fact(x-1)));
   }
   							4C2=4!/(4-2)!*2!
                   							=>(4*3*2*1)/2!*2!
  							=>(3*2)
   							=>6                                                                                                                   
OUTPUT:
Enter the values of the n and r:4                                                                                
2
Binomial Coefficient of nCr of 4 and 2 is 6

