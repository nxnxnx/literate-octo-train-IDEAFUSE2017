#include <bits/stdc++.h>
using namespace std;

int main() {

	int arr[1002];
	int n; scanf("%d",&n);

	for (int i=0;n>i;++i){
		int inp; scanf("%d",&inp);
		arr[i]=inp;
	}
	int sum=0;
	int score=0;
	int loop=0;
	int x=n;
	while(sum!=x-1){
		cout<<sum<<endl;
		if (arr[loop]>arr[n] 
				&& arr[loop] > (arr[loop]+arr[loop+1]) 
				&& arr[loop]>(arr[n]+arr[n-1])){
			cout<<"a";
			sum++;
			score+=arr[loop];
			loop++;
			arr[loop]=0;
		}
		if (arr[n] > arr[loop] &&
				arr[n] > (arr[loop]+arr[loop+1]) &&
				arr[n] > (arr[n] + arr[n-1])){
			score+=arr[n];
			cout<<"b";
			n-=1;
			sum++;
			arr[n]=0;
		}
		if (arr[loop]+arr[loop+1] > arr[n] &&
				(arr[loop] + arr[loop+1]) > arr[n]+arr[n-1]){
			score+=arr[loop]+arr[loop+1];
			sum+=2;
			cout<<"C";
			loop+=2;
			arr[loop]=0;
			arr[loop+1]=0;
		}
		if ( (arr[n]+arr[n-1]) > arr[loop] &&
				(arr[n] + arr[n-1]) > (arr[loop]+arr[loop+1])){
			n-=2;
			cout<<"D";
			sum+=2;
			score+=arr[n] + arr[n-1];
			arr[n]=0; arr[n-1]=0;
		}
	}
	return 0;
}
