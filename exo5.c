#include<stdio.h>

int calc(int n){
    int i,s=0;
    for(i =0; i<=n;i++){
        s += i;
        
}
 return s;}
    

int main(){
    int n;
    printf("enter un nombre : ");
    scanf("%d",&n);
    printf("Le nombre est : %d",calc(n));
}

