/* PAT 1043 输出PATest
 * 给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按“PATestPATest....”这样的顺序输出，并忽略其它字符。
 * 当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按PATest的顺序打印，直到所有字符都被输出。
 */

#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int tag;
	struct {
		char c;
		int count;
	}ch[] = {{'P', 0},{'A', 0}, {'T', 0}, {'e', 0}, {'s', 0}, {'t', 0}};  // 构造并初始化字母字典
	char s[10000];
	scanf("%s", s);
	int len;
	len = strlen(s);
	for(i = 0; i < len; i++){
		if(s[i] == 'P')	ch[0].count++;
		else if(s[i] == 'A')	ch[1].count++;
		else if(s[i] == 'T')	ch[2].count++;
		else if(s[i] == 'e')	ch[3].count++;
		else if(s[i] == 's')	ch[4].count++;
		else if(s[i] == 't')	ch[5].count++;                            // 统计各字母的次数
	}
	int num = ch[0].count + ch[1].count + ch[2].count + ch[3].count + ch[4].count + ch[5].count;
	for(i = 0;; i++){
		tag = i%6;
		if(num && ch[tag].count){
			ch[tag].count--;
			printf("%c", ch[tag].c);
			num --;
		}                                                                 // 按照字母表循环输出，计数减1,当计数为0,不输出
		if(num == 0) break;
	}
	return 0;
}

