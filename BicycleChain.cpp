#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }

    unordered_map<int, int> cnt;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (v2[i] % v1[j] == 0) {
                cnt[v2[i] / v1[j]]++;
            }
        }
    }

    int mx = 0;
    for (const auto &u : cnt) {
        mx = max(mx, u.first);
    }

    cout << cnt[mx]<<endl;

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/