#include "stdio.h"
//function definition
int get_sum(int a,int b);
int main(){
    int r=get_sum(5,-1);
    printf("%d",r);
}
int get_sum(int a,int b){
    int sum;
    if (a==b){
        return a;
    }else{
        for (int i=a;i<=b;i++){
            sum+=i;
        }
    }
    return sum;
}