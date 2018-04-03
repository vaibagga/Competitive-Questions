#include <iostream>

using namespace std;

int ShortestSubarray(int A[], int N){
    for (int i = 1; i < N-1; i++){
        if ((A[i-1] < A[i] && A[i+1] < A[i])||(A[i-1] > A[i] && A[i+1] > A[i]))
            return 3;
    }
    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
        cout << ShortestSubarray(A,N) << "\n";
    }
    return 0;
}
