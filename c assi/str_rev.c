#include<stdio.h>
#include<string.h>

void strreverse(char* str) {

	int l = strlen(str);
	int s = 0;
	int e = l-1;

	while(s < e){

		char flag = str[s];
		str[s] = str[e];
		str[e] = flag;
		s++;
		e--;
	}

	printf("%s", str);
}
int main(){

	char str[20] = "hello world";
	strreverse(str);
	return 0;

}
© 2021 GitHub, Inc.