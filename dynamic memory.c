#include<stdio.h>
#include<stdlib.h>


//calloc
int main()
{

	int *ptr =(int*)calloc(20, sizeof(int));
	*ptr=200;
	printf("%d %d\n",ptr,*ptr);
	ptr+=1;
	*ptr=300;
	printf("%d %d",ptr,*ptr);

}












/*
//malloc
int main()
{
	int*ptr=(int*)malloc(20);
	*ptr=200;
	printf("%d %d\n",ptr,*ptr);
	ptr+=1;
	*ptr=300;
	printf("%d %d",ptr,*ptr);

}
*/
