#include<iostream>
#include<algorithm>
using namespace std;
int memo[1000];
int fibbo(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(memo[n]!=-1)
    {
        return memo[n];
    }
    int ans=fibbo(n-1)+fibbo(n-2);
    memo[n]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        memo[i]=-1;
    }
    int ans=fibbo(n);
    cout<<ans;
    return 0;
}
