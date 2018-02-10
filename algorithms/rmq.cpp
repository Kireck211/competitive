#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void sparse_table(vector<vector<int> >& st, const vector<int>& a, int n) {
	int i, j;
	// Initialize sparse table for the invervals of size 1
	for(i = 0; i < n; i++)
		st[i][0] = i;
	// computes values from smaller to bigger sizes in powers of two
	for(j = 1; 1 << j <= n; j++)
		for(i = 0; i + (1 << j) - 1 < n; i++)
			if (a[st[i][j - 1]] < a[st[i + (1 << (j-1))][j-1]])
				st[i][j] = st[i][j-1];
			else
				st[i][j] = st[i + (1 << (j-1))][j-1];
}

int query(const vector<vector<int> >& st, const vector<int>& a, int i, int j) {
	int k = (int)floor(log((double)j-i+1) / log(2.0));
	if (a[st[i][k]] <= a[st[j-(1<<k)+1][k]]) return st[i][k];
	else return st[j-(1<<k)+1][k];
}

int main() {
	int n,q,b,c;
	cin>>n;
	vector<vector<int> >st(n, vector<int>(floor(sqrt(n))+1,0));
	vector<int>a(n);
	for(int i = 0; i < n; i++) cin>>a[i];
	sparse_table(st, a, n);
	cin>>q;
	while(q--) {
		cin>>b>>c;
		cout<<a[query(st,a,b,c)]<<endl;
	}
	return 0;
}