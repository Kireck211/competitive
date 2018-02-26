#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool in_vector(int obj_angle, vector<int>& permitted_hours) {
	for(int i = 0; i < permitted_hours.size(); i++) {
		if (obj_angle == permitted_hours[i])
			return true;
	}
	return false;
}

int main() {
	int angle;
	vector<int> permitted_hours;
	for(int i = 0; i < 720; i++) {
		int minutes = i % 60;
		int hours = i / 12;
		int current_angle = abs(minutes - hours);
		permitted_hours.push_back(current_angle *6);
	}
	while(cin>>angle) {
		if (in_vector(angle, permitted_hours)) {
			cout<<"Y\n";
		} else {
			cout<<"N\n";
		}
	}
	return 0;
}