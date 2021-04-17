#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,height=0;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            if((i-1)%2==0)
            {
                height *= 2;
            }
            else
            {
                height += 1;
            }
        }
        cout<<height<<endl;
    }
    return 0;
}