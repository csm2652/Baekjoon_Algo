#include <iostream>

using namespace std;

int main() {

	int test_num;
	int r[1000]  = { 0 };
	char s[1000][21] = { 0 };


	
	cin >> test_num;

	for (int i = 0; i < test_num; i++) {
		cin >> r[i] >>s[i];
	}

	for (int j = 0; j < test_num; j++) {// 테스트 횟수
		for (int l = 0; s[j][l] != '\0'; l++) { // 문자열 도는거
			for (int m = 0; m < r[j]; m++) { // 문자열 R번씩 찍는거
				cout << s[j][l];
			}
		}
		cout << endl;
	}
	
}