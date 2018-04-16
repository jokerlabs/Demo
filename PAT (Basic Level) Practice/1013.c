#include <stdio.h>
#include <math.h>

int main(){
	int m, n;
	int i, j;
	int tag;
	int counter = 1;
	scanf("%d%d", &m, &n);
	for(i = 2; counter <= n; i++){
		tag = 1;
		for(j = 2; j<=sqrt(i); j++){
			if(i%j == 0) {
				tag = 0;
				break;	
			}
		}
		if(tag ==  1){
			if( counter >= m){
				if((counter - m)%10 == 9) printf("%d\n", i);
				else 	printf("%d ", i);
			}
			counter ++;
		}
	}
	return 0; 
}
