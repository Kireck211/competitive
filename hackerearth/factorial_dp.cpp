#include <iostream>

using namespace std;

#define MAX 100010
#define P 1000000007

long long fact[MAX];

long long factorial(int n) {
	if (fact[n])
		return fact[n];
	if (n <= 1)
		return fact[n] = 1;
	return fact[n] = ((n * fact[n-1]) % P);
}

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		cout<<factorial(n)<<endl;
	}

	return 0;
}