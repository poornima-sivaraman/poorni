#include <stdio.h>

int main()
{
    char a[]={'a','e','i','o','u','A','E','I','O','U'};
    char b[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
    char n;
    scanf("%c",&n);
    int i,m=0;
    for(i=0;i<10;i++)
    {
        if(n==a[i])
        {
          printf("Vowel"); 
          m=1;
          break;
        }
    }
    for(i=0;i<42;i++)
    {
        if(n==b[i])
        {
           printf("Consonant"); 
           m=1;
           break;
        }
    }
    if(m==0)
    {
            printf("invalid");
    }     
    
    
    return 0;
}
