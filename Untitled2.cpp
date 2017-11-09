#include<stdio.h>
int main ()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a=reverse(n);
	int b=reverse(m);
	printf("%d",)
	return 0;
}
int reverse(int x)

{
   printf("%d",x);
   int rev,d;
   while(x>0)
   {
   	d=x%10;
   	reverse=reverse*10+d;
   	x=x/10;
   }
  
   return reverse;
   }

