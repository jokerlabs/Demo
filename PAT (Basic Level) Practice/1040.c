/*
 * 字符串APPAPT中包含了两个单词“PAT”，其中第一个PAT是第2位(P),第4位(A),第6位(T)；
 * 第二个PAT是第3位(P),第4位(A),第6位(T)。
 * 现给定字符串，问一共可以形成多少个PAT？
 */
#include <stdio.h>
#include <string.h>

int main(){
	int i, j, k;
	long int counter = 0;
	char s[100000];
	scanf("%s", s);
	int len;
	len = strlen(s);
	for(i = 0; i < len; i++){
		if(s[i] == 'P'){
			for(j = i; j < len; j++){
				if(s[j] == 'A'){
					for(k = j; k < len; k++){
						if(s[k] == 'T') counter++;
					}
				}
			}
		}
	}
	printf("%ld", counter);
	return 0;
}

