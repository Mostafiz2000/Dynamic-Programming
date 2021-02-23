#include<bits/stdc++.h>
using namespace std;
int f(int n,int h)
{
    if(n)
    {
        return f(n-1,h+1)+f(n-1,h-1);
    }
    else if(h==0)return 1;
    else return 0;
        
}
int main()
{
    string s,x;
    int c=0,sum=0,sum2=0;
    cin>>s>>x;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+')sum++;
        else if(s[i]=='-')sum--;
        if(x[i]=='?')c++;
        if(x[i]=='+')sum2++;
        else if(x[i]=='-')sum2--;
        
    }
    if(c==0&&sum==sum2)
    {
       printf("1.000000000000"); 
    }
    else if(c==0){
cout<<"0.000000000000"<<endl;


        
    }
    else {
        printf("%0.9f\n",(double)f(c,sum-sum2)/pow(2,c));
    }
}