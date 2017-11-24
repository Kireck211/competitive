#include <iostream>
using namespace std;

int main() {
	string c;
	while(cin>>c) {
		int length = c.length(), count=0;
		int q1 = 0, a=0, q2=0;
		for(int i = 0;i<length;i++)
			if (c[i] == 'Q')
				for(int j = i +1; j < length; j++)
					if(c[j] == 'A')
						for(int k = j + 1; k < length; k++)
							if(c[k] == 'Q')
								count++;
		cout<<count<<endl;
	}
}