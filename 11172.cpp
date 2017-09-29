#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	while(n--) {
		int l, r;
		cin>>l>>r;
		if (l < r)
			cout<<"<\n";
		else if(l > r)
			cout<<">\n";
		else
			cout<<"=\n";
	}
}