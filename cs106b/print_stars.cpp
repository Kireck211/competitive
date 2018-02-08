#include <iostream>

using namespace std;

void printStars(int n) {
	if (n == 1)
		cout<<"*";
	else {
		cout<<"*";
		printStars(n-1);
	}
}

int main() {
	int n;
	cin>>n;
	printStars(n);
	cout<<endl;
}