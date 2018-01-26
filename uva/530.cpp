#include <iostream>

using namespace std;

int main() {
	long long n, k;
	while(cin>>n>>k, n || k) {
		long long ans = 1;
		k = (k<n-k?k:n-k);
		for(int i = 0; i < k; i++) {
			ans*=n-i;
			ans/=i+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}