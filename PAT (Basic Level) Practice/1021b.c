#include <stdio.h>

int class(int n, int x)
{
	int c = 0;
	while(n){
		if(x == n%10) c++;
		n = n/10;
	}
	if(c > 0) printf("%d:%d\n",x, c);
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < 10; i++){
		class(n, i);
	}
}
