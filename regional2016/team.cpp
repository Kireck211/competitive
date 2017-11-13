#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a,b,c,d;
	while(cin>>a>>b>>c>>d) {
		int team1 = d + a;
		int team2 = b + c;
		cout<<abs(team2 - team1)<<endl;
	}
	return 0;
}