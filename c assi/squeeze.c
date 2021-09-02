#include<stdio.h>

void squeeze(char *s1,char *s2)
{
	int i,m,n;
    	n = 0;

    	for(i = 0; s1[i] != '\0'; ++i)
    	{
        	for(m = 0; (s1[i] != s2[m]) && s2[m] != '\0' ; ++m);
        		if(s2[m] == '\0')
            		s1[n++] = s1[i];
		
    	}
    
    	s1[n] = '\0';

	printf("%s ",s1);
 
}       

int main(){

	char s1[20] = "abcd";
	char s2[20] = "bc";
	squeeze(s1, s2);
	return 0;

}