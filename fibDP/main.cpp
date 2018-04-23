#include <bits/stdc++.h>

using namespace std;

int fibDP(int n, int *arr){
    if (n == 0 || n == 1)
        return 1;
    if (arr[n] > 0)
        return arr[n];
    int output = arr[n - 1] + arr[n - 2];
    arr[n] = output;
    return output;
}

int fibIter(int n){
    int *arr = new int [n + 1];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int result = arr[n];
    delete [] arr;
    return result;
}


int main(){
    cout << fibIter(29) << "\n";
    return 0;
}
