#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        long long A[N];
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
        sort(A, A + N);
        long long sum = 0;
        for (int i = 1; i < N; i++){
            sum += i * A[i];
        }
        cout << sum << "\n";

    }

}
