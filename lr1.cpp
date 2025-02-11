#include <iostream>
#include <set>
#include <random>

using namespace std;


int main() {
	set <int> S;
	set <int>::iterator iter;

	srand(time(NULL));

	for (int i = 0; i < 6; i++) {
		int rnum = rand() % 190 - 40;
		S.insert(rnum);
	}

	for (iter = S.begin(); iter != S.end(); ++iter) {
		cout << *iter << " ";
	}

	return 0;
}