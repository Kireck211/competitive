#include <iostream>

using namespace std;

int power(int base, int exp) {
	if (exp == 1)
		return base;
	else {
		return base * power(base, exp - 1);
	}
}

int main() {
	int base, exp;
	while(cin>>base>>exp) {
		cout<<power(base, exp)<<endl;
	}
	return 0;
}