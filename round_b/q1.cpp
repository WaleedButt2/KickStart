#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define sz size()
#define vt vector<double>
#define FOR(n) for (ll i = 0; i < n; i++)
#define FORJ(n) for (ll j = 0; j < n; j++)
#define RFOR(n) for (ll i = n - 1; i >= 0; i--)
void Print(vt A){
    FOR(A.sz) cout<<A[i]<<' ';
    cout<<endl;
}
int main(){
    string s;
    int t,size;
    cin>>t;
    FORJ(t){
        vt val;
        int mast=0;
        int start=0,end=0;
        cin>>size>>s;                      
        val.resize(size);
        FOR(size){
            if(i==0) val[i]=1;
            else if(s[i-1]<s[i])
                val[i]=val[i-1]+1;
            else val[i]=1;
        }
        cout<<"Case #"<<j+1<<": ";Print(val);
    }
}