#include <iostream>
#include <utility>
#include <map>

using namespace std;
typedef pair<int,int> ii;
typedef pair<ii, int> iii;

vector<iii> v;
int myIndex = 1;

sruct myClass {
	bool operator() (iii p1, iii p2) {
		if (p1.first.first == p2.first.first)
			return p1.first.second > p2.first.second;
		return p1.first.first > p2.first.first;
	}
};

int main() {
	int n, m;
	cin>>n>>m;
	for(int i = 1; i <= n; i++) {
		ii p = make_pair(0,0);
		iii pp = make_pair(p, i);
		v.push_back(pp);
		m[i] = i;
	}
	for(int i = 0; i < m; i++) {
		int team, time;
		cin>>team>>time;
		v[m[team]].first.first++;
		v[m[team]].first.second += time;
		heapifyUp(m[team]);
	}
	return 0;
}