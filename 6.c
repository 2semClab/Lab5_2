#include <stdio.h>
int main()
{
int n;
printf("Enter the number of rows/colums : ");
scanf("%d",&n);
int row , col;
for(row =1;row<=n;row ++)
{
	for(col =1;col<=row;col ++)
	{
		printf("%d ",col);
	}
	printf("\n");
}
return 0;

}
