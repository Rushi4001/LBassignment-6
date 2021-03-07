#include<stdio.h>

int chekval(int x)
{
	int b=0;
	int cnt=0;
	if (x<0)
	{
		x=-x; 
	}
	while(x>0)
	{
		b=x%10;
		if (b<6)
		{
			cnt++;
		}
		
		x=x/10;
	
	}
	return cnt;
}
int main()
{
	int a=0;
	int ans=0;
	printf("enter the number\n ");
	scanf("%d",&a);
	
	ans=chekval(a);
	printf("frequency of four is%d\n",ans);
	
	
	
	return 0;
}