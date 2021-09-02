#include<stdio.h>
#include<string.h>

int strl(char *s)
{
	int count = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

void palindrome(char str[])
{
	int start=0;
	int l=strl(str);
	int end=l-1;
	int flag=0;

	while(start < end){
		if(str[start]==' ' || str[end]==' '){
			start++;
			end--;
		}
		else if(str[start++]==str[end--]){
			flag=1;
		}
	}
	if(flag){
		printf("True");
		}
	else
	{
		printf("False");
	}
}
int main()
{
	char str[30]={"Never Odd Or Even"};
	palindrome(str);
	return 0;
}