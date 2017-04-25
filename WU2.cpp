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

int main(){
	int n; cin>>n;
	char x[1001];
	for (int a=0;n>a;++a){
		int inp; cin>>inp;
		int param=0;
		while (inp>0){
			if (inp%26==0) x[param]=='Z';
			else {
				x[param] =char((inp%26)+64);
			}
			cout<<x[param]<<endl;
			inp/=26;

			param++;
		}

	/*	cout<<"Case #"<<a+1<<": ";
		for (int b=param-1;b>=0;--b){
			cout<<x[b];
		}*/
		cout<<endl;
	}
	return 0;
}//done
