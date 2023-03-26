#include <stdio.h>
int globarVar2 = 15;

void procedure6(int arg2)
{
    int localVar2;
    localVar2 = arg2 + globarVar2;
    printf("local = %d", localVar2);
    printf("\narg2 = %d", arg2);
}
int main()
{
    procedure6(5);
}
