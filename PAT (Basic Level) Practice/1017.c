#include <stdio.h>
#include <string.h>

int main(){
	char A[1000], Q[1000];
	int B, R = 0;
	scanf("%s %d", A, &B);
	int len = strlen(A);
	int i, j;
	int a;
	a = A[0]-48;
	for(i = 0; i<len; i++){
		Q[i] = a/B + 48;
		R = a%B;
		a = R * 10 + A[i+1] - 48;	
	}
	Q[i] = '\0';
	if (Q[0] == '0')  j = 1;
	else j = 0;
	for(;j<len; j++)
	{
		printf("%c", Q[j]);
	}
	printf(" %d", R);
	return 0;
}
