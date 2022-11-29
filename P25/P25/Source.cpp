#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void sh(int wd[][13]);
void deal(const int wd[][13], const char* wf[], const char* ws[]);
int main(void)
{
	const char* s[4] = { "Hearts","Diamonds","Clubs","Spades" };
	const char* f[13] =
	{ "Ace","Deuce","Three","Four",
	 "Five","Six","Seven","Eight",
	 "Nine","Ten","Jack","Queen","King" };
	int deck[4][13] = { 0 };
	srand(time(0));
	sh(deck);
	deal(deck, f, s);
	return 0;
}
void sh(int wd[][13])
{
	int r, c, ca;
	for (ca = 1; ca <= 52; ca++)
	{
		do
		{
			r = rand() % 4;
			c = rand() % 13;
		} while (wd[r] [c] != 0);
		wd[r][c] = ca;
	}
}
void deal(const int wd[][13], const char* wf[], const char* ws[])
{
	int r, c, ca;
	for (ca = 1; ca <= 52; ca++)
	{
		for (r = 0; r <= 3; r++)
		{
			for (c = 0; c <= 12; c++)
			{
				if (wd[r][c] == ca)
				{
					printf("%5s of %-8s%c", wf[c], ws[r], ca % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}