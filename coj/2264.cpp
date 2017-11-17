#include <iostream>

using namespace std;

int main() {
	long long n,m,x,y,c;
	cin>>n>>m;
	cin>>x>>y>>c;
	while(c--) {
		char coord;
		long long q;
		cin>>coord>>q;
		if (coord == 'N')
			y+=q;
		else if (coord == 'S')
			y-=q;
		else if (coord == 'E')
			x-=q;
		else if (coord == 'W')
			x+=q;
	}
	cout<<x<<" "<<y<<endl;
	return 0;
}