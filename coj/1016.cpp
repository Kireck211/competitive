#include <iostream>
#include <cmath>
#include <cstring>
#include <limits>
#include <cstdlib>
#include <vector>
#include <iomanip>

using namespace std;
#define MAX 105

vector<pair<float,float> > graph(MAX);

float distance_two_points(pair<float, float> p1, pair<float, float> p2) {
	return sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
}

void extract_min(bool mst[], int n, int* next_node, float* distance) {
	float min_value = numeric_limits<float>::max();
	int index;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (i != j && !mst[i]) {
				float d = distance_two_points(graph[i], graph[j]);
				if (d < min_value) {
					index = i;
					min_value = d;
				}
			}
		}
	}
	*next_node = index;
	*distance = min_value;
}

float prim(int n) {
	bool mst[n];
	float mst_distance = 0;
	memset(mst, false, sizeof(mst));
	int n_mst=1;
	mst[0] = true;
	while(n_mst != n) {
		int next_node;
		float distance;
		extract_min(mst, n, &next_node, &distance);
		mst[next_node] = true;
		mst_distance += distance;
		n_mst++;
	}
	return mst_distance;
}

int main() {
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) {
		float x, y;
		cin>>x>>y;
		graph[i] = make_pair(x,y);
	}
	float distance = prim(n);
	cout<<fixed<<setprecision(2)<<distance<<endl;
	return 0;
}