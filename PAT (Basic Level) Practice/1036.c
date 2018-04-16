/* PAT 1036 跟奥巴马一起学编程
 * 输入在一行中给出正方形边长N（3<=N<=20）和组成正方形边的某种字符C，间隔一个空格。
 * 输出由给定字符C画出的正方形。但是注意到行间距比列间距大，所以为了让结果看上去更像正方形，
 * 我们输出的行数实际上是列数的50%（四舍五入取整）。
 * 						aaaaaaaaaa
                        a        a
                        a        a
                        a        a
                        aaaaaaaaaa
 * 
 */

#include <stdio.h>

int main(){
	int N, n;
	char c;
	int i, j;
	scanf("%d %c", &N, &c);
	if(N%2 == 1) n = (N+1)/2;
	else n = N/2;                         // 分别获得长和宽 
	for(i = 0; i < n; i++)
	{
		if(i == 0 || i == n-1)
			for(j = 0; j < N; j++)
				printf("%c", c);         
		else for(j = 0; j < N; j++){
			if(j == 0 || j == N-1)
			printf("%c", c);
			else printf(" ");	
		}
	printf("\n");
	}
	return 0;
}
