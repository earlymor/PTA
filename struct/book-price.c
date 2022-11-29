#include<stdio.h>
typedef struct{
    char name[31]; //长度限制+1
    double price;
}STU;
void out_put(STU book[],int n){
    int max=0;
    int min=0;
    for(int i=0;i<n;i++){
        if(book[i].price>book[max].price)max=i;
        if(book[i].price<book[min].price)min=i;
    }
    printf("%.2f, %s\n",book[max].price,book[max].name);//2位小数
    printf("%.2f, %s\n",book[min].price,book[min].name);
}
int main(){
    STU book[10];
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        gets(book[i].name);
        scanf("%lf",&book[i].price);
        getchar();
    }
    out_put(book,n);
    return 0;
}