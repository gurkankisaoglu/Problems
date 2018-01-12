#include <stdio.h>

int main()
{
    int count=0;
    char x;
    int i=0;
    int n;
    scanf("%d",&n);
    while (i<=n) {
        x=getchar();
        if (x=='I') count+=20;
        if (x=='D') count+=12;
        if (x=='C') count+=6;
        if (x=='T') count+=4;
        if (x=='O') count+=8;
        if(x=='\n') n--;
    }
    printf("%d",count);
    return 0;
}	
