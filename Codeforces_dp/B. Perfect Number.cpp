#include<stdio.h>
int main()
{
    int k,i,j,x;
	scanf("%d",&k);
	for(i=19;k;++i){
		for(x=0,j=i;j;j/=10)x+=j%10;
		    if(x==10)k--;
	}
	printf("%d",i-1);
	return 0;
}