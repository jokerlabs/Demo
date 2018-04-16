#include <stdio.h>

int main(){
	int buff[100][2];
	int i = 0;
	do{
		scanf("%d", &buff[i][0]);
		scanf("%d", &buff[i][1]);
		i++;
	}while(buff[i-1][1] != 0);
	int len = i;
	for(i = 0; i < len - 1; i++)
	{
		buff[i][0] = buff[i][0] * buff[i][1];
		buff[i][1] = buff[i][1] - 1;
	}
	for(i = 0; i < len-2; i++){
		printf("%d %d ", buff[i][0], buff[i][1]);
	}
	printf("%d %d", buff[i][0], buff[i][1]);
	return 0;
}
