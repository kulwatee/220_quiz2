#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,m,i,j,s,d,k,b,e,t;
    scanf("%lld",&n);
    int p,q,r;
    scanf("%lld",&m);
    char w[n][70];
    long long int a[m][3];
    for(i=0; i<m; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%lld",&a[i][j]);
        }
    }
    for(s=0; s<n; s++)
    {
        for(d=0; d<70; d++)
        {
            w[s][d]='o';
        }
    }

    for(k=0; k<m; k++)
    {
        p=a[k][0];
        q=a[k][1];
        r=a[k][2];

        for(b=q; b<q+r; b++)
        {
            w[p-1][b-1]='x';
        }

    }
    for(e=0; e<n; e++)
    {
        for(t=0; t<70; t++)
            printf("%c",w[e][t]);
        printf("\n");
    }

return 0;
}

