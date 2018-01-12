#include <stdio.h>
#include <stdlib.h>
int main()
{
	int stoneNumber;
	scanf("%d", &stoneNumber);
	int consecutiveRed=0,consecutiveBlue=0,consecutiveGreen=0;
	char colours[51];
	scanf("%s", colours);
	for (int i=0; i<stoneNumber; i++)
	{
		if(colours[i]==colours[i+1]){
			if (colours[i]=='R'){
				consecutiveRed++;
			}else if(colours[i]=='B'){
				consecutiveBlue++;
			}else{
				consecutiveGreen++;
			}
		}
	}
	printf("%d",consecutiveRed+consecutiveGreen+consecutiveBlue);
}
