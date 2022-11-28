#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));
    
    return 0;
}

double fn( double x, int n ){
    double ret=x;           //这里是double而不是int
    for(int i=1;i<n;i++){
        ret*=(-x);
    }
    if(n>1){
        return ret+fn(x,n-1);
    }
    if(n==1)return x;
    
}
