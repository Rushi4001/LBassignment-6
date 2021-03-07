#include<stdio.h>

int counttwo(int ino)
{
	int idigit=0;
	int count=0;
	if(ino<0) 
 { 
 ino = -ino; 
 }
 if ((2<0)||(2>9))
 {
	printf("invalide digit");
return 0;	
 }
 
 while(ino>0)
 {
	 idigit=ino%10;
	 
	 if(idigit==2)
	 {
		
		count=count+1; 
	 }
	  ino=ino/10;
 }
return count;
}
int main()
{
	int value=0;
	int ret=0;
	printf("enter number\n");
	scanf("%d",&value);
	
	ret=counttwo(value);
	printf("frequency of two is%d\n",ret);
	
	return 0;
}