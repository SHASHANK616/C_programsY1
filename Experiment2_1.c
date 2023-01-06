#include<stdio.h>

int main(){
    int a,b,sum,mul;
    float diff,div;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a,&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    printf("The sum of the numbers is %d\n",sum);
    printf("The difference of the numbers is %f\n",diff);
    printf("The multiplication of the numbers is %d\n",mul);
    printf("The division of the numbers is %f\n",div);
    return 0;
}