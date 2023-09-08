#include<stdio.h>
int product_num(int a){
    int num=1;
    while(a!=0){
        num=num+(a%10);
        a=a/10;
        printf("%d",num);
    }
   
}

int main(){
    printf("%d",product_num(48));
    
    return 0;
}