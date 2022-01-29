#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define vt vector<ll>
#define FOR(n) for(ll i=0;i<n;i++)
#define RFOR(n) for(ll i=n-1;i>=0;i--)
#define FOR_1(j,n) for(ll j=0;j<n;j++)
ll left_right(string s,vt one){
    ll sum=0;FOR(one.size()) sum+=one[i]; 
    return sum;
}
void print(vt one){
    FOR(one.size()){
        cout<<one[i]<< ' ';
    }
    cout<<endl;
}
int main(){
    string s;
    ll t,x;
    cin>>t;
    vt one;
    FOR(t){
        string s;
        cin>>x>>s;
        ll far=5000000;
        FOR(x){
            if(s[i]=='1') {one.pb(0);far=1;}
            else{
                one.pb(far);far++;
            } 
        }
        RFOR(x){
            if(s[i]=='1') {one[i]=0;far=1;}
            else{
                if(one[i]>far)
                one[i]=far;far++;
            } 
        }
       // exit(0);
       // print(one);
        cout<<"Case #"<<i+1<<": "<<left_right(s,one)<<endl;
        one.clear();one.shrink_to_fit();
    }
}