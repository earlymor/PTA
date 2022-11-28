#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

void dectobin( int n ){
    if(n>1){      //n>1而不是n>0
        dectobin(n/2);
        printf("%d",n%2);
    }
   else printf("%d",n%2);
    
}
