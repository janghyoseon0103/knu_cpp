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
	cout << "�� ���� �Է��϶�>>";
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
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b >> c >> d >> e;
	if (a < b)
		a = b;
	if (a <c)
		a = c;
	if (a < d)
		a = d;
	if (a < e)
		a = e;
	cout << "���� ū  �� = " << a;
}

5.
int main() {
	char a[100];
	int b=0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�).";
	cin.getline(a,100);
	for (int i = 0; i < 100; i++) {
		if (a[i] == 'x') {
			b += 1;
		}
	}
	cout << "x�� ������ " << b;
}

6.
int main() {
	string a, b;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> a;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> b;
	if (a == b)
		cout << "�����ϴ�";
	else
		cout << "���� �ʽ��ϴ�";
}

7.
int main() {
	char a[20];
	while (a != "yes") {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(a, 20);
		if (strcmp(a, "yes") == 0)
			break;
	}
	cout << "�����մϴ�...";
}
*/
#include <cstring>
int main() {
	char name[100];
	int a = 0;
	char longname[100];
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n";
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << "\n";
		if (strlen(name) > a) {
			a = strlen(name);
			strcpy(longname, name);
		}
	}
	cout << "���� �� �̸��� " << longname;
	return 0;
}