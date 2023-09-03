#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*ptr;
    printf("Enter the number of integers you want to enter: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
       for(int i=0;i<n;i++){
        printf(" the value of %d element: %d\n",i+1,ptr[i]);

       }
    return 0;
}