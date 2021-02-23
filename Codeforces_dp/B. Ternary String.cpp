#include<cstdio>
#include<cstring>
int t;
int ans;
int n,i,l;
int sm[3];
char s[200003];
int main()
{
	scanf(" %d",&t);
	while(t--)
	{
		scanf(" %s",s);
		n=strlen(s);sm[0]=sm[1]=sm[2]=0;
		sm[s[0]-'1']=1;l=0;
		ans=n;
		for(i=1;i<n;++i)
		{
			++sm[s[i]-'1'];
			if(!(sm[0]&&sm[1]&&sm[2]))continue;
			while(sm[s[l]-'1']>1)--sm[s[l]-'1'],++l;
			if(i-l+1<ans)ans=i-l+1;
		}
		printf("%d\n",(sm[0]&&sm[1]&&sm[2])?ans:0);
	}
	return 0;
}