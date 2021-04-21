#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int maxno;
	vector<int>v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
		maxno=*max_element(v.begin(),v.end());
		if (maxno>k)
		{
			cout<<maxno-k<<endl;
		}
		if (k>maxno)
		{
			cout<<"0"<<endl;
		}
		
	}
