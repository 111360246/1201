#include<stdio.h>
#include<stdlib.h>

int bs(int list[], int left, int right, int key)
{
	int mid = (left + right) / 2;
	if (left <= right)
	{
		if (key == list[mid])
		{
			return(mid);
		}
		else if (key > list[mid])
		{
			return(bs(list, mid + 1, right, key));
		}
		else
		{
			return(bs(list, left, mid - 1, key));
		}
	}
	else
	{
		return(-1);
	}
}

int main()
{
	int l, r, mid, key, found = 0;
	int num[] = { 8,16,33,45,66,71,99,101,145,152 };

	printf("Enter one integer: ");
	scanf_s("%d", &key);

	l = 0;
	r = 9;
	found = bs(num, l, r, key);

	if (found >= 0)
	{
		printf(" %d is at list[%d]\n", key, found);
	}
	else
	{
		printf("Data not exsist\n");
	}
	return 0;
}
