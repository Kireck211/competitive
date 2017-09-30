#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cases, i = 1;
	cin>>cases;
	while (cases--) {
		int val;
		vector<int> v;
		for (int j = 0; j < 3; j++) {
			cin>>val;
			v.push_back(val);
		}
		sort(v.begin(), v.end());
		cout<<"Case "<<i++<<": "<<v[1]<<"\n";
	}
	return 0;
}