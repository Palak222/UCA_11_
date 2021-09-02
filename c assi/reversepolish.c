#include <stdio.h>

//global variable
int top =-1;

int strl(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}

void push(int *arr,int ne)
{

    arr[++top]=ne;
}

int pop(int *arr)
{
    return arr[top--];
}

int reversePolish(char *s)
{
    int l = strl(s),i=0;

    int arr[l];

    while(s[i]!='\0')
    {
      if(s[i]>='0' && s[i]<='9')
      {
          push(arr,s[i]-48);
      }
      else
      {
        int a=pop(arr);
        int b=pop(arr);

        if(s[i] == '+')
        {
            push(arr,b+a);
        }
        else if(s[i] == '-')
        {
            push(arr,b-a);
        }
        else if(s[i] == '*')
        {
            push(arr,b*a);
        }
        else if(s[i] == '/')
        {
            push(arr,b/a);
        }
        else if(s[i] == '%')
        {
            push(arr,b%a);
        }
      }
      i++;
    }
    return pop(arr);
}

int main()
{
    char exp[20]="234+*";


    printf("Result :%d\n",reversePolish(exp));
}