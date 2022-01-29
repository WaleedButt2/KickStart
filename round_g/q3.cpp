#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define sz size()
#define vt vector<int>
#define FOR(n) for (int i = 1; i < n; i++)
#define FORV(n) for (int v = 0; v < n; v++)
#define FORJ(n) for (int j = 1; j < n; j++)
#define RFOR(n) for (int i = n - 1; i >= 0; i--)
using namespace std;
void Print(vector<int> v){
    FOR(v.sz) cout<<v[i]<<' '; 
    cout<<endl;
}
void Print(vector<vt> v){
    FOR(v.sz) {
    FORJ(v[i].sz) cout<<v[i][j]<<' '; 
    cout<<endl;
    }
    cout<<endl;
}
class point{
public:
int i;
int j;
};

// k is size of basket and n is no. of branches
int cal(vt val,int n,int k){
    vector<vt> hold(0,vector<int>(n,0));
    vector<vector<point>> positions(0,vector<point>(n,point()));
    FOR(n){
        FORJ(n){
            hold[i][j];
        }
    }
}
int main()
{
    int t, n; int answer;
    int k;
    //ifstream cin("read.txt");
    cin >> t;
    
    vector<int> val;
    for (int op = 0; op < t; op++){
        cin>>n>>k;
        val.resize(n);
        for(int i=0;i<n;i++)cin>>val[i];
        answer=cal(val,n,k);
    val.clear();
    if (answer == INT_MAX)
        answer = -1;
    cout << "Case #" << op + 1 << ": " << answer<< endl;
    }

}
/*
1
50 8596
6208 2774 140 25 95 206 167 203 409 282 141 388 219 41 273 100 106 290 61 44 1 189 405 8565 7087 5655 3237 15 259 
136 349 567 69 898 225 12 193 99 39 277 94 42 218 442 24 92 486 109 136 30
*/