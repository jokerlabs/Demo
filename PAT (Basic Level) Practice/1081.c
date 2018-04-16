#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int len;
	int counter;
	int tag;
	char psd[100][20];
	for(i = 0; i<n; i++) {
		
		}
	for(i = 0; i<n; i++){
		tag = 1;
		len = strlen(psd[i]);
		if(len < 6) {
			printf("\nYour password is tai duan le.%d", len);
			tag = 0;
		}
		else {
			for(j = 0; j<len; j++)
			{
				if(psd[i][j] < 46 || psd[i][j] > 122 || (psd[i][j] > 57 && psd[i][j] < 65) || (psd[i][j] > 90 && psd[i][j] < 97))
				{
					printf("\nYour password is tai luan le.");
					tag = 0;
					break;
				}
				else if(psd[i][j] > 57 || (psd[i][j] = '.')){
					counter++;
					if(counter == len){
						printf("\nYour password needs shu zi.");
						tag = 0;
					}	
				}
				else if(psd[i][j] < 65){
					counter++;
					if(counter == len)
					{
						printf("\nYour password needs zi mu.");
						tag = 0;
					}
				}
				
			}
		}
		if(tag == 1) printf("\nYour password is wan mei.");
	}
	return 0;
}
