#include<stdlib.h>
#include<stdio.h>
int main()
{
	int b[] = { 10,20,30,40 };
	int* bptr=b;
	int i, off;
	printf("Array b printed with:\nArray subscript notation\n");
	for (int i = 0; i < 4; i++)
	{
		printf("b[%d] = %d\n", i, b[i]);
	}
	printf("\nPointer/offset notation where\nthe pointer is the array name\n");
	for (off = 0; off < 4; off++)
	{
		printf("*(b + %d) = %d\n", off, *(b + off));
	}
	printf("\nPointer subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("bPtr[%d] = %d\n", i, bptr[i]);
	}
	printf("\nPinter/offset notation\n");
	for (off = 0; off < 4; off++)
	{
		printf("*(bPtr + %d) = % d\n", off, *(b + off));
	}
	return 0;
}