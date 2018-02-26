#include <iostream>
#include <cstring>

using namespace std;

int num_sets;
int sets[100];

int _find(int index) {
	if (index == sets[index])
		return index;
	return (sets[index] = _find(sets[index]));
}

void union_find(int u, int v) {
	int find_1 = _find(u);
	int find_2 = _find(v);
	cout<<"union_find";
	cout<<find_1<<" "<<find_2<<endl;
	cout<<"union_find"<<endl;
	if (find_1 != find_2) {
		num_sets--;
		sets[find_2] = find_1;
	}
}

int main() {
	int tests;
	string blank, line;
	cin>>tests;
	getline(cin, blank);
	getline(cin, blank);
	while(tests) {
		string max_letter;
		int max_int;
		getline(cin,max_letter);
		max_int = max_letter[0] - 'A';
		num_sets = max_int + 1;
		while(getline(cin, line)) {
			int first = line[0] - 'A';
			int second = line[1] - 'A';
			union_find(first, second);
		}
		tests--;
		if (tests > 0) {
			cout<<num_sets<<endl<<endl;
		} else {
			cout<<num_sets<<endl;
		}
		memset(sets, 0, sizeof(sets));
	}
	return 0;
}