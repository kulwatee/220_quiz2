#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld",&n);
    scanf("%lld",&m);
    char w[n][70];
    long long int a[m][3];
    for(i=0;i<m;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%lld",a[i][j]);
        }
    }
    for(s=0;s<n;s++)
    {
        for(d=0;d<70;d++)
        {
            w[s][d]='o';
        }
    }
    for(k=0;k<m;k++)
    {
        p=a[m][0];
        q=a[m][1];
        r=a[m][2];


    }




}

