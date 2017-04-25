#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int r,c,b,x;
	cin >> r >> c >> b;
	for (int i=1;i<=r;i++){
		cin >> x;
		if ((b-x)<0){
			for (int j=1;j<=abs(b-x);j++)
				cout << "right" << endl;
			cout << "forward" << endl;
		}else if ((b-x)>0){
			for (int j=1;j<=(b-x);j++)
				cout << "left" << endl;
			cout << "forward" << endl;
		} else {
			cout << "forward" << endl;
		}
	}
	cout << "finish" << endl;
	return 0;
}
