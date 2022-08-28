
#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i , c = 0;
  
   printf(" Enter a number to find fibonacci series :  ");
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for (i = 1 ;i <= n ;i++ )
   {
      printf("%d\n", Fibonacci(c));
      c++; 
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
