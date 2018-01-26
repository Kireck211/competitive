#include <iostream>
using namespace std;

#define MAX 10000

int parents[MAX];
int n_sets;

int _find(int i) {
	return ((parents[i] == i) ? i : parents[i] = _find(parents[i]));
}

void _union_find(int u, int v) {
	int pu = _find(u);
	int pv = _find(v);
	if (pu != pv) {
		n_sets--;
		parents[pu] = pv;
	}
}

int main() {
	int cases;
	cin>>cases;
	while(cases--) {
		int n,m;
		cin>>n>>m;
		n_sets = n;
		for (int i = 0; i < n; i++)
			parents[i] = i;
		while(m--) {
			int u, v;
			cin>>u>>v;
			_union_find(u-1, v-1);
		}
		long result = ((n_sets-1)*n_sets)/2;
		cout<<result<<endl;
	}
}