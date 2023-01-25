#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	int tc;
    cin>>tc;
    for(int i=0;i<tc;i++)
	{
		int n,m1,m2;
		cin>>n>>m1>>m2;
        set<int>s;
        s.clear();
        set<int>s1;
        s1.clear();
        set<int>s2;
        s2.clear();
		for(int i=1;i*i<=m1;i++) 
         if(m1%i==0)
         s1.insert(i),s1.insert(m1/i);
		for(int i=1;i*i<=m2;i++)
         if(m2%i==0)
         s2.insert(i),s2.insert(m2/i);
		for(auto it:s1) 
			for(auto itr:s2) s.insert(it*itr);
		int ans=0;
		int res=0;
		for(auto it:s)
		{
			for(auto itr =s.lower_bound(it/n);itr!=s.end();itr++){
				int y=*itr;
				if(y>n || y>it) 
                   break;
				if(it%y==0 && it/y<=n){
					ans++;
					res^=y;
					break;
				}
			}
		}
		cout<<ans<<" "<<res<<" "<<endl;
	}	
	return 0;
} 