#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int contestants,highers;
	scanf("%d %d" ,&contestants,&highers);
	int scores[contestants];
	for(int i=0;i<contestants;i++)
		scanf("%d",scores+i);
	int res=0 , i=highers+1;
	for(i=0;i<contestants;i++)
	{
		if(scores[i]==0){res=i;break;}
		res++;
		if(scores[i]<scores[highers-1]){res=i; break;}	
	}
	printf("%d",res);
}
