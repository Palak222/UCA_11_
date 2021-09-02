#include<stdio.h>

void main(){
        int a = 10, b = 5;

        a = a + b;
        b = a - b;
        a = a - b;

        printf("a = %d \n b = %d",a,b);


}