#include<stdlib.h>
#include<stdio.h>
#define S 10
void b(int* const array, const int s)
{
	void sw(int* e, int* e2);
	int pa, j;
	for (pa = 0; pa < s - 1; pa++)
	{
		for (j = 0; j < s - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				sw(&array[j], &array[j + 1]);
			}
		}
	}
}
void sw(int* e, int* e2)
{
	int h = *e;
	*e = *e2;
	*e2 = h;
}
int main()
{
	int a[S] = { 2,6,4,8,10,12,89,68,45,37 }, i;
	printf("Data items in original order\n");
	for (i = 0; i < S; i++)
	{
		printf("%4d", a[i]);
	}
	b(a, S);
	printf("\nData items in ascending order\n");
	for (i = 0; i < S; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	return 0;
}