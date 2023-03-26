#include<stdio.h>
int max (int a,int b){
    if (a>b){
        return a;
    }
    else 
    return b;
}
int min (int a,int b){
    if (a<b){
        return a;
    }
    else 
    return b;
}
int main(){
    int x,y;
    printf("Enter deux nombres : ");
    scanf("%d%d",&x,&y);
    printf("\n le maximum est : %d",max(x,y));
    printf("\n le minumum est : %d",min(x,y));

}