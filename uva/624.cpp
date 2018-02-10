#include <iostream>
using namespace std;

bool p[21];
bool visited[21];
int disks[21];
bool found = false;

void f(int j, long long maximum, long long *sum, int d) {
	for(int i = 0; i < d; i++)
		cout<<p[i]<<" ";
	cout<<endl;
	for(int i = 0; i < d; i++)
		cout<<disks[i]<<" ";
	cout<<endl;
	if (found || j == d) {
		return;
	}
	for(int i = j; i < d; i++) {
		if (visited[i] == false) {
			visited[i] = true; p[i] = true;
			cout<<(*sum + disks[i])<<endl;
			if (*sum + disks[i] < maximum) {
				*sum += disks[i];
				f(i+1, maximum, sum, d);
			} else if (*sum + disks[i] == maximum) {
				found = true;
			} else {
				p[i] = false; visited[i] = true;
			}
		}
	}
	cout<<"acabo for"<<endl;
}

int main() {
	long long n,sum = 0;
	while(cin>>n) {
		int d;
		cin>>d;
		for(int i = 0; i < d; i++) {
			cin>>disks[i];
			visited[i] = false;
			p[i] = false;
		}
		f(0, n, &sum, d);
		for(int i = 0; i < d; i++)
			if(p[i])
				cout<<disks[i]<<" ";
	}
	return 0;
}