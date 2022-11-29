#include<stdio.h>
typedef struct{
    int molec;//分子
    int denom;//分母
}STU;
int main(){
    STU num1,num2;
    scanf("%d/%d",&num1.molec,&num1.denom);
    scanf("%d/%d",&num2.molec,&num2.denom);
    if(1.0*num1.molec/num1.denom>1.0*num2.molec/num2.denom)
        printf("%d/%d > %d/%d",num1.molec,num1.denom,num2.molec,num2.denom);
    if(1.0*num1.molec/num1.denom==1.0*num2.molec/num2.denom)
        printf("%d/%d = %d/%d",num1.molec,num1.denom,num2.molec,num2.denom);
    if(1.0*num1.molec/num1.denom<1.0*num2.molec/num2.denom)
        printf("%d/%d < %d/%d",num1.molec,num1.denom,num2.molec,num2.denom);
}