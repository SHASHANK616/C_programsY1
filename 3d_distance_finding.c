#include<stdio.h>
#include<math.h>
void distance(float x1,float y1,float z1,float x2,float y2,float z2){
    float d = sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)*1.0);
    printf("Distance is %f",d);
    return ;

}

int main(){
    float x1,y1,z1,x2,y2,z2;
    printf("Enter the value of x1,y1,z1,x2,y2,z2 respectively: ");
    scanf("%f %f %f %f %f %f",&x1,&y1,&z1,&x2,&y2,&z2);

    distance(x1,y1,z1,x2,y2,z2);
    return 0;
    
    return 0;
}