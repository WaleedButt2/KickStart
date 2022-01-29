#include <bits/stdc++.h>
using namespace std;
bool work(long long d,long long c,long long m,long long n,string s,string x){
    int i=0;
  //  cout<<endl;
    //if(s.find('D',i+1)!=string::npos) cout<<"as"<<endl;
           // cout<<d<<' '<<c<<endl;
    for(int i=0;i<n;i++){
        if(s.find('D',i)==string::npos) return true;
        if((s[i]=='C'&&c<=0)||d<=0) return false;
        if(s[i]=='C') c--;
        if(s[i]=='D') {d--;c+=m;} 
      //  cout<<d<<' '<<c<<endl;
    }
   // cout<<endl;
    return true;
}
int main(){
    long long d,n,c,m,op;
    //dog eats dog food bring m extra cat food
    string s,x;
    ifstream File("read.txt");
    File>>op;
    for(int i=0;i<op;i++){
    File>>n>>d>>c>>m>>x;s=x;
    if(work(d,c,m,n,s,x)) cout<<"Case #"<<i+1<<": YES\n";
    else cout<<"Case #"<<i+1<<": NO\n";
    } 
  }