#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkzero(int ino)
{
	if(ino<0)
	{ 
		ino=-ino;  
	}
	int idigit=0;
	
	 while(ino>0)
   {
		idigit=ino%10;
	 	if((idigit)!=0)
		{
			ino=ino/10;
		}
		else
		{
			return TRUE;	
		}
	 
    }
	
 }
 

int main()
{
	int value=0;
	BOOL bret=FALSE;
	printf("enter number\n");
	scanf("%d",&value);
	bret=checkzero(value);
	if(bret==TRUE)
	{
		printf("it contains zero");
	}
	else
	{
	printf("there is no zero");
	}
	return 0;
}