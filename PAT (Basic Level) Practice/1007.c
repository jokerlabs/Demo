#include <stdio.h>

int main(){
	int n, m;
	int i, j;
	int len;
	int temp;
	scanf("%d%d",&m, &n);
	int buff[m];
	for(i = 0; i<m; i++){
		scanf("%d", &buff[i]);
	}
	len = m-1;
	for(j = 0; j<n; j++){
		temp = buff[len];
		for(i = len; i>0 ; i--)
			buff[i] = buff[i-1];
		buff[0] = temp;
	}
	for(i = 0; i<m-1; i++){
		printf("%d ", buff[i]);
	}
	printf("%d", buff[i]);
	return 0;
}
