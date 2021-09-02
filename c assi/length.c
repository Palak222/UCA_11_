#include<stdio.h>
#include<stdlib.h>
void checkLength(char[]);

void main(){

        char str1[200] = "Computer programming is the process of designing and building an executable computer program to accomplish a specific computing result or to perform a specific task";
        char str2[200] = "Programming involves tasks such as: analysis, generating algorithm";
        char str3[200] = "The source code of a program is written in one or more languages that are intelligible to programmers";

        checkLength(str1);
        checkLength(str2);
        checkLength(str3);


}

void checkLength(char *s){

        int i = 0, count = 0;
        while(s[i] != '\0'){

                count++;
                i++;
        }
        if(count >= 80)
        {
                printf("%s \n", s);
        }
        else
        {
                printf("String contains less that 80 characters \n");
        }
}