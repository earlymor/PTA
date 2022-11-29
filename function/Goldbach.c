#include<stdio.h>
#include<math.h>
int isprime(unsigned int n){
    unsigned int cnt=1;
    for(unsigned int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            cnt=0;break;
        }
    }
    if(cnt)return 1;
    else return 0;
}
int main(){
    unsigned int i,n;
    scanf("%d",&n);
    for( i=3;i<=n/2;i+=2){
        if(isprime(i)&&isprime(n-i))break;//i和24-i均为素数
    }
    if(n==4)printf("4 = 2 + 2");
    else printf("%d = %d + %d",n,i,n-i);
    return 0;
}