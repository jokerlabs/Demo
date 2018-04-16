/*	PAT 1037 在霍格沃茨找零钱
 * 如果你是哈利·波特迷，你会知道魔法世界有它自己的货币系统 —— 就如海格告诉哈利的：“十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可，很容易。”
 * 现在，给定哈利应付的价钱P和他实付的钱A，你的任务是写一个程序来计算他应该被找的零钱。
 * */

#include <stdio.h>
#include <math.h>

int main(){
	int buff[2][3];
	int galleon, sickle, knut;
	scanf("%d.%d.%d", &buff[0][0],&buff[0][1],&buff[0][2]);
	scanf("%d.%d.%d", &buff[1][0],&buff[1][1],&buff[1][2]);      // 按照格式要求输出应付和实付金额
	int in, out, change;
	in  = buff[0][2] + buff[0][1] * 29 + buff[0][0] * 29 * 17;
	out = buff[1][2] + buff[1][1] * 29 + buff[1][0] * 29 * 17;   // 将数值换算成knut,并得出差值
	change = out - in;
	galleon = abs(change) / (29 * 17);
	sickle  = abs(change) % (29 * 17) / 29; 
	knut    = abs(change) % (29 * 17) % 29;                      // 将knut换算成要求的格式
	if (change<0) printf("-%d.%d.%d", galleon, sickle, knut);
	else printf("%d.%d.%d", galleon, sickle, knut);              // 判断正负，输出
	return 0;
}
