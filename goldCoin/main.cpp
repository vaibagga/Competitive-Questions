#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int MaxGold(int *input, int n){
    if (n == 1)
        return input[0];
    int *maxGold = new int [n];
    maxGold[0] = input[0];
    maxGold[1] = input[1];
    for (int i = 2; i < n; i++){
        maxGold[i] = 1;
        for (int j = i - 2; j >= 0; j--){
            if (maxGold[j] + input[j] > maxGold[i])
                maxGold[i] = maxGold[j] + input[i];
        }
    }
    int best = 1;
    for (int i = 0; i < n; i++){
        if (best < maxGold[i])
            best = maxGold[i];
    }
    delete [] maxGold;
    return best;
}

int main()
{
    int T;
    cin >> T;
    for (int ic = 0; ic < T; ic++){
        int N;
        cin >> N;
        int *input = new int [N];
        for (int i = 0; i < N; i++){
            cin >> input[i];
        }
        cout << "Case " <<  ic + 1 << ": " << MaxGold(input, N) << "\n";
    }
    return 0;
}
