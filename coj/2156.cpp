#include <iostream>
using namespace std;

#define MAX 110

double probas[MAX];

double f(int n, double p) {
	if (n == 1)
		return probas[n-1] = p;
	if (probas[n-1])
		return probas[n-1];
	return probas[n-1] = f(n-1, p) * (1-p) + p * (1 - f(n-1,p));
}

int main() {
	int t,n;
	double p;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %lf", &n, &p);
		printf("%.5f\n", f(n,p));
		for(int i = 0; i < MAX; i++) probas[i] = 0;
	}
	return 0;
}