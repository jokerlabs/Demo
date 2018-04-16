#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	int i, j;
	scanf("%d", &n);
	int buff[n];
	for(i = 0; i<n; i++){
		scanf("%d", &buff[i]);
	}
	for(i = 0; i<n; i++){
		for(j = 0; j<n; j++){
			if(i != j){
				sum = buff[i] * 10 + buff[j] + sum;
			}
		}
	}
	printf("%d", sum);
	return 0;
}
