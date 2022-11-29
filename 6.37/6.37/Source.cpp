#include<stdio.h>
#include<stdlib.h>
int s[10] = { 0 };
int t = 1;
void sc()
{
	if (t < 10)
	{
		if (s[0] < s[t])
		{
			s[0] = s[t];
			t++;
			sc();
		}
		if (s[0] > s[t])
		{
			t++;
			sc();
		}
	}
}

int main()
{
	printf("Please enter 10 integers !\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Enter integer of list[%d] :", i);
		scanf_s("%d", &s[i]);
	}
	printf("list=");
	for (int u = 0; u < 10; u++)
	{
		printf("%d ", s[u]);
	}
	printf("\n");
	sc();
	printf("Largest integer is: %d", s[0]);
	return 0;
}