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
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}
 
// Function to convert decimal to fraction
void decimalToFraction(double number,int &numero,int &denmomi)
{
    // Fetch integral value of the decimal
    double intVal = floor(number);
 
    // Fetch fractional part of the decimal
    double fVal = number - intVal;
 
    // Consider precision value to
    // convert fractional part to
    // integral equivalent
    const long pVal = 1000000000;
 
    // Calculate GCD of integral
    // equivalent of fractional
    // part and precision value
    long long gcdVal
        = gcd(round(fVal * pVal), pVal);
 
    // Calculate num and deno
    long long num
        = round(fVal * pVal) / gcdVal;
    long long deno = pVal / gcdVal;
 
    // Print the fraction
    denmomi=deno;
    numero= (intVal * deno) + num;
}
class cock{
public:
    int papa;
    double A;
    double B;
cock(){}
cock(int papa,double A,double B){
    this->papa=papa;
    A=0;B=0;
    }
};
void Print(vt cost){
    FOR(cost.sz) cout<<cost[i]<<' ';
    cout<<endl;
}
int main(){
    int t,q,n;
    int q1,q2;
    cin>>t;
    double a;
    FORJ(t){
    vector<cock> prob;
    vt cost;
    cin>>n>>q>>a;
    a/=1000000;
    prob.pb(cock(-1,0,0));
    cost.pb(a);
    FOR(n-1){
        cock temp;
        cin>>temp.papa>>temp.A>>temp.B;
        a=(temp.A/1000000)*(temp.B/1000000);
        if(temp.papa!=1)cost.pb(cost[temp.papa-1]+a);
        else cost.pb(temp.A/1000000*cost[0]);
    }
    Print(cost);
    FOR(q){
        cin>>q1>>q2;
        a=cost[q1-1]*cost[q2-1];
        int p,q;
        decimalToFraction(a,p,q);
        cout<<p<<'/'<<q<<endl;
        cout<<(p%(1000000000+7))/q<<endl;
    }
    }
}