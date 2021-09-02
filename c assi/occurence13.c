#include<stdio.h>
int strl(char s[]){
        int i, count = 0;
        for(i = 0; s[i] != '\0'; i++)
        {
                count++;
        }
        return count;
}



int strend(char s1[],char s2[]){

        int i, m, l1, l2, ans = 0;
        l1 = strl(s1);
        l2 = strl(s2);
        for(i = 0; i < l1; i++){

                if(s1[i] == s2[0]){

                        for(m = 1; m <= l2; m++){

                                if(m == l2)
                                {
                                        ans = 1;
                                }
                                if(s1[i + m] != s2[m])
                                {
                                break;
                                }
                        }
                }
        }

        return ans;
}

int main(){

        char s1[20] = "abkdcdddkd";
        char s2[20] = "kd";
        char s3[20] = "abcd";
        char s4[20] = "kd";

        int ans1 = strend(s1, s2);
        int ans2 = strend(s3, s4);
        printf("%d \n", ans1);
        printf("%d \n", ans2);
        return 0;

}