#include <bits/stdc++.h>
using namespace std; 

void Sol() {
	// part - 1 
	string s;
    int cnt = 0, dial = 50, tot = 100;

    while (cin >> s) {
        int dir = (s[0] == 'L') ? +1 : -1;
        int num = 0;
        for (int i = 1; i < s.size(); i++) {
            num = (num * 10) + (s[i] - '0');
        }
        dial += (dir * num);
        dial %= tot;
        cnt += (not dial);
    }

    cout << cnt << endl;

}

int main() {
	
	Sol();

	return 0;
}

