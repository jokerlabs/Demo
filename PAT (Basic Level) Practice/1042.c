/* PAT 1042   字符统计
 * 输入在一行中给出一个长度不超过1000的字符串。字符串由ASCII码表中任意可见字符及空格组成，至少包含1个英文字母，以回车结束（回车不算在内）。
 * 在一行中输出出现频率最高的那个英文字母及其出现次数，其间以空格分隔。如果有并列，则输出按字母序最小的那个字母。统计时不区分大小写，输出小写字母。
 */
 
#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int tag;
	int max = 0;
	struct {
		char c;
		int count;
	}ch[26];                         // 构造一个26个字母的字典表，用来存储每个字母出现的次数
	for(i = 0; i<26; i++){
		ch[i].c = i+'a';
		ch[i].count = 0;             // 初始化字典表，次数初始为0
	}
	char s[1000];
	gets(s);
	int len;
	len = strlen(s);
	for(i = 0; i < len; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			tag = s[i] - 'a';               
			ch[tag].count++;              // 根据字母出现的次数，将计数加1
		}		
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			tag = s[i] - 'A';
			ch[tag].count++;
		}		
	}
	for(i = 0; i<26; i++){
		if(ch[i].count > max){
			max = ch[i].count;
			tag = i;
		}
	}                                    // 判断次数最多的字母，用标志为将它输出
	printf("%c %d", ch[tag].c, ch[tag].count);
	
	return 0;
}
