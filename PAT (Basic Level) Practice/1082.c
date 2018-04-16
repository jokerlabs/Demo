#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int i;
	int max, min;
	int m, n;
	int s = 0;
	struct {
		char id[10];
		int x;
		int y;
	}buff[N];
	for(i = 0; i<N; i++)
	{
		scanf("%s %d %d", buff[i].id, &buff[i].x, &buff[i].y);
	}
	max = min = buff[0].x * buff[0].x + buff[0].y * buff[0].y;
	m = n = 0;
	for(i = 1; i<N; i++)
	{
		s = buff[i].x * buff[i].x + buff[i].y * buff[i].y;
		if(s < min) {
			min = s;
			n = i;
		}
		if(s > max){
			max = s;
			m = i;
		}
	}
	printf("%s %s", buff[n].id, buff[m].id);
	return 0;
}
