//Minimum Absolute Difference in an array

#include<bits/stdc++.h>
using namespace std;

int minAbsoluteDiff(int arr[], int n) {
    
    sort(arr,arr+n);
    int min = abs(arr[1] - arr[0]);
    for(int i = 2; i<n; i++){
        int k = abs(arr[i] - arr[i-1]);
        if(k <= min){
            min = k;
        }
    }
    return min;
}
