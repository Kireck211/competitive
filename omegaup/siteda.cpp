#include <iostream>
using namespace std;

int main() {
	int n,m,n1,m1;
	cin>>n;
	cin>>m;
	n1 = n;
	m1 = m;
	long long new_m;
	long long i = 1;
	cout<<n<<" "<<m<<" ";
	while(true) {
		new_m = (n1+m1)%10;
		n1 = m1;
		m1 = new_m;
		if (n == n1 && m1 == m)
			break;
		cout<<new_m<<" ";
		i++;
	}
	cout<<m1<<"\n"<<i<<endl;
	return 0;
}