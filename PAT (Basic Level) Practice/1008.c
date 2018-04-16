#include <stdio.h>
#include <string.h>

int main(){
	char s1[100];
	char s2[100];
	int len;
	int i, j, k;
	int n = 0;
	gets(s1);
	len = strlen(s1);
	k = len-1;
	for(i = len;  i>=-1; i--){
		if(s1[i] == ' ' || i == -1 ) {
			j = i + 1;
			for(; j<= k; j++){
				s2[n] = s1[j];
				n++;
			}
			if(i != -1) s2[n] = ' ';
			n ++;
			k = i - 1;
		}
	}
	s2[n] = '\0';
	puts(s2);
	return 0;
}
