#include <stdio.h>

int main(){
	int n;
	char s[100];
	int i, j, k = 0;
	int count = 1;
	scanf("%d", &n);
	while(n){
		i = n%10;
		for(j = i-1; j >=0; j--){
			if(count == 1){
				s[k] = i + '0';
				i --;
			}
			if(count == 2){
				s[k] = 'S';
			}
			if(count == 3){
				s[k] = 'B';
			}
			k ++;
			
		}
		n = n/10;
		count ++;
	}
	for(i = k-1; i >= 0; i--)
		printf("%c", s[i]);
	return 0;
}
