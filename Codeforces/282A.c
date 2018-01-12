#include <stdio.h>
#include <stdlib.h>
int main()
{
	int statementNumber ,x=0;
	char statements[5];
	scanf("%d",&statementNumber);
	for(int i=0; i<statementNumber ; i++)
	{
		scanf(" %s",statements);
		if (statements[1]=='+'){
			x++;
		}else{
			x--;
		}
	}
	printf("%d",x);
	return 0;
}
