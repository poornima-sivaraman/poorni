#include <stdio.h>

int main()
{
    int c=0,i;
    char n;
	scanf("%c",&n);
	if(n>=48 && n<=57)
	{
	        c=c+1;
	}
	if(c==1)
	{
	    if((n%2)==0)
	    {
		    printf("Even");
	    }
	    else
	    {
		    printf("Odd");
	    }
	}
	else
	{
	    printf("invalid");
	}

    return 0;
}
