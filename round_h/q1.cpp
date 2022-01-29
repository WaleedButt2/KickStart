#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define vt vector<int>
#define FOR(n) for(int i=0;i<n;i++)
#define RFOR(n) for(int i=n-1;i>=0;i--)
int find_closest(int val,string f){
    int Rmin=0;int Lmin=0;
    int Tmin=124;
    int temp=val;int qq=val;
    for(int i=0;i<f.length();i++){
        val=qq;Rmin=0;Lmin=0;temp=qq;
      //  cout<<val<<' '<<(int)f[i]<<endl;
        //go forward
        while(val!=f[i]){
            val++;Rmin++;
            if(val==123) val=97;
        }
        //go back
        while(temp!=f[i]){
            temp--;Lmin++;
            if(temp==96) temp=122;
        }
        val=min(Lmin,Rmin);
        Tmin=min(Tmin,val);
   // cout<<endl<<Tmin<<endl;
    }
    return Tmin;
}
int main(){
    string s;
    string f;
    vt count(123,0);
    int t;cin>>t;int sum;
    for(int a=0;a<t;a++){
    count.clear();count.shrink_to_fit();
    count.resize(123);
    sum=0;
    cin>>s;
    cin>>f;
    FOR(s.length()){
        count[s[i]]++;
    }
    for(int i=97;i<123;i++){
        if(count[i]!=0){
            sum+=count[i]*find_closest(i,f);
        }
    }
    cout<<"Case #"<<a+1<<": "<<sum<<endl;
    }    
    return 0;
}