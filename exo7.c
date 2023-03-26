#include <stdio.h>

float moy(int n)
{
  int i;
  float moyn, somme = 0, a;
  for (i = 0; i < n; i++)
  {
    scanf("%f", &a);
    somme += a;
  }
  moyn = somme / n;
  return moyn;
}
int main()
{
  int n;
  printf("enter le nombre des elements :");
  scanf("%d", &n);
  printf("la moyenne est : %.2f", moy(n));
}
