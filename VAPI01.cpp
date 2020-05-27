#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int t, n;
	string s;
	cin >> t;
	while(t--) {
		int sol = 0, need[26] = {0};
		cin >> n >> s;
		for(int i = 0; i < n-1; i++) {
			char k = s[2 * i], d = s[2 * i + 1];
			need[k - 'a']++;
			if (need[d - 'A']) 
				need[d - 'A']--;
			else
				sol++;
		}
		cout << sol << endl;
	}
	return 0;
}
