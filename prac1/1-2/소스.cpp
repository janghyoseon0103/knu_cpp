#include <iostream>
/*
3.
int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	std::cout << "1���� 10���� ���� ����� " << sum << "�Դϴ�";
}
*/

int main() {
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << '*';
		}
		std::cout << "\n";
	}
}