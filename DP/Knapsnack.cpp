#include<bits/stdc++.h>
using namespace std;



int knapsack(int* weights, int* values, int n, int maxWeight){
    int W = maxWeight;            
    int* a = new int[W+1]();
    int* b = new int[W+1]();
    for(int i=1;i<=n;i++){
        for(int w=1;w<=W;w++){
            b[w] = a[w];
            if(weights[i-1]<=w){
                b[w] = max(b[w] , values[i-1] + a[w - weights[i-1]]);
            }
        }
        swap(a,b);
    }
    int ans = a[W];
    delete[] a,b;
    return ans;
}
int main(){
	
    int n , maxW;
    cin >> n >> maxW;

    int val[n], wt[n];
    for(int i=0; i<n; i++){
        cin >> val[i];
    }
    for(int i=0; i<n; i++){
        cin >> wt[i];
    }

	cout << knapsack(wt, val, n, maxW)<<endl;
}