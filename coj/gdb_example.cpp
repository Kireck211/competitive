#include<iostream>
using namespace std;
int main(){
	int a[5] = {0,1,2,4,8};
	for(int i=0;i<5;i++){
		a[i]= 3*a[i];
	}
	return 0;
} 