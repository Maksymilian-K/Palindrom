#include<iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	bool b = true;
	int i = 0;
	int j = s.length()-1;
	while (i < j) {
		if (s[i] != s[j]) {
			b = false;
		}
		i++; j--;
	}
	
	if (b = true) cout << "TAK";
	else cout<<"NIE";
	
}