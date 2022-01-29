#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define sz size()
#define vt vector<ll>
#define FOR(n) for (ll i = 0; i < n; i++)
#define FORJ(n) for (ll j = 0; j < n; j++)
#define RFOR(n) for (ll i = n - 1; i >= 0; i--)
int main(){  
    int t;
    cin>>t;   
     ll x,check, k,left,right; 
    
    string a;
    FORJ(t){
        cin>>x>>a;
        vt s;
        set<ll> holder[10];
        vector<bool> cock(x,true);
        FOR(x) {s.pb(a[i]-48);}
        ll prev[x];ll next[x];
        FOR(x){
            prev[i]=i-1;
            next[i]=i+1;
        }
        FOR(x-1)
            if((s[i]+1)%10==s[i+1])
                holder[s[i]].insert(i);
        while(true){
            check=0;
            FOR(10){
                while(!holder[i].empty()){
                    k=*holder[i].begin();
                    holder[i].erase(holder[i].begin());
                    left=prev[k];
                    right=next[k];
                    cock[right]=false;
                    // 0 1 2 3
                    if(next[right]<x){
                        if((s[right]+1)%10==s[next[right]])  holder[s[right]].erase(right);
                        prev[next[right]]=k;
                        next[k]=next[right];
                    }
                    else next[k]=next[right];
                    if(left>=0){
                        if((s[left]+1)%10==s[k]) holder[s[left]].erase(left);
                    }
                    s[k]=(i+2)%10;
                    if(next[k]<x){
                        if((s[k]+1)%10==s[next[k]])  {check++;holder[s[k]].insert(k);}
                    }
                    if(left>=0){
                        if((s[left]+1)%10==(s[k]))  {check++;holder[s[left]].insert(left);}
                    }
                }
            }
            if(check==0) break;
        }
        cout<<"Case #"<<j+1<<": ";
        FOR(x) if(cock[i]) cout<<s[i];
        cout<<endl;        
    }
}