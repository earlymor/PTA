#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ){//判断是否为水仙花数
    //判断位数
    int t=number;
    int sum=0;
    int cnt=0;//位数
    while(t>0){
        t/=10;
        cnt++;
        }
    t=number;
    for(int i=0;i<cnt;i++){
        int a=1;
        int b=t%10;
        for(int j=0;j<cnt;j++){
            a*=b;          //a=b^n
        }sum+=a;t/=10;
    }
    if(sum==number)return 1;//是水仙花数
    else return 0;//非水仙花数
}
void PrintN( int m, int n ){//打印区间内的水仙花数
    for(int i=m+1;i<n;i++){
        if(narcissistic(i))printf("%d\n",i);
    }
}

