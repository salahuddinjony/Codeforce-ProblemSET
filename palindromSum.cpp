//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        string s=to_string(n);
        int digit=0;
        for (auto u:s){
            
            digit+=(u-'0');
            
        }
        string str=to_string(digit);
        string temp=str;
        reverse(str.begin(), str.end());
        
        if(str==temp) return true;
        else return false;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends