#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define sz size()
#define vt vector<bool>
#define FOR(n) for(int i=0;i<n;i++)
#define FORJ(n) for(int j=0;j<n;j++)
#define RFOR(n) for(int i=n-1;i>=0;i--)
int main(){
    string s;
    int t,x,c;
    int q,j;
    cin>>t;
    int val;
    FOR(t){
        val=0;
        cin>>x>>c>>s;
        q=0;j=s.length()-1;
        while(q<j){
            if(s[q]!=s[j]) val++;
            q++;j--;
        }
        cout<<"Case #"<<i+1<<": "<<abs(val-c)<<endl;
    }
}