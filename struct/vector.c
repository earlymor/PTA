#include<stdio.h>
typedef struct{
    double x;
    double y;
}STU;
int main(){
    STU vect1,vect2;
    double m,n;
    scanf("%lf %lf %lf %lf",&vect1.x,&vect1.y,&vect2.x,&vect2.y);
    m=vect1.x+vect2.x;n=vect1.y+vect2.y;
       if(m>-0.05&&m<0)m=0.0;//不能输出-0.0
       if(n>-0.05&&n<0)n=0.0;
    printf("(%.1f, %.1f)",m,n);
    
}