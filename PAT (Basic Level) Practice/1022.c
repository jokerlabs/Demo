#include <stdio.h>

int main(){
	long int a, b, c, s = 0; 
	int d, r;
	int i = 1;
	scanf("%ld %ld %d", &a, &b, &d);
	c = a + b;
	while(c>0){
		r = c%d;
		s = i * r + s;
		c = c/d; 
		i = i*10;
	}
	printf("%ld", s);
	return 0;
}
