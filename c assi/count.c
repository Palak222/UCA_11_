#include<stdio.h>
int main()
{
        int i,count1=0,count2=0;
        char str[10]="My String";


        for(i=0;i<9;i++)
        {



                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                {
                        count1++;
                }
                else
                {
                        count2++;
                }
        }
        printf("Number of vowels : %d\n", count1);
   printf("Number of consonant : %d", count2);
}