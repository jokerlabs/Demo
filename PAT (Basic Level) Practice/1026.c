#include <stdio.h>

int main(){
	long int c1, c2;
	long int c3;
	long int t;
	int h, m, s;
	scanf("%ld%ld", &c1, &c2);
	c3 = c2 - c1;
	if(c3%100 >= 50) t = c3/100 + 1;
	else t = c3/100;
	h = t/3600;
	m = (t%3600)/60;
	s = (t%3600)%60;
	printf("%02d:%02d:%02d", h, m, s);
	return 0;
}
