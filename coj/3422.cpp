#include <iostream>

using namespace std;
#define MAX 1001

int graph[MAX][MAX];

int main() {
	int cases;
	cin>>cases;
	while(cases--) {
		int vertex, edges;
		cin>>vertex>>edges;
		for(int i = 0; i < edges; i++) {
			int u, v;
			cin>>u>>v;
		}
		cout<<vertex-1<<endl;
	}
	return 0;
}