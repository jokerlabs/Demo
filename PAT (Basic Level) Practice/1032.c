/* PAT 1032  挖掘技术哪家强
 * 
 * 输入在第1行给出不超过105的正整数N，即参赛人数。随后N行，每行给出一位参赛者的信息和成绩，包括其所代表的学校的编号（从1开始连续编号）、及其比赛成绩（百分制），中间以空格分隔。
 * 在一行中给出总得分最高的学校的编号、及其总分，中间以空格分隔。题目保证答案唯一，没有并列。
 * */

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int num1, score1 = 0;
	int temp;
	struct {
		int num;
		int scores;
	}buff[n];                                           // 构造结构体数组，存储每一个参赛队的编号和成绩
	for(i = 0; i<n; i++)
		scanf("%d %d", &buff[i].num, &buff[i].scores);
	for(i = 0; i<n; i++){
		temp = buff[i].scores;
		for(j = 0; j < i; j++){
			if(buff[i].num == buff[j].num){
				temp  = temp + buff[j].scores;         // 判断参赛队的编号，相同则成绩相加
			}	
		}
		if(temp > score1) {
			score1 = temp;
			num1 = buff[i].num;                        // 根据最终成绩的大小得出第一名的编号和成绩
		}
	}
	printf("%d %d", num1, score1);
	return 0;
}
