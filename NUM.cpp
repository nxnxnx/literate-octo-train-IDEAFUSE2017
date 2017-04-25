//haven't submitted yet. Results Unknown
//
#include <bits/stdc++.h>
using namespace std;

int main() {

	int arr[1002];
	int n; scanf("%d",&n);

	for (int i=1;i<=n;i++){
		int inp; scanf("%d",&inp);
		arr[i]=inp;
	}
	int sum=0;
	int score=0;
	int loop=1;
	int turn=0;
	int x=n;
	while(sum!=x-1){
		if (arr[loop]>arr[n] 
				&& arr[loop] > (arr[loop]+arr[loop+1]) 
				&& arr[loop]>(arr[n]+arr[n-1])){
			//cout<<"a" << endl;
			if ((turn%2)==0)
				score+=arr[loop];
			arr[loop]=0;
			sum++; loop++;
			/*for (int i=1;i<=x;i++)
			  cout << arr[i] << " ";
			  cout << endl << "Score = " << score << endl;*/
			turn++;
			continue;
		}
		if (arr[n] > arr[loop] &&
				arr[n] > (arr[loop]+arr[loop+1]) &&
				arr[n] > (arr[n] + arr[n-1])){
			//cout<<"b" << endl;
			if ((turn%2)==0)
				score+=arr[n];
			arr[n]=0;
			n-=1; sum++;
			/*for (int i=1;i<=x;i++)
			  cout << arr[i] << " ";
			  cout << endl<< "Score = " << score << endl;*/
			turn++;
			continue;
		}
		if (arr[loop]+arr[loop+1] > arr[n] &&
				(arr[loop] + arr[loop+1]) > arr[n]+arr[n-1]){
			//cout<< "C" << endl;
			if ((turn%2)==0)
				score+=arr[loop]+arr[loop+1];
			arr[loop]=0; arr[loop+1]=0;
			sum+=2;	loop+=2;
			/*for (int i=1;i<=x;i++)
			  cout << arr[i] << " ";
			  cout << endl << "Score = " << score << endl;*/
			turn++;
			continue;
		}
		if ( (arr[n]+arr[n-1]) > arr[loop] &&
				(arr[n] + arr[n-1]) > (arr[loop]+arr[loop+1])){
			//cout<<"D" << endl;
			if ((turn%2)==0)
				score+=arr[n] + arr[n-1];
			arr[n]=0; arr[n-1]=0;
			n-=2; sum+=2;
			/*for (int i=1;i<=x;i++)
			  cout << arr[i] << " ";
			  cout << endl << "Score = " << score << endl;*/
			turn++;
			continue;
		}	
	}
	cout << score << endl;
	return 0;
}
