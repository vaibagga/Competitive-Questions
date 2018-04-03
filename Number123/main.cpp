#include <bits/stdc++.h>
using namespace std;
bool isConsisting(int num){
    while (num > 0){
        if ((num % 10 != 1)&&(num % 10 != 2)&&(num % 10 != 3))
            return false;
        num /= 10;
    }
    return true;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int A[N], numPrint = 0;
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
        sort(A, A + N);
        for (int i = 0; i < N; i++){
            if (isConsisting(A[i])){
                cout << A[i] << " ";
                numPrint++;
            }
        }
        if (!numPrint)
            cout << -1;
        cout << "\n";
    }
    return 0;
}
