#include<iostream>
using namespace std;
int n;
bool prime(int num) {
	for (int i = 2; i <= num / 2; i++)
		if (num%i == 0) return false;
	return true;
}
void go(int cnt, int num) {
	if (cnt == n) {
		if (prime(num)) cout << num << endl;
		return;
	}
	for (int i = 1; i < 10; i++) {
		if (i == 2) continue;
		if (prime(num * 10 + i)) go(cnt + 1, num * 10 + i);
	}
}
int main() {
	cin >> n;
	go(1, 2);
	go(1, 3);
	go(1, 5);
	go(1, 7);
	return 0;
}