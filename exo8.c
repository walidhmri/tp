#include<stdio.h>

int max(int a,int b){
    
    if(a>b){
        return a;
    }
    else{
        return b;
    }
        
}
int max3(int max,int c){
    
    if(max>c){
        return max;
    }

    else{
        return c;
    }
}

int main(){
    int ax,bx,cx;
    scanf("%d%d%d",&ax,&bx,&cx);
    printf(" max a,b = %d",max(ax,bx));
    printf("\n max a,b,c = %d",max3(max(ax,bx),cx));

    
}