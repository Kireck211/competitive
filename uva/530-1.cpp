#include<iostream>
using namespace std;

long long nchoosek(int n,int k){
	long long res = 1;
	if(k>n-k){
		k = n-k; 
	}
	for(int i=0;i<k;i++){
		res *= n-i;
		res /= i+1;
	}
	return res;
}

int main()
{
	long long n,k;
	while(cin>>n>>k,n||k){
		cout<<nchoosek(n,k)<<endl;
	}
	return 0;
}