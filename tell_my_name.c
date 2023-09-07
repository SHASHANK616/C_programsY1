#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[20];  // declaration of char array  
   char str2[20]="Tell me my name";  // declaration of char array  
   int value; // declaration of integer variable  
   printf("Ask me a question: ");  
   scanf("%s",str1);   
   // comparing both the strings using strcmp() function  
   value=strcmp(str1,str2);  
   if(value==0)  {
   printf("your name is Shashank suman");  }
   else { 
   printf("I dont know your name ");  }
   return 0;  
}