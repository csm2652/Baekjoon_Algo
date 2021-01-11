#include<iostream>
using namespace std;

int main()
{
	int a, b;

	while (1) {
		cin >> a >> b;

		if (a > b) {
			cout << ">";
		}
		else if (a == b) {
			cout << "=";
		}
		else if (a < b) {
			cout << "<";
		}

		cout << endl;
	}


	return 0;
}

