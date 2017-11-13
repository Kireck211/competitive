#include <iostream>

using namespace std;

#define FALSE false
#define TRUE true
#define NMAX 50
#define MAXCANDIDATES 50

bool finished = FALSE;

bool is_a_solution(int a[], int k, int n) {
	return (k == n);
}

void proccess_solution(int a[], int k, int n) {
	int i;

	for(i = 1; i <= k; i++) printf(" %d", a[i]);

	printf("\n");
}

void construct_candidates(int a[], int k, int n, int c[], int* ncandidates) {
	int i;
	bool in_perm[NMAX];

	for (i = 1; i < NMAX; i++) in_perm[i] = FALSE;
	for (i = 0; i < k; i++) in_perm[a[i]] = TRUE;

	*ncandidates = 0;
	for (i = 1; i <= n; i++)
		if (in_perm[i] == FALSE) {
			c[*ncandidates] = i;
			*ncandidates = *ncandidates + 1;
		}
}

void backtrack(int a[], int k, int n) {
	int i;
	int c[MAXCANDIDATES];
	int ncandidates;

	if (is_a_solution(a,k,n))
		proccess_solution(a,k,n);
	else {
		k += 1;
		construct_candidates(a,k,n,c,&ncandidates);
		for(i=0; i < ncandidates; i++) {
			a[k] = c[i];
			backtrack(a,k,n);
			if (finished) return;
		}
	}
}

int main() {
	int n;
	cin>>n;
	while(n!=0) {
		int a[NMAX];
		backtrack(a,0,n);
		cin>>n;
	}
	return 0;
}