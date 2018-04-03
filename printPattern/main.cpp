#include <iostream>

using namespace std;

void PrintPattern(int N){
    int temp = 0, temp2 = N*N;
    for (int  i = 0; i < N; i++){
        for (int k = 0; k < 2*i; k++){
            cout << "-";
        }
        for (int j = 0; j < N - i; j++){
                cout << ++temp << "*";
        }
        for (int j = 0; j < N - i - 1; j++){
                cout << ++temp2 << "*";
        }
        cout << ++temp2;
        temp2 = temp2 - 2*(N - i)  + 1;
        cout << "\n";
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        PrintPattern(N);
    }
    return 0;
}
