#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PrintMontlyTODO(const vector<string>& todo) {
	cout << todo.size() << " ";
	for (auto task : todo) {
		cout << task << " ";
	}
	cout << endl;
}

int main() {
	// v2

	unsigned int commands, month, day;
	string command, task;
	vector<unsigned int> days_in_months = { 31, 28, 31, 30, 31, 30, 31, 31, 30,
			31, 30, 31 };
	vector<vector<string>> todo_prev;
	vector<vector<string>> todo(days_in_months[0]);

	month = 0;

	cin >> commands;

	for (unsigned int i = 1; i <= commands; ++i) {

		cin >> command;

		if (command == "ADD") {
			cin >> day >> task;
			todo[day - 1].push_back(task);

		} else if (command == "NEXT") {
			if (month >= 11) {
				month = 0;
			}
			++month;
			vector<string> empty(0, "");
			if (days_in_months[month] < todo.size()) {
				todo_prev = todo;
				todo.resize(days_in_months[month], empty);
				for(unsigned int j = days_in_months[month] - 1; j < todo_prev.size(); ++j) {
				    for(auto t_prev : todo_prev[j]) {
				    	todo[days_in_months[month] - 1].push_back(t_prev);
				    }
				}
			} else {
				todo.resize(days_in_months[month], empty);
			}

		} else if (command == "DUMP") {
			cin >> day;
			if (day <= todo.size()) {
				PrintMontlyTODO(todo[day - 1]);
			}
		}

	}

	return 0;
}
