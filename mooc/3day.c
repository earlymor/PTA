#include<stdio.h>
int is_leap(int n){
        if(n%4==0&&n&100!=0||n%400==0)return 1;
        else return 0;
}
int main(int argc,char **argv )
{
    int year,month,day;//1990-1-1
    int sum=0;
    scanf("%d-%d-%d",&year,&month,&day);
    for(int n=1990;n<year;n++){
        if(is_leap(n)){
            sum+=366;
        }else sum+=365;
    }
    for(int i=1;i<month;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)sum+=31;
        if(i==4||i==6||i==9||i==11)sum+=30;
        if(i==2&&is_leap(year))sum+=29;
        if(i==2&&is_leap(year)==0)sum+=28;
    }sum+=day;
    if(sum%5==1||sum%5==2||sum%5==3)printf("他在打鱼");
    else printf("他在晒网");
    return 0;
}