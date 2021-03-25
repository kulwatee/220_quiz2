#include<stdio.h>
int main()
{
    int q,w=0;
    long long int n,k,i,j,h;
    scanf("%lld",&n);
    for(i=1; i<n; i++)
    {
        k=0;
        q=1;
        j=i;
        h=i;
        while(h>9)
        {
            h=h/10;
            q=q*10;
        }
        while(j>0)
        {
            k+=(j%10)*q;
            j=j/10;
            q=q/10;
        }
        if(k==i)
            w++;


    }
   // printf("%d",k);
     printf("%d",w);


}
