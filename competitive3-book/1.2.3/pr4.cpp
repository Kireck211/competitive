#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	set<int> s;
	set<int>::iterator it;
	while(n--) {
		int val;
		cin>>val;
		s.insert(val);
	}
	int length = s.size();
	for(auto value : s) {
		cout<<value<<" ";
	}
	cout<<"\n";

	return 0;
}