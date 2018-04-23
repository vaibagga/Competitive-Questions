#include <bits/stdc++.h>
using namespace std;

int termCount[2001];

unsigned long long getPairsCount(int arr[], int n){
    unsigned long long numPair = 0;
    for (int i = 0; i < 2001; i++)
        termCount[i] = 0;
    for (int i = 0; i < n; i++)
        termCount[arr[i] + 1000]++;
    for (int i = 0; i < 2001; i++){
        for (int j = 0; j < 2001; j++){
            if (i == j)
                numPair += ((long long)termCount[i] * ((long long)termCount[i] - 1));
            else if ((i + j) % 2 == 0 && (termCount[(i + j)/2] > 0))
                numPair += ((long long)termCount[i] * (long long)termCount[j]);
        }
    }
    //cout << termCount[2 + 1000] << "\n";
    if (numPair % 2 == 0)
        return numPair/2;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        int numTerms;
        cin >> numTerms;
        int sequence[numTerms];
        for (int i = 0; i < numTerms; i++)
            cin >> sequence[i];
        cout << getPairsCount(sequence, numTerms) << "\n";
    }
    return 0;
}
