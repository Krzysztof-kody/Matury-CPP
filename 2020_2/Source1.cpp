#include <iostream>
using namespace std;

void sym(int a, int b) {
	if (a != 0) {
		sym(a – 1, b + 1);
		cout << a * b;
		sym(a – 1, b + 1);
	}
}


int main() {
	sym(3, 1);
	return 0;
}