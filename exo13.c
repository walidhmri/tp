#include <stdio.h>
void pocedure5()
{
    int localVar = 4;
    printf("local2 = %d", localVar);
}
void procedure4()
{
    int localVar = 2;
    printf("local1= %d\n", localVar);
    pocedure5();
}

int main()
{
    procedure4();
}