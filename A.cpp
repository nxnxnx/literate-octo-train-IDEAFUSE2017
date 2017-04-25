#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	int a[1000000]; 
	int b[1000000];
	int r[1000000];
	int result; 
	cin >> t;
	for (int i=1;i<=t;i++){
		cin >> n;
		result = 0;
		for (int j=1;j<=n;j++){
			cin >> a[j] >> b[j];
			if (j==1){
				r[j]=a[j];
			} else {
				r[j]=a[j]-(a[j-1]+b[j-1]);
			}
			result=result+r[j];
		}
		cout << "Case #" << i << ": " << result << endl;
	}
	return 0;
}
