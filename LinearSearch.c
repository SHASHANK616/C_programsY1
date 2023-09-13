#include<stdio.h>
int main(){
    int n,s,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value you want to search:");
    scanf("%d",&s);
    int found;
    for(i=0;i<n;i++){
    if(arr[i]==s){
        found=1;
        break;
    }
    else{
        found=0;
    }
    }
    if(found==1){
        printf("found");
    }
    else if(found==0){
        printf("Not found");
    }
    
    return 0;
}











