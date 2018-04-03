#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--){
        int N, M, K;
        cin >> M >> N >> K;
        int A[M][N], B[M][N];

        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++)
                cin >> A[i][j];
        }
        if (K%2){
            for (int i = 0; i < M; i++){
                for (int j = 0;j < N; j++)
                    B[i][j] = A[i][N - j - 1];
            }
        }
        else{
            for (int i = 0; i < M; i++){
                for (int j = 0;j < N; j++)
                    B[i][j] = A[i][j];
            }
        }
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++)
                cout << B[i][j] << " ";
        }
    }
    return 0;
}
