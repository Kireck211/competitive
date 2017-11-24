#include <iostream>
#include <vector>
using namespace std;

vector<unsigned int> v = {1,2};
vector<unsigned int> v1 = {1};

void getNFibo(int n) {
	while(v.size()< n + 3) {
		int length = v.size();
		v.push_back(v[length-1] + v[length-2]);
	}
	while(v1.size() < n + 2)
		v1.push_back(v[v1.size()-1]+v1[v1.size() - 1]);
}



int main() {
	int n;

	while(cin>>n, n>-1) {
		int m, t;
		if (v1.size() < n + 2)
			getNFibo(n);
		cout<<v1[n-1]<<" "<<v1[n]<<endl;
	}
	return 0;
}