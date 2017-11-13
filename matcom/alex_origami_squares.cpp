#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
	int h, w;
	cin>>h>>w;
	int min_v = min(h,w);
	int max_v = max(h,w);
	float max_l = 0;
	float line = max_v / 3.0;
	float stacked_max = max_v / 2.0;
	float stacked_min = min_v / 2.0;
	/*cout<<"line:"<<line<<endl;
	cout<<"stacked_max:"<<stacked_max<<endl;
	cout<<"stacked_min:"<<stacked_min<<endl;*/
	if (line <= min_v && max_l < line)
		max_l = line;
	if (stacked_max*2 < min_v && max_l < stacked_max)
		max_l = stacked_max;
	if (stacked_min*2 < max_v && max_l < stacked_min)
		max_l = stacked_min;
	cout<<fixed<<setprecision(3)<<max_l<<endl;
	return 0;
}