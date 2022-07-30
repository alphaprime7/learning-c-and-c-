#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,a=-1,b=1,c;
        printf("fibonacci numbers needed:");
        scanf("%d",&n);
        
for (i=0;i<n;i++)
{   
    c=a+b;
    printf("%d",c);
    a=b;
    a=c;
    
}
    
    
}
