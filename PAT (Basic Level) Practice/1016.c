#include <stdio.h>

int main(){
	char a[10], da, b[10], db;
	long int m = 0, n = 0;
	int i;
	scanf("%s %c %s %c", a, &da, b, &db);
	for(i = 0; a[i]; i++){
			if(a[i] == da) {
				m = m * 10 + da - 48;
			}
	}
	for(i = 0; b[i]; i++){
			if(b[i] == db) n = n * 10 + db - 48;
	}
	printf("%ld", m+n);
	return 0;
}
