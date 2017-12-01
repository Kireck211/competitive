#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string c;
	int vowels[5] = {0};
	while(getline(cin,c)) {
		//getline(cin, c);
		int len = c.length();
		//cout<<len<<endl;
		//memset(vowels, 0, sizeof(int)*5);
		//cout<<vowels[0]<<" "<<vowels[1]<<" "<<vowels[2]<<" "<<vowels[3]<<" "<<vowels[4]<<endl;
		for(int i = 0; i < len; i++) {
			if (c[i] == 'A' || c[i] == 'a')
				vowels[0]++;
			else if (c[i] == 'E' || c[i] == 'e')
				vowels[1]++;
			else if (c[i] == 'I' || c[i] == 'i')
				vowels[2]++;
			else if (c[i] == 'O' || c[i] == 'o')
				vowels[3]++;
			else if (c[i] == 'U' || c[i] == 'u')
				vowels[4]++;
			//cout<<c[i]<<endl;
		}
	}
	cout<<vowels[0]<<" "<<vowels[1]<<" "<<vowels[2]<<" "<<vowels[3]<<" "<<vowels[4]<<endl;
	return 0;
}