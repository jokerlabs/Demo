/* PAT 1041
 * 每个PAT考生在参加考试时都会被分配两个座位号，一个是试机座位，一个是考试座位。
 * 正常情况下，考生在入场时先得到试机座位号码，入座进入试机状态后，系统会显示该考生的考试座位号码，考试时考生需要换到考试座位就座。
 * 但有些考生迟到了，试机已经结束，他们只能拿着领到的试机座位号码求助于你，从后台查出他们的考试座位号码。
 */
#include <stdio.h>

int main(){
	int N;
	int i, j;
	scanf("%d", &N);
	struct{
		char id[15];
		int JiNum;
		int BiNum;
	}buff[N];                                       // 构造结构体，用来存储考生的座位号，机试座位，考试座位
	for(i = 0; i<N; i++)
	{
		scanf("%s%d%d", buff[i].id, &buff[i].JiNum, &buff[i].BiNum);
	}
	int n;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);                          // 输入要查询的试机座位
	}
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<N; j++)
		{
			if(a[i] == buff[j].JiNum)
				printf("%s %d\n", buff[j].id, buff[j].BiNum);   // 根据试机座位查找出相应的ID和考试座位号
		}
	}
	return 0;
}
