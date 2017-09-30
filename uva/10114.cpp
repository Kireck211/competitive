#include <iostream>
#include <map>

#define MAX_MONTHS 101

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n_month, months;
	double down, loan, car, pay_m;
	map<int, double> m;
	cin>>n_month>>down>>loan>>months;
	car = loan + down;
	pay_m = loan / n_month;
	int i_month;
	while(n_month > 0) {
		while(months--) {
			double dep;
			cin>>i_month>>dep;
			m[i_month] = dep;
		}
		double last_dep = m[0];
		car *= (1 - last_dep);
		int m_months = 0;
		for (int i = 1; i < MAX_MONTHS && loan > car; i++) {
			double dep = m[i];
			if (dep)
				last_dep = dep;
			else
				dep = last_dep;
			car *= (1 - dep);
			loan -= pay_m;
			m_months++;
		}
		cout<<m_months<<" month";
		if (m_months>1 || m_months == 0)
			cout<<"s\n";
		else
			cout<<"\n";
		cin>>n_month>>down>>loan>>months;
		car = loan + down;
		pay_m = loan / n_month;
		m.clear();
	}
	return 0;
}