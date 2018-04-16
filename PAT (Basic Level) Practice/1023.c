#include <stdio.h>

int main(){
	int in[10];
	int out[50];
	int i, j, k = 0;
	for(i = 0; i < 10; i++)
		scanf("%d", &in[i]);
	if(in[0] != 0){
		for(i = 1; in[i] == 0; i++);
		out[k] = i;
		k++;
		for(j = 0; j<in[0]; j++)
		{
			out[k] = 0;
			k++;
		}
		for(j = 0; j<in[i]-1; j++)
		{
			out[k] = i;
			k++;
		}
		i++;
		for(; i<10; i++){
			if(in[i] != 0){
				for(j = 0; j<in[i]; j++)
				{
					out[k] = i;
					k++;
				}
			}
				
		}
	}
	else{
		for(i = 0; i<10; i++){
			if(in[i] != 0){
				for(j = 0; j<in[i]; j++)
				{
					out[k] = i;
					k++;
				}
			}
				
		}
	}
	for(i = 0; i<k; i++){
		printf("%d", out[i]);
	}
	return 0;
}
