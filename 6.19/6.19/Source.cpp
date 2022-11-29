#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int di(void);
int a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12;
void c(int to);
int main()
{
	srand(time(0));
	int st[36000] = { 0 };
	int i,cou;
	
	for (i = 1; i < 36001; i++)
	{
		cou=di();
		c(cou);

	}
	printf("2: %d\n", a2);
	printf("3: %d\n",a3);
	printf("4: %d\n", a4);
	printf("5: %d\n", a5);
	printf("6: %d\n", a6);
	printf("7: %d\n", a7);
	printf("8: %d\n", a8);
	printf("9: %d\n", a9);
	printf("10: %d\n", a10);
	printf("11: %d\n", a11);
	printf("12: %d\n", a12);
}
int di(void)
{
	int d1, d2;
	int dt;
	d1 = 1 + rand() % 6;
	d2 = 1 + rand() % 6;
	dt = d1 + d2;
	return dt;
}
void c(int cou)
{
	if (cou == 2)
	{
		a2++;
	}
	if (cou == 3)
	{
		a3++;
	}
	if (cou == 4)
	{
		a4++;
	}
	if (cou == 5)
	{
		a5++;
	}
	if (cou == 6)
	{
		a6++;
	}
	if (cou == 7)
	{
		a7++;
	}
	if (cou == 8)
	{
		a8++;
	}
	if (cou == 9)
	{
		a9++;
	}
	if (cou == 10)
	{
		a10++;
	}
	if (cou == 11)
	{
		a11++;
	}
	if (cou == 12)
	{
		a12++;
	}
}