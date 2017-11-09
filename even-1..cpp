#include<stdio.h>
int main()
{
	 int i,n;
	 for(i=1;i>=0;i++)
	 {
	 	scanf("\n%d",&n);
	 	if(n==-1)
	 	break;
	 	else if(n%2==0)
	 	printf("\n%d is even",n);
	 }
	 return 0;
}
