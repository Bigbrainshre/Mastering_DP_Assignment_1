#include <bits/stdc++.h>
using namespace std;

int recur(const vector<int>& arr, int curr, int prev, vector<vector<int>>& dp) {

    //Ending the calc
    if (curr == arr.size()) return 0;


    //Dont calculate again
    if (dp[curr][prev + 1] != -1) return dp[curr][prev + 1];


    //Not taking the element
    int skip = recur(arr, curr + 1, prev, dp);


    //Taking the element
    int take = 0;
    if (prev == -1 || arr[curr] > arr[prev]) {
        take = 1 + recur(arr, curr + 1, curr, dp);
    }


    //Checking which one was better
    return dp[curr][prev + 1] = max(take, skip);
}



int main() {
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    int ans = recur(v,0,-1,dp);


    cout << "Longest path will have " << ans << " numbers."<< endl;
    return 0;
}
