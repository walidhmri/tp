#include <stdio.h>
int globalVar = 10;

void changeGlobalVar()
{
    globalVar = 20;
}
int main()
{
    printf("%d", globalVar);
    changeGlobalVar();
    printf("\n%d", globalVar);
}