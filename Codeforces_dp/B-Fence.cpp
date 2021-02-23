#include<bits/stdc++.h>
using namespace std;
int k,a[150005],i,n,x,ma=1e9,dg=-1;
main()
{
    scanf("%d%d",&n,&k);
    for (i=1;i<=n;i++)
        scanf("%d",&x),a[i]=a[i-1]+x;
    for (i=1;i<=n-k+1;i++)
        if (ma>a[i+k-1]-a[i-1])
            dg=i,ma=a[i+k-1]-a[i-1];
    printf("%d",dg);
}