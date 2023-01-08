#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//const int mxn = 400005;


    
   // ll i=1,j=2;
  /*  ll cnt = 1; 
    ll arr[n];
    for (int i=0;i<n;i++) 
    { 
        cin>>arr[i];
        cnt = cnt * arr[i];
    } 
    cnt = n + cnt -1;
    cout<<2022 * cnt<<endl;
     
     ll n;
     cin>>n; 
     ll mod = 1000000007;

   ll ans = n; 
    ans = (ans*((4*n-1)))%mod;
    ans = (ans* ((n+1)%mod))%mod;
    ans = (ans*166666668)%mod;
    cout<<(2022*ans)%mod<<endl;
    
    
 ll n;
 cin>>n;
 ll res = 0;
 ll arr[mxn];
 ll brr[mxn];
 
 for(int i=1;i<=n;i++){
     arr[i] = arr[i-1] ^ n;
     
 }
 for(int i=0;i<(2<<log2(n));i++){
     brr[i]=0;
     brr[0]=1;
 }
for(int i=1;i<=n;i++){
    for(int j=0;j*j<(2<<log2(n));j++){
        res = res + brr[arr[i]^(j*j)];
        brr[arr[i]]++;
    }
}
ll ans = 1 * n * (n-1)/2-res;
cout<<ans<<endl;

 ll n,m;
 cin>>n>>m;
 vector<int>arr(n);
 priority_queue<int,vector<int>,greater<int>>p;
 for(int i=0;i<n;i++){
     cin>>arr[i];
     p.push(arr[i]);
 }
vector<int>brr(m);
for(int i=0;i<m;i++){
    cin>>brr[i];
    
}
sort(arr.begin(),arr.end());
int j = 0;
ll tot = accumulate(arr.begin(),arr.end(),0ll);
while(m>0){
    tot=tot - p.top();
    p.pop();
    tot+=brr[j];
    p.push(brr[j]);
    j++;
    m--;
}
   
cout<<tot<<endl;
int n,k;
cin>>n>>k;


int n,k;
cin>>n>>k;
for(int i=1;2 * i <n + 1;i++)
cout<<n-i+1<<" "<<i<<" ";
if(n%2==1)
cout<<n/2 + 1;
cout<<endl;
    
    ll n;
    cin>>n;
    bool check = true;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
        for (int i=1;i<n; i++) { 
            if (arr[i-1] + 2 > arr[i] ) { 
                check = false; 
                break; 
            } 
        } 
        if(check==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        bool tough(ll n,ll k,ll a[]){
            vector<ll> arr(n,0);
            for(ll i=0;i<k;i++){
                arr[a[i]%n]++;
            }
            for(ll i=0;i<n;i++){
                if(arr[i]<=1)
                    return true;
                
            }
            return false;
        }
        void abc(){
            ll k;
            cin>>k;
            bool flag;
            ll arr[k];
            for(ll i=0;i<k;i++){
                cin>>arr[i];
            }
            sort(arr,arr+k);
            for(ll i=1;i<k;i++){
                if(arr[i-1]==arr[i]){
                    cout<<"NO"<<endl;
                   return ;
                }
            }
            for(ll i=2;i<k+1;i++){
                flag = tough(i,k,arr);
                if(flag==0){
                    cout<<"NO"<<endl;
                   return ;
                }
            }
            cout<<"YES"<<endl;
            return ;
            
        
        */
      //  void abc(){
            /*
        int n;
        cin>>n;
     if(n%2==0){
         cout<<"YES"<<endl;
         for(int i=0;i<n/2;i++){
             cout<<"1 -1";
         }
         cout<<endl;
     }
     else if(n==3){
         cout<<"NO"<<endl;
     }
     else{
         cout<<"YES"<<endl;
         int  cnt = n / 2;
         for(int i=0;i<n/2;i++){
             cout<<1-cnt<<" "<<cnt<<" ";
         }
         cout<<1-cnt<<endl;
     }
        
        ll n,m;
        cin>>n>>m;
        ll cnt = 0;
        ll ans = 0;
      //  vector<ll>arr(n+1);
        
        vector<ll>v;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=m;i<n;i++){
            if(arr[i]<0)
                p.push(arr[i]);
                cnt = cnt + arr[i];
            
            
            while(cnt<0){
                ll high = p.top();
                p.pop();
                high = -1*high ;
                cnt+= (2 * high);
                ans++;
            }
        }
        
         if(arr[m-1]<0 || arr[m-1]==0){
            cnt = arr[m-1];
        }
        else if(m!=1){
            cnt = -1*arr[m-1] ;
            ans++;
        }
        priority_queue<int>p2;
        for(int i=m-2;i>0;i--){
            if(arr[i] > 0)
                p2.push(arr[i]);
                cnt =cnt + arr[i];
            
            
            while(cnt>0){
            int high = p2.top();
            p2.pop();
            high = -1*high;
            cnt+= ( 2 * high);
            ans++;
        }
       
}
cout<<ans<<endl;

 ll n;
 cin>>n;
 ll arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
ll brr[n];
for(int i=0;i<n;i++){
    cin>>brr[i];
}
ll m;
ll crr[m];
for(int i=0;i<m;i++){
    cin>>crr[i];
}




    int k;
    cin>>k;
  
        cout<<k-1<<endl;
        */
        void thrill(){
        ll n,k;
        cin>>n>>k;
        ll ans = 0;
        ll cnt = 1;
 vector<ll>v(n);
 for(int i=0;i<n;i++){
     cin>>v[i];
 }
 for(auto itr:v){
     if(itr==cnt){
         ans++;
         cnt++;
     }
 }
 ll dif = n - ans;
 if(dif%k!=0)
    {
        cout<<dif/k +1<<endl;
    }
    else{
        cout<<dif/k<<endl;
    }
}

int main(){
	int tc;
	cin>>tc;
	  
	for(int i=0;i<tc;i++){
thrill();
    
	}
	  return 0;
}