#include <iostream>
#include <cmath>
#include <algorithm>

const double pi = std::acos(-1);

double area (int a, int b, double rad) {
	return a * b * sin(rad) / 2;
}

using namespace std;

int main() {
	int n;
	while(cin>>n) {
		vector<int> v;
		while(n--) {
			int val;
			cin>>val;
			v.push_back(val);
		}
		sort(v.begin(), b.end());
		double sum = 0;
		int length = v.size();
		for (int i = 1; i < v; i++) {
			sum += v[i]
		}
	}
	return 0;
}