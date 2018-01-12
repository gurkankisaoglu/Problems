#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bagCount , i , total=0 , options=0;
    scanf("%i" ,&bagCount);
    int cookiesInBags[bagCount];
    for(i=0;i<bagCount;i++)
        scanf("%i" ,&cookiesInBags[i]);
    for(i=0;i<bagCount;i++)
        total+=cookiesInBags[i];
    for(i=0;i<bagCount;i++)
        if(total%2==0)
        {
            if(cookiesInBags[i]%2==0)
                options++;
        }
        else if(total%2!=0)
                if(cookiesInBags[i]%2!=0)
                    options++;
printf("%i", options);
    return 0;
}
