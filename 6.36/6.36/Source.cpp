#include<stdio.h>
#include<stdlib.h>
void t()
{
    char s;
    scanf_s("%c", &s);
    if (s != '\n') {
        t();
        printf("%c", s);
    }
}

int main()
{
    printf("Enter a sentence: ");
    t();
    return 0;
}



