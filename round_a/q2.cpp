#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define l long
#define sz size()
#define vt vector<int>
#define FOR(n) for(int i=0;i<n;i++)
#define FORJ(n) for(int j=0;j<n;j++)
#define RFOR(n) for(int i=n-1;i>=0;i--)
bool valid(int i , int j,vector<vector<bool>> visited,vector<vt> x){
    return (i>=0&&j>=0&&i<visited.sz&&j<visited[i].sz&&!visited[i][j]&&x[i][j]==0);
}
int bastards_son(vector<vt> x, int i , int j,vector<vector<bool>> visited,int consec_sum,int current_sum,char prev_move,char current_move,bool flag,int sum){
    if(visited[i][j]) return 0;
    //no of censecutive moves
    if(!flag)current_sum++;
    else consec_sum++;
    cout<<prev_move<<' '<<current_sum<<' '<<consec_sum<<endl;
    if(prev_move!=current_move&&flag) return 0;
    if(prev_move!=current_move) {prev_move=current_move;flag=true;}
    if(consec_sum*2==current_sum||current_sum*2==consec_sum) {cout<<"yahooo\n";sum++;return 1;}
    //go up
    if(valid(i-1,j,visited,x)) bastards_son(x,i,j,visited,consec_sum,current_sum,prev_move,'u',flag,sum);
    //go down
    if(valid(i+1,j,visited,x)) bastards_son(x,i,j,visited,consec_sum,current_sum,prev_move,'d',flag,sum);
    //go left
    if(valid(i,j-1,visited,x)) bastards_son(x,i,j,visited,consec_sum,current_sum,prev_move,'l',flag,sum);
    //go right
    if(valid(i,j+1,visited,x)) bastards_son(x,i,j,visited,consec_sum,current_sum,prev_move,'r',flag,sum);
    return sum;
}
int bastard(vector<vt> x, vector<vector<bool>> visited){
    //find a one and mark it visited
    bool flag=false;
    int sum=0;
    FOR(x.sz){
        FORJ(x[i].sz){
            if(x[i][j]==1&&!visited[i][j]){
                sum+=bastards_son(x,i,j,visited,0,0,'s','s',false,0);
            }
        }
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    int c,r;
    vector<vt>x;
    vector<vector <bool>> visited;
    for(int a=0;a<t;a++){
        cin>>c>>r;
        x.resize(r,vt(c));
        visited.resize(r,vector<bool>(c,false));
        FOR(r){
            FORJ(c){
                cin>>x[i][j];
            }
        }
        cout<<"Case #"<<a+1<<": "<<bastard(x,visited)<<endl;
    }
}
/*
1
4 3
1 0 0
1 0 1
1 0 0
1 1 0
*/