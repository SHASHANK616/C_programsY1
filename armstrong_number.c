#include<stdio.h>

int main(){
    int n,c,arm=0,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;

    }
    if(c==arm){
        printf("The number %d is an armstrong number",c);
    }
    else{
        printf("The number %d is not an armstrong number",c);
    }
    return 0;
}