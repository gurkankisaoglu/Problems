#include <stdio.h>
#include <math.h>
int main(){
	unsigned long n;
	int k;
	int counter=0,counter1=0;
	scanf("%lu %d",&n,&k);
	int kk=(int)pow(10,k);
	while(n%kk!=0){
		if(n%10!=0){
			
			counter+=1;
		}else{
			kk=kk/10;
			counter1++;
		}
		n/=10;
	}
	printf("%d",counter+counter1-1);
	return 0;
}
