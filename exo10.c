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
int main()

{
    procedure1();
    procedure2();
}