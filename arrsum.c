#include <stdio.h>

int main()
{
    
    int num,k,arr[1000],sum=0,i;
    scanf("%d",&num);
    scanf("%d",&k);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
	

    return 0;
}
