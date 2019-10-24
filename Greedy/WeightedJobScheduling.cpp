#include<bits/stdc++.h>
using namespace std;

struct Job{
    int start,finish,profit;
};
bool compare(Job a,Job b){
    return a.finish < b.finish;
}
int binarySearch(Job jobs[], int index) { 
    int lo = 0, hi = index - 1; 
    while (lo <= hi) 
    { 
        int mid = (lo + hi) / 2; 
        if (jobs[mid].finish <= jobs[index].start) 
        { 
            if (jobs[mid + 1].finish <= jobs[index].start) 
                lo = mid + 1; 
            else
                return mid; 
        } 
        else
            hi = mid - 1; 
    } 
    return -1; 
} 
int findMaxProfit(Job arr[],int n){
    sort(arr,arr+n,compare);
    int * dp = new int[n];      //dynamic array
    dp[0] = arr[0].profit;

    for(int i=1 ; i<n; i++){
        int including = arr[i].profit;
        int latestNonConflict = binarySearch(arr, i); 
        if(latestNonConflict != -1){
            including += dp[latestNonConflict];
        }
        dp[i] = max(including , dp[i-1]);
    }
    int ans = dp[n-1];
    delete[] dp;
    return ans;
}
int main(){

    int n;
    cin >> n;
    Job arr[n];
    for(int i=0 ; i<n; i++){
        cin >> arr[i].start >> arr[i].finish >> arr[i].profit;
    }
    cout << findMaxProfit(arr,n) << endl;
    return 0;
}