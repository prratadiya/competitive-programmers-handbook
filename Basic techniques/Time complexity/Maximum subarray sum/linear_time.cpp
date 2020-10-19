#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i <= b; i++)

int return_max_sum(int arr[], int size){
    int best_sum = 0, sum = 0;

    loop(i,0,size-1){
        sum = max(arr[i],sum+arr[i]);
        best_sum = max(best_sum,sum);
    }
    return best_sum;
}

int main(){
    int n, sum;
    cin >> n;
    int list[n];
    loop(i,0,n-1){
        cin >> list[i];
    }
    sum = return_max_sum(list,n);
    cout << sum <<"\n";
    return 0;
}