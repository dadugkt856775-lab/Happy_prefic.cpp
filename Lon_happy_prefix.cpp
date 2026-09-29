#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "level";

    int n = s.size();
    vector<int> lps(n, 0);

    int len = 0;

    for (int i = 1; i < n; i++) {

        while (len > 0 && s[i] != s[len])
            len = lps[len - 1];

        if (s[i] == s[len])
            len++;

        lps[i] = len;
    }

    cout << "Longest Happy Prefix: "
         << s.substr(0, lps[n - 1]);

    return 0;
}
