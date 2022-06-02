# include<stdio.h>
# include<conio.h>
# include<math.h>
  void main()
  {
   int i,n,r;
   clrscr();
   printf("enter no");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     r=pow(i,3);
     printf("\n%d and cube of the %dis:%d",i,i,r);
   }
   getch();
   }