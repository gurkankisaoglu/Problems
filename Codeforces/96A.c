#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int counter1=0, counter0=0;
	char positions[101];
	scanf("%s" , positions);
	for(int i=0; i<strlen(positions); i++)
	{
		if(counter1==7 || counter0==7){
			printf("YES");
			break;
		}else if(counter1==6){
			if(positions[i]=='1'){
				counter1++;
				printf("YES");
				break;
			}
		}else if(counter0==6){
			if(positions[i]=='0'){
				counter0++;
				printf("YES");
				break;
			}
		}else if(positions[i]=='0' && positions[i+1]=='0'){
			counter0++;
		}else if(positions[i]=='0' && positions[i+1]=='1'){
			counter0=0;
		}else if(positions[i]=='1' && positions[i+1]=='1'){
			counter1++;
		}else if(positions[i]=='1' && positions[i+1]=='0'){
			counter1=0;
		}
	}
	if(counter1<7 && counter0<7){
		printf("NO");
	}
}

