#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,tmp,a,b,n;
    char s[1000],rvs[1000];
    while(gets(s))
    {
        l=strlen(s),j=0;
      if(s[0]>=48&&s[0]<=57)
        {
            n=0,j=0;
            for(i=l-1;i>=0;i--)
            {
              n=n*10+s[i]-48;
              if(n>=32&&n<=127)
              {
                  rvs[j]=n;
                  n=0;
                  j++;
              }
            }
             for(i=0;i<j;i++)
                {
                 printf("%c",rvs[i]);

                }
        }
        else
        {
            for(i=0;i<l;i++)
        {
            a=s[i];
            if(a<100)
            {
                b=0;
                while(a!=0)
            {
                rvs[j]=a%10;
                j++;
                b++;
                a/=10;
                if(b>1)
                {
                    tmp=rvs[j-2];
                    rvs[j-2]=rvs[j-1];
                    rvs[j-1]=tmp;
                }
            }
            }
            else
            {
                b=0;
                   while(a!=0)
                {
                rvs[j]=a%10;
                j++;
                b++;
                a/=10;
                if(b>2)
                {
                    tmp=rvs[j-3];
                    rvs[j-3]=rvs[j-1];
                    rvs[j-1]=tmp;
                }
              }
            }
          }
           for(i=j-1;i>=0;i--)
                {
                    printf("%d",rvs[i]);
                }
        }
        printf("\n");
    }
    return 0;
}
