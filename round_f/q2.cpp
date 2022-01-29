#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define vt vector<ll>
#define FOR(n) for(ll i=0;i<n;i++)
#define RFOR(n) for(ll i=n-1;i>=0;i--)
#define JFOR(n) for(ll j=0;j<n;j++)
void print(vector<vt> one){
    FOR(one.size()){
    JFOR(one[i].size()){
        if(one[i][j]!=0)cout<<one[i][j]<< " ";
    }
    cout<<endl;
    }
}
void solve(int d,ll n,int k,int s,int e,ll answer,int temp,ll truth,int a,fstream& cin){
        temp=0;
        answer=0;
        int x=0;
        cin>>d>>n>>k;
        vector<vt> sum( d ,vt (d, 0));
        //cout<<n<<endl;
        FOR(n){
            cin>>temp>>s>>e;
            for(ll j=s;j<e;j++){
            //cout<<sum[j][i]<<' ';
                sum[j][i]+=temp;
            }
           // cout<<endl;
        } //print(sum);return;
       
        FOR(d)sort(sum[i].rbegin(), sum[i].rend());
        for(int i=0;i<d;i++){
            truth=0;
            for(int j=0;j<k;j++){
                truth+=sum[i][j];
            }
            answer=max(truth,answer);
        }
        cout<<"Case #"<<a+1<<": "<<answer<<endl;
}
int main(){
    int d,n,k,s,e,t;        fstream cin("q2.txt");
    cin>>t;
    ll answer=0,temp,truth=0;
    FOR(t){
        solve(d,n,k,s,e,answer,temp,truth,i,cin);
        if(i==2) return 0;
    }
}
/*
1
10 4 2
800 2 8
1500 6 9
200 4 7
400 3 5
*/