#include <bits/stdc++.h>

using namespace std;

bool isAbs(int n){
    if (n < 10)
        return true;
    int temp1 = n % 10, temp2 = (n/10)%10;
    return isAbs(n/10) && (abs(temp1 - temp2)==1);
}

int main()
{
    int T;
    cin >> T;
    while (T--){
        int N, lest;
        cin >> N >> lest;
        int A[N];
        bool prin = false;
        for (int i = 0; i < N; i++){
            cin >> A[i];
            if (isAbs(A[i]) && A[i] < lest){
                cout << A[i] << " ";
                prin = true;
            }
        }
        if (!prin)
            cout << -1;
        cout << "\n";
    }
    return 0;
}
