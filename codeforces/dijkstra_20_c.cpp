#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <map>

using namespace std;

class compare
{
public:
	bool operator() (pair<int, int> a, pair<int, int> b) {
		return a.second > b.second;
	}
}


int main() {
	vector<vector<pair<int,int> > > graph(MAX);
	int vertex, edges;
	cin>>vertex>>edges;
	for(int i = 0; i < edges; i++) {
		int u, v, w;
		cin>>u>>v>>w;
		if (graph[u].empty()) {
			vector<pair<int,int>> v(1, make_pair(v,w));
			graph[u].push_back(v);
		} else {
			graph[u][]
		}
	}
	return 0;
}