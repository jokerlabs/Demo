#include <stdio.h>

int class(char buff[], char c){
		int n = 0;
		int i;
		for(i = 0; buff[i]; i++){
			if(buff[i] == c) n++;
		}
		if(n > 0) printf("%c:%d\n", c, n);
		return 0;
	}
int main(){
	char buff[1000];
	gets(buff);
	int i;
	for(i = 0; i<10; i++){
		class(buff, i + 48);
	}
	return 0;
}
