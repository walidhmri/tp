# Projet de tp 
exo 1 a 14
<ol>
  <li>exo 9</li>
 <code> #include <stdio.h>
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
   }</code>
  <li>exo 10</li>
   <code> #include <stdio.h>
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
}</code>
  <li>exo 11</li>
     <code>#include <stdio.h>

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
}</code>
  <li>exo 12</li>
       <code>

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
}</code>
         <li>exo 13</li>
         <code>#include <stdio.h>
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
}</code>
           <li>exo 14</li>
           <code>#include <stdio.h>
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
}</code>
</ol>
