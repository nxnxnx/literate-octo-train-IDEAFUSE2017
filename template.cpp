#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ULL;
typedef long long LL;
typedef pair<int,int> pii;
typedef pair<pii,pii> ppi;
typedef pair<LL,LL> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
typedef vector<string> vstr;
typedef vector<char> vc;
typedef map <int,int> mii;

int gcd(int  a, int b)
{
    if(b == 0)return a;
    else return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return (a*(b/gcd(a,b)));
}

/* READ EOF
 *
 * while(!(feof(stdin))){
		string a; cin>>a;cout<<a<<endl;
	}

 *
 * */

/*READ STRING WITH SPACES
   string arr;
   string t;
   getline(cin,t);
   istringstream iss(t);
   while(iss>>arr){

   }
 * */


int main(){
	while(!(feof(stdin))){
		string a; cin>>a;cout<<a<<endl;
	}
	return 0;
}//done
