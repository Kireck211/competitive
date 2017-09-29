#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cases;
	cin>>cases;
	while(cases!=0) {
		int n, m;
		cin>>n>>m;
		while(cases--) {
			int x, y;
			cin>>x>>y;

			string result = "";
			if (y == m || x == n) {
				cout<<"divisa\n";
				continue;
			}
			if (y < m) {
				result += "S";
			}
			else if (y > m) { // m > 0
				result += "N";
			}
			if (x < n) {
				result += "O\n";
			}
			else if (x>n){// n > 0
				result += "E\n";
			}
			cout<<result;
		}

		cin>>cases;
	}
	return 0;
}