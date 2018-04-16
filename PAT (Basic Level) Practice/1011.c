#include <stdio.h>

int main(){
	int n;
	int i;
	scanf("%d", &n);
	struct {
		long int a, b, c;
		}buff[n];
	for(i = 0; i<n; i++){
		scanf("%ld %ld %ld", &(buff[i].a), &(buff[i].b), &(buff[i].c));
	}
	for(i = 0; i<n; i++){
		if(buff[i].a + buff[i].b > buff[i].c) printf("Case #%d: true\n", i+1);
		else printf("Case #%d: false\n", i+1);
	}
	
	return 0;
}
