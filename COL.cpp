#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int main(){
	int t,n;
	long acc;
	long a[21];
	long b[21];
	long r[21];
	long result; 
	cin >> t;
	for (int i=1;i<=t;i++){
		cin >> n;
		result = 0;
		acc=0;
		for (int j=1;j<=n;j++){
			cin >> a[j] >> b[j];
			if (j==1)
				result = a[j];
			else {
				acc = acc+a[j-1]+b[j-1];
				if ((acc-a[j])<=0){
					result = result + abs(acc-a[j]);
					acc = 0;
				}
				else
					acc=acc-a[j];
			}
		}
		cout << "Case #" << i << ": " << result << endl;
	}
	return 0;
