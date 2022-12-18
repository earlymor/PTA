#include<stdio.h>
int main(int argc,char **argv )
{
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    if(s+1!=60)s+=1;
    else {
        m+=1;
        s=0;
        }
    if(m==60){
        h+=1;
        m=0;
    }if(h==24){
        h=0;
    }
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}