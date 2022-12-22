#include <iostream>

// сигнатура функции
int max(int a, int b) {
	return a > b ? a : b;
}

int max3(int a, int b, int c) {
	return max(max(a, b), c);
}

int main() {
	int a = 1;
	int b = 2;
	int c = 3;

	std::cout << max3(a, b, c) << std::endl;
}