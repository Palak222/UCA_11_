#include<stdio.h>

void reverse(int n, int arr[])
{

        int a = 0;
        int b = n-1;
        int temp = 0;
        while(a < b) {
                flag = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
                a++;
                b--;
        }
        for(int i = 0; i < n; i++)
        {
                printf("%d ", arr[i]);
        }
}

int main(){

        int arr[] = {1,2,3,4,5};
        int n = sizeof(arr) / sizeof(arr[0]);
        reverse(n,arr);

        return 0;
}