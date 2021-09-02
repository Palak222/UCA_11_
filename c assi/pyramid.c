#include<stdio.h>

void main(){

        int i = 0, m = 0, n = 0;

        for(i = 1; i <= 5; i++)
        {
                for(m = 1; m <= 5-i; m++)
                {
                        printf(" ");
                }
                for(n = 1; n <= i; n++)
                {
                        printf("# ");
                }
                printf("\n");
        }
}