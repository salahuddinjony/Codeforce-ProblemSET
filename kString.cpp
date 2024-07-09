#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    int k;
    string s;
    cin >> k >> s;
    
    // Frequency map to count occurrences of each character
    map<char, int> m;
    for (auto &u : s) m[u]++;
    
    string ans = "";
    
    // Check if each character's count is divisible by k
    for (char c = 'a'; c <= 'z'; ++c) {
        if (m[c] % k != 0) {
            cout << "-1" << endl;
            return 0;
        }
        // Append the character m[c] / k times to the answer string
        ans += string(m[c] / k, c);
    }
    
    // Construct the final string by repeating ans k times
    string result = "";
    for (int i = 0; i < k; ++i) {
        result += ans;
    }
    
    cout << result << endl;

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/