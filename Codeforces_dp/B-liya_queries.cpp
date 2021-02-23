#include <iostream>
int Q,A[100005],L,R,i;std::string S;
main()
{std::cin>>S>>Q;for(i=S.length()-2;i>=0;i--)A[i]=A[i+1]+(S[i]==S[i+1]);
while(Q--)
{std::cin>>L>>R;
std::cout<<A[L-1]-A[R-1]<<"\n";}}