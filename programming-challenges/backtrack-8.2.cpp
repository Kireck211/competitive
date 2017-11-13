#include <iostream>

using namespace std;

#define MAXCANDIDATES 10
#define FALSE false
#define TRUE true

bool finished = FALSE; 	/* found all solutions yet? */

bool is_a_solution(int k, int n) {
	return (k == n);
}

void construct_candidates(int c[], int *ncandidates) {
	c[0] = TRUE;
	c[1] = FALSE;
	*ncandidates = 2;
}

void process_solution(int a[], int k) {
	int i;

	printf("{");
	for (i = 0; i < k; i++)
		if (a[i] == TRUE)
			printf(" %d", i + 1);

	printf(" }\n");
}

void backtrack(int a[], int k, int n) {

	int c[MAXCANDIDATES]; /* candidates for next position */
	int ncandidates; 			/* next position candidate count */
	int i; 								/* counter */

	if (is_a_solution(k,n)) {
		process_solution(a,k);
	} else {
		k += 1;
		construct_candidates(c,&ncandidates);
		for (i = 0; i < ncandidates; i++) {
			a[k - 1] = c[i];
			backtrack(a,k,n);
			if (finished) return; /* terminate early */
		}
	}
}

int main () {
	int n;
	cin>>n;
	while(n!=0) {
		int a[21];
		backtrack(a, 0, n);
		cin>>n;
	}
	return 0;
}