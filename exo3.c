#include<stdio.h>
float pi = 3.14;

float diam(float r){
float d;
d= r*2;
return d;
}
float circo(int r){
float circo;
circo = pi*r*2;
return circo;
}
float surface(int r){
float s;
s= pi*r*r;
return s;
}
int main(){
   float ry;
   scanf("%f",&ry);
   printf("le diam est : %.2f \n",diam(ry));
   printf("le circonferonce est : %.2f\n",circo(ry));
   printf("la surface est : %.2f",surface(ry));
return 0;

}