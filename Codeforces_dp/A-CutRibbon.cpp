#include<iostream>
main(){int n,a,b,c,d=1,e,i,j;std::cin>>n>>a>>b>>c;for(i=0;i<=4000;i++)for(j=0;j<=4000;j++){e=n-a*i-b*j;if(e>=0&&e%c==0)d=std::max(d,i+j+e/c);}std::cout<<d;;}