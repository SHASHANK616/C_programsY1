#include<stdio.h>

int main(){
    float x;
    float sum = 0;
    printf("Enter the number: ");
    scanf("%f",&x);
    for(float i=1;i<=x;i++){
        sum=sum+(1/i);
     }
     printf("%.2f",sum);
    return 0;
}