#include <stdio.h>

double fact( int n );
double factsum( int n );

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
        
    return 0;
}

double fact( int n ){
    if(n>1)return n*fact(n-1);
    else return 1;
}
double factsum( int n ){
    if(n>0)return fact(n)+factsum(n-1);
    else return 0;
}
