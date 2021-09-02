#include<stdio.h>

int occurence(char s1[],char s2[]){

        int i = 0;
        int flag = -1;
        while (s1[i] != '\0'){

                        int m = 0;
                        while (s2[m] != '\0'){

                                if (s2[m] == s1[i])
                                        {
                                                flag = i;
                                                return flag;
                                        }
                                        m++;
                        }
                        i++;
                }
        return flag;
}

int main(){

        char s1[20] = "abcd";
        char s2[20] = "kd";
        char s3[20] = "abcd";
        char s4[20] = "kz";

        int ans1 = occurence(s1, s2);
        int ans2 = occurence(s3, s4);
        printf("%d \n", ans1);
        printf("%d \n", ans2);
        return 0;

}