#include <stdio.h>

int main(){
	int n;
	int i;
	int a, o, b;
	typedef struct{
		char c;
		int count;
	}cjb;
	cjb ao[3]={{'C', 0}, {'J', 0}, {'B', 0}};
	cjb bo[3]={{'C', 0}, {'J', 0}, {'B', 0}};
	a = o = b = 0;
	scanf("%d", &n);
	char str[n][2];
	for(i=0; i<n; i++)
	{
		scanf("%s", &str[i][0]);
		scanf("%s", &str[i][1]);
	}
	for(i=0; i<n; i++)
	{
		if(str[i][0] == str[i][1]) o++;
		else if((str[i][0] == 'J' && str[i][1] == 'B') || (str[i][0] == 'B' && str[i][1] == 'C') || (str[i][0] == 'C' && str[i][1] == 'J')) 
		{
			a++;
			if (str[i][0] == 'C') ao[0].count++;
			else if (str[i][0] == 'J' ) ao[1].count++;
			else if (str[i][0] == 'B' ) ao[2].count++;
		}
		else {
			b++;
			if (str[i][1] == 'C') bo[0].count++;
			else if (str[i][1] == 'J' ) bo[1].count++;
			else if (str[i][1] == 'B' ) bo[2].count++;
		}
	}
	printf("%d %d %d\n", a, o, b);
	printf("%d %d %d\n", b, o, a);
	if (ao[2].count >= ao[0].count && (ao[2].count>= ao[1].count)) printf("B ");
	else if(ao[1].count >= ao[0].count && (ao[1].count>= ao[2].count)) printf("J ");
	else if(ao[0].count >= ao[1].count && (ao[0].count>= ao[2].count)) printf("C ");
	if(bo[2].count >=  bo[0].count && (bo[2].count>= bo[1].count)) printf("B");
	else if(bo[1].count >= bo[0].count && (bo[1].count>= bo[2].count)) printf("J");
	else if(bo[0].count >= bo[1].count && (bo[0].count>= bo[2].count)) printf("C");
	return 0;
}
