#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, b, h, w;
	while(cin>>n>>b>>h>>w) {
		vector<int>weeks(w, 10000000);
		int price;
		int beds;
		cout<<"w:"<<w<<"\n";
		while (h--) {
			cin>>price;
			for (int i = 0; i < w; i++) {
				cin>>beds;
				cout<<"beds:"<<beds<<"\n";
				int week_price = n * price;
				if (beds >= n && weeks[i] > week_price && week_price > 0) {
					weeks[i] = week_price;
					cout<<"i:"<<i<<"\n";
				}
			}
		}
		int sum = 0;
		for(auto v: weeks) {
			if (v == -1) {
				cout<<"stay home\n";
				break;
			}
			sum += v;
		}
		cout<<sum<<"\n";
	}
	return 0;
}