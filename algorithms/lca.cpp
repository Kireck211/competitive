#include <iostream>
#include <cmath>

using namespace std;
#define MAX_N 100010
#define LOG_TWO_N 17

class RMQ {
private:
  int _A[MAX_N], SpT[MAX_N][LOG_TWO_N];
public:
  RMQ(int n, int A[]) {
    for (int i = 0; i < n; i++) {
      _A[i] = A[i];
      SpT[i][0] = i;
    }
    for (int j = 1; (1<<j) <= n; j++)
      for (int i = 0; i + (1<<j) - 1 < n; i++)
        if (_A[SpT[i][j-1]] < _A[SpT[i+(1<<(j-1))][j-1]])
          SpT[i][j] = SpT[i][j-1];
        else
          SpT[i][j] = SpT[i+(1<<(j-1))][j-1];
  }

  int query(int i, int j) {
    int k = (int)floor(log((double)j-i+1) / log(2.0));
    if (_A[SpT[i][k]] <= _A[SpT[j-(1<<k)+1][k]]) return _A[SpT[i][k]];
    else                                         return _A[SpT[j-(1<<k)+1][k]];
} };

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	RMQ rmq(n, a);
	int q;
	cin>>q;
	while(q--) {
		int i, j;
		cin>>i>>j;
		cout<<rmq.query(i,j)<<endl;
	}
	return 0;
}