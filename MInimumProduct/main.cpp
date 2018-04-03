#include <bits/stdc++.h>

using namespace std;
#define modNum 1000000007
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        unsigned long long A[N], prod = 1;
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
        int K;
        cin >> K;
        sort(A, A + N);
        for (int  i = 0; i < K; i++){
            prod = (prod % modNum * A[i] % modNum) % modNum;
        }
        cout << prod << "\n";
    }
    return 0;
}
