//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
/*
1
5 0
1 5 4 1 2 
*/
// } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
        int s=nums.size();
	    vector<pair<int, int> >v;
	    for(int i=0; i<s;i++){
	        for(int j=0;j<s; j++){
	            if(i!=j and k==nums[i]-nums[j]){
	                v.push_back({nums[i],nums[j]});
	            }
	        }
	    }
        sort(v.begin(), v.end())
	    int sz=unique(v.begin(), v.end())- v.begin();
	    return sz;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends