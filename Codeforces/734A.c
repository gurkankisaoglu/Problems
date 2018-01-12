#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int gameCount;
	scanf("%d", &gameCount);
	int antonWins=0, danikWins=0;
	char wins[100001];
	scanf("%s",wins);
	for (int i = 0; i< gameCount;i++)
	{
		if(wins[i]=='A'){
			antonWins++;
		}else{
			danikWins++;
		}
	}
	if (antonWins<danikWins){
		printf("Danik");
	}else if(antonWins>danikWins){
		printf("Anton");
	}else{
		printf("Friendship");
	}
}

