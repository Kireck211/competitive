#include <iostream>
#include <cstring>

using namespace std;
#define MAX 101

int graph[MAX][MAX];
bool visited[MAX];
int steps;

void dfs(int from, int to, int level) {
	visited[from] = true;
	if (from == to) {
		steps += level;
		return;
	}
	for(int i = 0; i < MAX; i++)
		if (graph[from][i] && visited[i] == false)
			dfs(i, to, level+1);
}

int main() {
	int n, k;
	cin>>n>>k;
	for(int i = 0; i < k; i++) {
		int u, v;
		cin>>u>>v;
		graph[u][v] = 1;
	}
	int c, f;
	cin>>c>>f;
	memset(visited,false,sizeof(visited));
	dfs(0, c, 0);
	memset(visited,false,sizeof(visited));
	dfs(0, f, 0);
	cout<<(steps)<<endl;

	return 0;
}