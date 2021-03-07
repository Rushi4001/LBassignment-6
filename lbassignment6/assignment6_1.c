#include<stdio.h>

void displaydigit(int ino)
{
	int idigit=0;
	if(ino<0) 
 { 
 ino = -ino; 
 }
 while(ino>0)
 {
	 idigit=ino%10;
	 printf("%d\n",idigit);
	 ino=ino/10;
 }

}
int main()
{
	int value=0;
	
	printf("enter number\n");
	scanf("%d",&value);
	
	displaydigit(value);
	
	return 0;
}