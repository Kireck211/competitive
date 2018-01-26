#include <iostream>
using namespace std;

int disjoints = 0;

int find(int parent[], int i)
{
	return (parent[i] == i? i : parent[i] = find(parent, parent[i]));
}


void _union(int parent[], int i, int j)
{
	int x = find(parent, i);
	int y = find(parent, j);

	if(x != y)
		disjoints--;

	parent[y] = x;
}

int main()
{
	int t, n, m, a, b;
	int parent[10000];

	cin>>t;

	while(t--)
	{
		cin>>n>>m;
		disjoints = n;

		for(int i = 0; i <= n; i++)
			parent[i] = i;

		for(int i = 0; i < m; i++)
		{
			cin>>a>>b;
			_union(parent, a, b);
		}

		cout<<((disjoints*(disjoints-1))>>1)<<endl;
	}
	return 0;
}