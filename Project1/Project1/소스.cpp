#include <iostream>

using namespace std;
/*
1.
int main() {
	int i,j;
	for (i = 0; i < 10; i++) {
		for (j = 1; j <= 10; j++) {
			cout << 10*i+j << "\t";
		}
		cout << "\n";
	}
}

2.
int main() {
	int i, j;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			cout << j << "*" << i << "=" << i * j << "\t";
		}
		cout << "\n";
	}
}

3.
int main() {
	int a, b;
	cout << "두 수를 입력하라>>";
	cin >> a >> b;
	if (a > b) {
		cout << a;
	}
	else
		cout << b;
}

4.
int main() {
	float a, b, c, d, e,max;
	cout << "5 개의 실수를 입력하라>>";
	cin >> a >> b >> c >> d >> e;
	if (a < b)
		a = b;
	if (a <c)
		a = c;
	if (a < d)
		a = d;
	if (a < e)
		a = e;
	cout << "제일 큰  수 = " << a;
}

5.
int main() {
	char a[100];
	int b=0;
	cout << "문자들을 입력하라(100개 미만).";
	cin.getline(a,100);
	for (int i = 0; i < 100; i++) {
		if (a[i] == 'x') {
			b += 1;
		}
	}
	cout << "x의 개수는 " << b;
}

6.
int main() {
	string a, b;
	cout << "새 암호를 입력하세요>>";
	cin >> a;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> b;
	if (a == b)
		cout << "같습니다";
	else
		cout << "같지 않습니다";
}

7.
int main() {
	char a[20];
	while (a != "yes") {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(a, 20);
		if (strcmp(a, "yes") == 0)
			break;
	}
	cout << "종료합니다...";
}
*/
#include <cstring>
int main() {
	char name[100];
	int a = 0;
	char longname[100];
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n";
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << "\n";
		if (strlen(name) > a) {
			a = strlen(name);
			strcpy(longname, name);
		}
	}
	cout << "가장 긴 이름은 " << longname;
	return 0;
}