#include<stdio.h>
#include<stdlib.h>
void cu(int &nPtr);
int main(void)
{
	int n = 5;
	printf("The original value of number is %d", n);
	cu(n);
	printf("\nThe new value of number is %d\n", n);
	system("pause");
	return 0;
}
void cu(int &nPtr)
{
	nPtr = nPtr *nPtr * nPtr;
}