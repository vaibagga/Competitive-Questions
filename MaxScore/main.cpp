#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        unsigned long long A[N][N], maxRow[N] = {0};
        unsigned long long sum = 0;
        for (int i = 0; i < N; i++){
            for (int  j = 0; j < N; j++)
                cin >> A[i][j];
        }
        bool order = true;
        for (int i = 0; i < N; i++){
            if (A[N - 1][i] > maxRow[N - 1])
                maxRow[N - 1] = A[N - 1][i];
        }
        sum = maxRow[N - 1];
        for (int i = N - 2; i >= 0; i--){
            for (int j = 0; j < N; j++){
                if ((A[i][j] > maxRow[i]) && (maxRow[i+1] > A[i][j]))
                    maxRow[i] = A[i][j];
            }
            if (maxRow[i] == 0){
                order = false;
                break;
            }
            sum += maxRow[i];
        }
        if  (order)
            cout << sum << "\n";
        else
            cout << -1 << "\n";

    }
    return 0;
}
