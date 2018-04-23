#include <iostream>

using namespace std;

int minSquare(int n){
    int *output = new int[n + 1];
    output[0] = 0;
    output[1] = 1;
    output[2] = 2;
    output[3] = 3;
    for (int i = 4; i <= n; i++){
        output[i] = i;
        for (int x = 1; x * x <= i; x++){
            if (output[i] > output[i - x * x] + 1)
                output[i] = output[i - x * x] + 1;
        }
    }
    int ans = output[n];
    delete [] output;
    return ans;

}

int main(){
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        cout << minSquare(N) << "\n";
    }
    return 0;
}
