#include <iostream>
#include <vector>

using namespace std;

void print_subsets(vector<int>& visit, const vector<int>& a,int level, int& n) {
	if (n == level) {
		cout<<"{ ";
		int i = 0;
		for(; i < visit.size(); i++)
			if (visit[i])
				cout<<a[i]<<", ";
		cout<<" }\n";
	} else {
		visit[level] = 1;
		print_subsets(visit, a, level+1, n);
		visit[level] = 0;
		print_subsets(visit, a, level+1, n);
	}
}

int main() {
	int n;
	while(cin>>n) {
		vector<int> visit;
		vector<int> a;
		for(int i = 0; i < n; i++) {
			int value;
			cin>>value;
			a.push_back(value);
			visit.push_back(0);
		}
		print_subsets(visit, a, 0, n);
	}
	return 0;
}