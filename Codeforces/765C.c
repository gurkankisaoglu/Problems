#include <stdio.h>
int main(){
	unsigned long k,a,b;
	int impossible=-1;
	scanf("%lu %lu %lu",&k,&a,&b);
	if((a<k&&b<k)){
		printf("%d", impossible);
	}else{
		if((b<k&&a%k!=0)||(a<k&&b%k!=0)){
			printf("%d",impossible);
		}else{
			printf("%lu",a/k+b/k);
		}
	}
	return 0;
}
