#include <iostream>

void sym(int a, int b) {
	if (a != 0) {
		sym(a – 1, b + 1);
		std::cout << a * b;
		sym(a – 1, b + 1);
	}
}


int main() {
	sym(3, 1);
	return 0;
}