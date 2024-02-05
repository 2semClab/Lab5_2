#include <stdio.h>
int main()
{
int n;
printf("Enter the number of rows/colums : ");
scanf("%d",&n);
int row , col;
for(row =1;row<=n;row ++)
{
	for(col =1;col<=n;col ++)
	{
		printf("* ");
	}
	printf("\n");
}
return 0;

}
