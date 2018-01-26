#include<iostream>
#include<cmath>
using namespace std;
int funct(long long N){
	return ceil((3 + sqrt(9 + 8*N))/2);
}
int main()
{
	int cases=1;
	long long N;
	while(cin>>N,N){
		cout<<"Case "<<cases++<<": "<<funct(N)<<endl;
	}
	return 0;

}