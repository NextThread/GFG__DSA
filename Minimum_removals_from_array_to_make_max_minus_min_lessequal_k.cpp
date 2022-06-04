#include "bits/stdc++.h"
using namespace std;
main(){
	int n;
	cin>>n;
	vector<int>a(n);
	int k;
	cin>>k;
	for(int i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
	vector<int>removed;
	sort(a.begin(), a.end());
	int cnt = 0, lo = 0, hi = n-1;
	bool done = false;
	while(lo < hi)
	{
		if(a[hi]-a[lo] <= k)
		{
			done = true;
			break;
		}
		if((a[hi]-a[hi-1]) > (a[lo+1]-a[lo]))
		{
			removed.push_back(a[hi]);
			hi--;
			cnt++;
		}
		else
		{
			removed.push_back(a[lo]);
			lo++;
			cnt++;
		}
	}
	if(done)
	{
	cout<<"Minimum no of removal is  "<<cnt<<endl;
	}
	
	cout<<"All removed elements are\n";
	for(auto it : removed) cout<<it<<" ";
}
        
        
