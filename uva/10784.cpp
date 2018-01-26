#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long input;
	int i = 1;
	while(cin>>input,input) {
		long long answer = ceil((3 + sqrt(9 + 8*input))/2);
		cout<<"Case "<<i++<<": "<<answer<<endl;
	}
	return 0;
}