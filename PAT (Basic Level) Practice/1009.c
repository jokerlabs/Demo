#include <stdio.h>
#include <math.h>

int fun(int n){
	int j;
	int tag;
	tag = 1;
	for(j = 2; j<=sqrt(n); j++){
			if(n%j == 0) {
				tag = 0;
				break;	
			}
		}
	if(tag ==  1) return 1;	
	else return 0;		
}

int main(){
	int n;
	int i, counter = 0;
	scanf("%d", &n);
	for(i = 4; i<=n; i++){
		if(fun(i) && fun(i-2)) {
			printf("%d ", i);
			counter++;
		}
	}
	printf("%d", counter);
}
