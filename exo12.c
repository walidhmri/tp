#include <stdio.h>
int count = 0;

void incount()
{
    count = count + 1;
}
void printcount()
{
    printf("%d", count);
}
int main()
{
    incount();
    incount();
    incount();
    printcount();
}