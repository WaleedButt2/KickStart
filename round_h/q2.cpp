#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define vt vector<bool>
#define FOR(n) for(int i=0;i<n;i++)
#define FORJ(n) for(int j=0;j<n;j++)
#define RFOR(n) for(int i=n-1;i>=0;i--)
void Populate(string s, vt &y,vt &b,vt &r){
    FOR(s.length()){
        if(s[i]=='U'){ 
            continue;
        }
        else if(s[i]=='R'){
            r[i]=true;
        }
        else if(s[i]=='Y'){
            y[i]=true;
        }
        else if(s[i]=='B'){
            b[i]=true;
        }
        else if(s[i]=='O'){
            r[i]=y[i]=true;
        }
        else if(s[i]=='P'){
            r[i]=b[i]=true;
        }
        else if(s[i]=='G'){
            y[i]=b[i]=true;
        }
        else if(s[i]=='A'){
            y[i]=b[i]=r[i]=true;
        }
    }
}
int Consecutive_Truths(vt y){
    int consec=0;bool going=false;
    FOR(y.size()){
        if(y[i]) going=true;
        if(!y[i]&&going){
            consec++;going=false;
        }
    }
    if(going) consec++;
    return consec;
}
void print(vt x){
    FOR(x.size()){
        if(x[i]) cout<<1<<' ';
        else cout<<0<<' ';
    }
    cout<<endl;
}
int main(){
    string s;
    vt y,r,b;
    int t,n,sum=0;
    cin>>t;
    FOR(t){
        y.clear();y.shrink_to_fit();
        r.clear();r.shrink_to_fit();
        b.clear();b.shrink_to_fit();
        cin>>n>>s;
        y.resize(n,false);r.resize(n,false);b.resize(n,false);
        Populate(s,y,b,r);
       // print(y);print(b);print(r);
        sum=Consecutive_Truths(y)+Consecutive_Truths(r)+Consecutive_Truths(b);
        cout<<"Case #"<<i+1<<": "<<sum<<endl;
    }
}