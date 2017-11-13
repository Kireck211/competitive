#include <iostream>
#include <vector>

using namespace std;

#define TRUE true
#define FALSE false
#define MAXNCANDIDATES 2

bool finished = FALSE;

bool is_a_solution(int a[], int n, int k) {
	return (n == k);
}

void construct_candidates(int a[], int k, int n, int c[], int * ncandidates) {
	c[0] = TRUE;
	c[1] = FALSE;
	*ncandidates = 2;
}

void proccess_solution(int a[], int k, int n) {
	cout<<"{";
	for(int i = 1; i <= k; i++)
		if (a[i] == TRUE)
			cout<<" "<<i;
	cout<<" }"<<endl;
}

void backtrack(int a[], int k, int n) {

	int i;									/* counter */
	int c[MAXNCANDIDATES];	/* array for next in recursion */
	int ncandidates;				/* candidates count */

	if (is_a_solution(a,n,k)) {
		proccess_solution(a,k,n);
	} else {
		k += 1;
		construct_candidates(a,k,n,c,&ncandidates);
		for (i = 0; i < ncandidates; i++) {
			a[k] = c[i];
			backtrack(a,k,n);
			if (finished) return;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	int n;
	cin>>n;
	while(n!=0) {
		int a[n];
		backtrack(a,0,n);
		cin>>n;
		finished = FALSE;
	}
	return 0;
}