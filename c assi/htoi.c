#include <stdio.h>
#include <string.h>
int htoi(char *s);
int strl(char *s);


int main()
{
  char *s = "0xa";

  printf("integer value of %s is %d\n", s, htoi(s));

  return 0;
}
int htoi(char *s)
{
   int i;
   int ans = 0;
   int l = strl(s);
   if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
      i = 2;
   }
   for(i = 0; i < l; i++) {

     	ans = ans * 16;
	
	if(s[i] >= '0' && s[i] <= '9') {

         ans = ans + s[i] - '0';

        }
	else if(s[i] >= 'a' && s[i] <= 'f') {

         ans = ans + s[i] - 'a' + 10;

        }
	else if(s[i] >= 'A' && s[i] <= 'F') {

         ans = ans + s[i] - 'A' + 10;

        }
   }
   return ans;

}
int strl(char *s){
	
	int count = 0;

	for(int i = 0; s[i] != '\0'; i++){

		count++;
		 }
	return count;
}