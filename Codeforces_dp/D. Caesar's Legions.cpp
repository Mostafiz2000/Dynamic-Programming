#include <algorithm>
#include <cstdio>
const int mo=1e8;
int f[105][105][2],i,j,k,n1,n2,k1,k2;
int main()
{
	scanf("%d%d%d%d\n",&n1,&n2,&k1,&k2);
	f[0][0][0]=f[0][0][1]=1;
	for (i=0;i<=n1;++i)
		for (j=0;j<=n2;++j)
		{
			for (k=1;k<=k1 && k<=i;++k)
				(f[i][j][0]+=f[i-k][j][1])%=mo;
			for (k=1;k<=k2 && k<=j;++k)
				(f[i][j][1]+=f[i][j-k][0])%=mo;
		}
	printf("%d\n",(f[n1][n2][0]+f[n1][n2][1])%mo);
}