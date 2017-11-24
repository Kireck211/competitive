#include <iostream>

using namespace std;

int main(void)
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	string unit[] = {"one","two","three","four","five","six","seven","eight","nine"};
	string special[] ={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string dec[] = {"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	cin >> k;
	while(k--)
	{
		string a;
		cin >> a;
		if(a.length()<2)
			if (a.at(0) == '0')
				cout << "zero";//"\n";
			else
				cout << unit[(a.at(0) - '0') - 1];// << "\n";
		else
		{
			if(a.at(1) == '0')
				cout << dec[(a.at(0)- '0') - 1];// << "\n";
			else if(a.at(0) == '1')
				cout << special[(a.at(1) - '0') - 1];// << "\n";
			else
				cout << dec[(a.at(0) - '0') - 1] << "-" <<unit[(a.at(1) - '0') - 1];// << "\n";		
		}
		cout << endl;
	}
}