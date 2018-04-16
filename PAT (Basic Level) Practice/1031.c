/* PAT 1031 验证身份证
 
 * 一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：
 * 首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；
 * 然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：

                  Z：0 1 2 3 4 5 6 7 8 9 10
                  M：1 0 X 9 8 7 6 5 4 3 2
 
 * 现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码*/

#include <stdio.h>
#include <string.h>

int main(){
	int n;
	int i, j;
	int buff[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};    // 设置数组为身份证各位的权重
	int tag = 0;
	int count = 0;
	char mark;
	scanf("%d", &n);
	char s[n][18];
	for(i = 0; i<n; i++)
	{
		scanf("%s", s[i]);
	}
	for(i = 0; i<n; i++)
	{
		tag = 0;
		for(j = 0; j<17; j++){
			if(s[i][j] == 'X') tag =(int)(s[i][j] - 'N') * buff[j] + tag; 
			else
			tag = (int)(s[i][j]-'0') * buff[j] + tag;     // 判断字符并转化成数字与对应的权重相乘求和
			}
		//printf("%d\n", tag);
		
		tag = tag%11;                                     // 和模11
		//printf("%d\n", tag);
		switch(tag){
			case 0: mark = '1'; break;
			case 1: mark = '0'; break;
			case 2: mark = 'X'; break;
			case 3: mark = '9'; break;
			case 4: mark = '8'; break;
			case 5: mark = '7'; break;
			case 6: mark = '6'; break;
			case 7: mark = '5'; break;
			case 8: mark = '4'; break;
			case 9: mark = '3'; break;
			case 10: mark = '2'; break;
		}                                                 // 根据得到的结果和身份证最后一位进行比较，不同则输出，全对输出“All passed”
		//printf("%c\n", mark);
		if(mark != s[i][17]){
			for(j = 0; j<18; j++)
				printf("%c", s[i][j]);
			printf("\n");
			count++;
		}
	}
	if(count == 0) printf("All passed");
	return 0;
	
}
