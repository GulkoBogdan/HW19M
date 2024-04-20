#include <iostream>
#include <string>
using namespace std;
int main() {

	int i1;
	int s1;
	int n1 = 5;
	cout << "Input first number: ";
	do {
		cin >> i1;
	} while (i1 <= 0);
	cout << "Input second number: ";
	do {
		cin >> s1;
	} while (s1 <= 0);
	
	while (i1 > 0) {

		cout << i1 % 10<<s1;
		i1 = i1 / 10;
		if (i1 <= 0) {
			break;
		}
	}


	//2
	int i2, n2, x2;
	cout << "Input first number: ";
	do {
		cin >> n2;
	} while (n2 <= 0);
	i2 = 1;
	x2 = i2 * i2;
	while (x2 <= n2) {
		cout << x2 << " " << endl;
		i2++;
		x2 = i2 * i2;
	}


	//3
	int n3;
	int i3 = 2, n;
	cout << "Input first number: ";
	do {
		cin >> n3;
	} while (n3 <= 0);
	while (i3 <= n3) {
		i3++;
		if (n3 % i3 == 0) cout << i3 << endl;
		break;
	}
}
