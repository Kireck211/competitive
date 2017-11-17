#include <iostream>
#include <algorithm>

using namespace std;

void print(int r) {
	if (r >= 10) 
		cout<<(char)((r%10)+'A');
	else
		cout<<r;
}

void f(int n, int b) {
	if (n / b == 0) {
		print(n%b);
		return;
	}
	f(n/b,b);
	print(n%b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--) {
		int n,b;
		cin>>n>>b;
		f(n,b);
		cout<<endl;
	}
	return 0;
}