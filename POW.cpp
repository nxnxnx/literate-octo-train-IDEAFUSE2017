#include <iostream>
#include <iomanip>

long long power4(long long x, long long* memoize);

using namespace std;
int main()
{
	long long t,x;
	double n;
	cin >> t;

	for (long long i=1;i<=t;i++){
		cin >> n >> x;

		long long* memoize = new long long[x+1];
		memoize[0] = 1;
		memoize[1] = 4;

		for (long long j = 2; j <= x; j++)
			memoize[j] = -1;

		n=n/power4(x, memoize);
		long long intpart = (int)n;
		double dec = n - intpart;
		cout<<dec<<endl;
	}

	return 0;
}

long long power4(long long x, long long* memoize)
{
	if (memoize[x] == -1)
	{
		memoize[x] = power4(x - 1, memoize) * 4 ;
	//	cout << setprecision(30) << memoize[x] << " " << x << endl;
	}

	return memoize[x];
}
