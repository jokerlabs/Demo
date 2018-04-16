#include <stdio.h>
int up(int a){
		int temp[4];
		int te;
		int i, j;
		for(i = 3; i >= 0; i--){
			temp[i] = a % 10;
			a = a/10;
		}
		for(i = 0; i < 4; i++){
			for(j = i; j < 4; j++){
				if(temp[i] < temp[j]){
					te = temp[i];
					temp[i] = temp[j];
					temp[j] = te;
				}
			}
		}
		a = temp[3] + temp[2] * 10 + temp[1] * 100 + temp[0] * 1000;
		return a;
	}
	int low(int a){
		int temp[4];
		int te;
		int i, j;
		for(i = 3; i >= 0; i--){
			temp[i] = a % 10;
			a = a/10;
		}
		for(i = 0; i < 4; i++){
			for(j = i; j < 4; j++){
				if(temp[i] > temp[j]){
					te = temp[i];
					temp[i] = temp[j];
					temp[j] = te;
				}
			}
		}
		a = temp[3] + temp[2] * 10 + temp[1] * 100 + temp[0] * 1000;
		return a;
	}
int main(){
	int n;
	int a, b;
	scanf("%d", &n);
	while(n != 6174 && n != 0){
		a = up(n);
		b = low(n);
		printf("%04d - %04d = %04d\n", a, b, a-b);
		n = a-b;
	}
	return 0;
}
