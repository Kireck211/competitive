#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,c,s,count=0, index=1;
	while(cin>>n>>c>>s) {
		if (index == s)
			count++;
		while(c--) {
			int value;
			cin>>value;
			index += value;
			if (index > n)
				index = 1;
			else if (index < 1)
				index = n;
			//cout<<"index:"<<index<<endl;
			//cout<<"s:"<<s<<endl;
			if (index == s)
				count++;
		}
		cout<<count<<endl;
		//cout<<endl;
		count = 0;
		index =1;
	}
	return 0;
}