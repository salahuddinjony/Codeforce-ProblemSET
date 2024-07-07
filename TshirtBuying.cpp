#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e5 + 123;
int f[mx], b[mx], p[mx];

int main(){
    optimize();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> f[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    priority_queue<int, vector<int>, greater<int>> q[4][4];  // Assuming the constraints allow max values for f and b as 3
    for (int i = 0; i < n; i++) q[f[i]][b[i]].push(p[i]);

    int m;
    cin >> m;
    while (m--) {
        int c;
        cin >> c;
        int ans = INT_MAX;
        int F = -1, B = -1;

        for (int i = 1; i <= 3; i++) {  // Assuming f and b values range from 1 to 3
            if (!q[c][i].empty() && q[c][i].top() < ans) {
                ans = q[c][i].top();
                F = c;
                B = i;
            }
            if (!q[i][c].empty() && q[i][c].top() < ans) {
                ans = q[i][c].top();
                F = i;
                B = c;
            }
        }

        if (ans == INT_MAX) ans = -1;
        else {
            q[F][B].pop();  // Remove the selected element
        }
        
        cout << ans <<" ";
    }

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/