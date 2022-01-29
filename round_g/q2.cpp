#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x1,y1,x2,y2,t,k;
    cin>>t;
    vector<long long> x,y;
   // string s;cin>>s;cout<<s<<endl;exit(0);
    for(int i=0;i<t;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>x1>>y1>>x2>>y2;
            x.push_back(x1);x.push_back(x2);
            y.push_back(y1);y.push_back(y2);
            sort(x.begin(),x.end());sort(y.begin(),y.end());
        }
       // for(int i=0;i<y.size();i++) cout<<y[i]<<' ';
      //  cout<<endl;
        cout<<"Case #"<<i+1<<": "<<x[x.size()/2-1]<<' '<<y[y.size()/2-1]<<endl; 
        x.clear();y.clear();
    }
   
}