#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int buff[n];
	int i, j;
	int sum;
	int counter=0;
	for(i = 0; i<n; i++){
		scanf("%d", &buff[i]);
	}
	for(i = 0; i<n; i++){
		sum = 0;
		while(buff[i]){
			sum = sum + buff[i] % 10;
			buff[i] = buff[i]/10;
		}
		buff[i] = sum;
	}
	for(i = 0; i<n; i++){
		for(j = i; j<n; j++){
			if(buff[i]>buff[j]){
				int temp = buff[j];
				buff[j] = buff[i];
				buff[i] = temp;
			}
		}
	}
	
	for(i = 0; i<n; i++){
		if(buff[i] != buff[i+1]) {
			counter++;
		}
	}
	printf("%d\n", counter);
	for(i = 0, j=1; i<n; i++){
		if(buff[i] != buff[i+1]) {
			if(j == counter) printf("%d", buff[i]);
			else printf("%d ", buff[i]);
			j++;
		}
	}
	
	return 0;
}
