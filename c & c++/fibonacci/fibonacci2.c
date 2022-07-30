#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("Enter Fibonacci count:");
    scanf("%d", &n);
    printf("%d\n",a);
    printf("%d\n",b);
for (i = 3; i <=n; i++)
{
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
    
}
    

}