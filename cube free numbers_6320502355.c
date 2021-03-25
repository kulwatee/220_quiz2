#include<stdio.h>
int main()
{
    long long int n,i=2,k=2,l=0,p=7,q,w;
    scanf("%lld",&n);
    if(n>0&&n<8)
        printf("%lld",n);
    else
    {
        for(q=8; q<n; q++)
        {
            l=0;
            w=q;
            while(w>1)
            {
                while(w%i!=0)
                    i++;

                w=w/i;
                if(k==i)
                    l++;
                k=i;
            }
            if(l<3)
                p++;
        }
    }

    if(l>=3)
        printf("Not Cube Free");
    else
        printf("%lld",p);
}



