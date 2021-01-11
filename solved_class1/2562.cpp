#include <iostream>

using namespace std;

int main(void) {

	int arr[9] = { 0 };
	int location = 0;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < 9; j++) {
		if (arr[j] > max) {
			max = arr[j];
			location = j;
		}
	}

	cout << max << endl;
	cout << location+1;
	
}