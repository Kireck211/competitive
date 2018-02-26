#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<int> nums, bool[] c, int n, int k) {
	if (k == n)
		return;
	for (int i = 0; i < n; i++) {
		c[i] = true;
		backtrack(nums, c, n, k + 1);
	}
}

int main() {
	int n;
	while(cin>>n) {
		int num = n;
		vector<int> nums;
		bool c[n];
		for(int i = 0; i < n; i++)
			c[i] = false;
		while(num--) {
			int a;
			cin>>a;
			nums.push_back(a);
		}
		backtrack(nums, c, n, 0);
	}

	return 0;
}