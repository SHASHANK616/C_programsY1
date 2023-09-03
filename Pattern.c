#include<stdio.h>
void pattern1(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("* ");
        }
        printf("\n");
    }
}
void pattern2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
void pattern3(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void pattern4(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
void pattern5(){
    for(int i=0;i<5;i++){
        for(int j=1;j<5-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern6(){
    for(int i=1;i<5;i++){
        for(int j=1;j<5-i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void pattern7(){
    for(int i=0;i<5;i++){
        //space
        for(int sp=0;sp<5-i-1;sp++){
            printf(" ");
        }
        //star
        for(int str=0;str<2*i+1;str++){
            printf("*");
            
        }
        //space
        for(int sp1=0;sp1<5-i-1;sp1++){
            printf(" ");
        }
        printf("\n");
    }
}
void pattern8(){
    for(int i=0;i<=5;i++){
        //space
        for(int sp =0;sp<=i;sp++){
            printf(" ");
        }
        //star
        for(int str = 0;str<2*5-(2*i+1);str++){
            printf("* ");
        }
        //space
        for(int sp1=0;sp1<=i;sp1++){
            printf(" ");
        }
        printf("\n");
    }
}
void pattern9(){
    for(int i=0;i<5;i++){
        //space
        for(int sp=0;sp<5-i-1;sp++){
            printf(" ");
        }
        //star
        for(int str=0;str<2*i+1;str++){
            printf("*");
            
        }
        //space
        for(int sp1=0;sp1<5-i-1;sp1++){
            printf(" ");
        }
        printf("\n");
    }
            for(int i=0;i<=5;i++){
        //space
        for(int sp =0;sp<=i;sp++){
            printf(" ");
        }
        //star
        for(int str = 0;str<2*5-(2*i+1);str++){
            printf("*");
        }
        //space
        for(int sp1=0;sp1<=i;sp1++){
            printf(" ");
        }
        printf("\n");
    }
}
void pattern10(){
for(int i=0;i<=2*5-1;i++){
int stars=i;
if(i>=5){
stars=2*5-i;
}
for(int j =0;j<stars;j++){
printf("*");
}
 printf("\n");
}
}
void pattern11(){
    int start = 1;
    for(int i=0;i<=5;i++){
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<i;j++){
        printf("%d",start);
            start=1-start;
    }
       printf("\n");

    }
}
void pattern12(){
    int i;
    int space=2*(5-2);
    for(int i=1;i<5;i++){
        //number
        for(int j=1;j<=i;j++){
            printf("%d",j);
    }
    //space
    for(int j=1;j<=space;j++){
        printf(" ");
    }
    //number
            for(int j=i;j>=1;j--){
            printf("%d",j);
                
    }
    printf("\n");
    space-=2;
    
}
}


int main(void) {
    pattern1();
    pattern2();                                                        
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    pattern8();
    pattern9();
    pattern10();
    pattern11();
    pattern12();
    
}