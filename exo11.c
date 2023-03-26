#include <stdio.h>

void procedure1()
{
    int localVar = 5;
    printf("%d", localVar);
}
void procedure2()
{
    int localVar = 10;
    printf("\n%d", localVar);
}
void procedure3(int arg)
{
    int localVar = 3;
    printf("\n%d arg= %d", localVar, arg);
}

int main()

{
    procedure3(5);
}