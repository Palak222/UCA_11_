#include<stdio.h>

int main(){
        int a[2][2]={ {1,2} , {3,4} };
        int b[2][2]={ {1,1} , {1,1} };
        int i, k;
        int ans[2][2];


        for(i = 0; i < 2; i++)
        {
                for(k = 0; k < 2; k++)
                {

                        ans[i][k]=0;

                        for(int n = 0; n < 2; n++)
                        {
                                ans[i][k] += a[i][n] * b[n][k];
                        }
                }

        }
        for(i = 0; i < 2; i++)
        {
                for(m = 0; m < 2; m++)
                {
                        printf("%d ",ans[i][m]);
                }
                printf("\n");
        }
        return 0;

}