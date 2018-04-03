#include <bits/stdc++.h>

using namespace std;

bool IsPositive(int A[], int N){
    bool isPos = true;
    for (int i = 0; i < N; i++)
        isPos = isPos && (A[i] > 0);
    return isPos;
}

bool IsNegative(int A[], int N){
    bool isNeg = true;
    for (int i = 0; i < N; i++)
        isNeg = isNeg && (A[i] < 0);
    return isNeg;
}



long long SingleArrayMaxSum(int a[], int N){
    int max_so_far = a[0];
    int curr_max = a[0];
    for (int i = 1; i < N; i++){
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

long long MaxSum(int A[], int N, int K){
    if (IsPositive(A, N))
        return SingleArrayMaxSum(A, N) * K;
    if (IsNegative(A,N))
        return *max_element(A, A + N);
    int temp[N*3];
    for (int i = 0; i < N*3; i++)
        temp[i] = A[i%N];
    if (K < 4)
        return SingleArrayMaxSum(temp,N*K);
    long long x = SingleArrayMaxSum(temp, 3 * N), y = SingleArrayMaxSum(temp, 2 * N);
    if (x == y)
        return x;
    else
        return x + (y - x) * (K - 2);
}

int main(){
    int T;
    cin >> T;
    while (T--){
        int N, K;
        cin >> N >> K;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << MaxSum(A,N,K) << "\n";
    }
    return 0;
}
