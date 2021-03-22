#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		string tmp = "";
		for (int i = 0; i < (int) s.size(); i++) {
			// check if a substring of 's' is equal to "party"
			if (s.substr(i, 5) == "party") {
				// if it's true, concatenate the word "parwi" to 'tmp'
				// instead of the original substring
				tmp += "pawri";
				// afterwards, increment 'i' by 4 to skip the next element
				i += 4;
				// then, continue the loop
				continue;
			}
			// otherwise, store the current letter of 's' to 'tmp'
			tmp += s[i];
		}
		cout << tmp << '\n';
	}
	return 0;
}
