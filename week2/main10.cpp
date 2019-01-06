#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void printPersonsNumber(const vector<bool>& q, bool isWorry) {
	int worried = 0;
	for (auto m : q) {
		if (m == isWorry) {
			++worried;
		}
	}
	cout << worried << endl;
}

void changeMood(vector<bool>& q, int position, bool isWorry) {
	if (q.size() >= 1) {
		q[position] = isWorry;
	}
}

void moovementInQueue(vector<bool>& q, int move_amount) {
	int new_size;
	if (move_amount > 0) {
		new_size = q.size() + move_amount;
	} else if (move_amount < 0) {
		new_size = q.size() + move_amount;
	} else {
		// COME 0 - let go them all ?
	}
	q.resize(new_size, false);
}

int main210() {

	int commands, position, move_amount;
	string cmd;
	bool mood;
	const bool WORRY = true;
	const bool CALM = false;
	vector<bool> queue(0, CALM);


	cin >> commands;

	for (int i = 1; i <= commands; ++i) {
		cin >> cmd;

		if (cmd == "WORRY_COUNT") {
			printPersonsNumber(queue, WORRY);

		} else if (cmd == "COME") {
			cin >> move_amount;
			moovementInQueue(queue, move_amount);

		} else {
			// WORRY, CALM, QUIET
			cin >> position;
			if (position >= 0) {
				if (cmd == 	"WORRY") {
					mood = WORRY;
				} else {
					mood = CALM;
				}
				changeMood(queue, position, mood);
			}
		}

	}

	return 0;
}



/**
 *
  int q;
  cin >> q;
  vector<bool> is_nervous;

  for (int i = 0; i < q; ++i) {
    string operation_code;
    cin >> operation_code;

    if (operation_code == "WORRY_COUNT") {

      // подсчитываем количество элементов в векторе is_nervous, равных true
      cout << count(begin(is_nervous), end(is_nervous), true) << endl;

    } else {
      if (operation_code == "WORRY" || operation_code == "QUIET") {

        int person_index;
        cin >> person_index;

        // выражение в скобках имеет тип bool и равно true для запроса WORRY,
        // поэтому is_nervous[person_index] станет равным false или true
        // в зависимости от operation_code
        is_nervous[person_index] = (operation_code == "WORRY");

      } else if (operation_code == "COME") {

        int person_count;
        cin >> person_count;

        // метод resize может как уменьшать размер вектора, так и увеличивать,
        // поэтому специально рассматривать случаи с положительным
        // и отрицательным person_count не нужно
        is_nervous.resize(is_nervous.size() + person_count, false);

      }
    }
  }
 *
 */
