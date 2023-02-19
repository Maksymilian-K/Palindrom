#include<iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	bool b;
	for (int i = 0; i <= s.length() / 2; i++) {
		if (s[i] != s[s.length() - i]) b = false;
	}
	if (b) cout << "TAK";
	else cout << "NIE";
}