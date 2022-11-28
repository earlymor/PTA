#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}

int search( int n ){
    int cnt=0;
    for(int i=101;i<=n;i++){
        if((int)sqrt(i)*(int)sqrt(i)==i){//平方数
            int t=i;
            int a=t%10;
            t/=10;
            int b=t%10;
            t/=10;
            int c=t%10;
            if(a==b&&a!=c){
               cnt++;continue;
            }
            if(a==c&&a!=b)
            {
                cnt++;continue;
            }
            if(b==c&&a!=b)
            {
                cnt++;continue;
            }
        }
    }
    return cnt;
}



