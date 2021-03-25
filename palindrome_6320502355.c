#include<stdio.h>
int main()
{
    int q,w=0;
    long long int n,k,i,j;
    scanf("%lld",&n);
    for(i=1; i<n; i++)
    {
        q=1;
        j=i;
        while(j>0)
        {
            k=(j%10)*q;
            j=j/10;
            q=q*10;
        }
      if(i==k)
        w++;

    }
    printf("%d",w);
    printf("\n%d",k);

}
