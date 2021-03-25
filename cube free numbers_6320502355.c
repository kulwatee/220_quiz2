#include<stdio.h>
int main()
{
    long long int n,i=2,k=,l,p=7;
    scanf("%lld",&n);
    if(n>0&&n<8)
        printf("%lld",n);
    else
    {
        for(q=0; q<n; q++)
        {
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
            if(l>=3)
              printf("Not Cube Free");

            else
                p++;
        }
    }
}


}
