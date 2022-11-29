#include<stdio.h>
typedef struct {
    char name[20];
    int birth;
    char number[18];
}STU;
STU* age_sort(STU stu[] ,int n){
    STU tem;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(stu[j].birth<stu[min].birth)min=j;
        }tem=stu[i];stu[i]=stu[min];stu[min]=tem;
    }
    return stu;
}
void out_put(STU firm[20],int n){
    for(int i=0;i<n;i++){
        printf("%s %d %s\n",firm[i].name,firm[i].birth,firm[i].number);
    }
    

}
int main(int argc,char **argv ){
    int n;
    scanf("%d",&n);
    STU stu[20];
    for(int i=0;i<n;i++){
        scanf("%s %d %s",&stu[i].name,&stu[i].birth,&stu[i].number);
    }
    out_put(age_sort(stu,n),n);
    return 0;
}