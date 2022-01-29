#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define sz size()
#define vt vector<int>
#define FOR(n) for (ll i = 0; i < n; i++)
#define FORJ(n) for (ll j = 0; j < n; j++)
#define RFOR(n) for (ll i = n - 1; i >= 0; i--)
void Print(vt A){
    FOR(A.sz) cout<<A[i]<<' ';
    cout<<endl;
}
int solve(vt A){
    int masti=-1;
    int consec=1;
    vt diff(A.sz-1);
    bool flag=true;
    FOR(A.sz-1) diff[i]=A[i]-A[i+1];
    FOR(diff.sz){
        if(diff[i]==diff[i+1]) consec++;
        else{
            //break
            if(flag&&i+2==diff.sz) consec++;
            else if(flag&&i+3==diff.sz&&diff[i]==(diff[i+1]+diff[i+2])/2){
                consec+=2;
                masti=max(consec,masti);
                break;
            }
            else if(flag&&(diff[i]==(diff[i+1]+diff[i+2])/2)&&diff[i+3]==diff[i]){
                consec+=3;
                flag=false;
                i+=3;
            }
            else if(flag&&(diff[i]==(diff[i+1]+diff[i+2])/2)&&diff[i+3]!=diff[i]){
                consec+=3;
                masti=max(masti,consec);
                consec=1;flag=true;
            }
            else{
                masti=max(masti,consec);
                consec=1;flag=true;  
            }
        }
        masti=max(masti,consec);
    }masti=max(masti,consec);
    return masti;
}
//10 8 23 4 2 0
// 2-15 19 19 19
int main(){
    string s;
    int t,n;
    int ans;
    cin>>t;
    FORJ(t){
        cin>>n;
        vt A(n);
        FOR(n)cin>>A[i];
        if(A.sz==2) ans=2;
        else{
            ans=solve(A);
            //Print(diff);
        }
        cout<<"Case #"<<j+1<<": "<<ans<<endl;
    }
}
//0 1 -1 0 0 1 -1 -1