#include<stdio.h>

int carre(int a){
    
    int c;
    c = a*a;
    return c;
}

int main(){
    int a,b;
    printf("Entrer deux nombre entieres : ");
    scanf("%d%d",&a,&b);
    printf("\n%d",carre(a));

}