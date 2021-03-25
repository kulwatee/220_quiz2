#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,m,i,j,s,d,k,p,q,r,b,e,t;
    scanf("%lld",&n);
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
        p=a[m][0];
        q=a[m][1];
        r=a[m][2];

        for(b=0; b<r; b++)
        {
            w[p][q]='x';
        }

    }
    for(e=0;e<n;e++)
    {
        for(t=0;t<70;t++)
            printf("%c",a[e][t]);
    }





}

