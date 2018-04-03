#include <iostream>

using namespace std;

int Occurences(string str, int n){
    int frequency[256] = {0};
    frequency[str[0]] = 1;
    for (int i = 1; i < str.length(); i++){
        if (str[i] != str[i - 1])
            frequency[str[i]]++;
    }
    int numSame = 0;
    for (int i = 0; i < 256; i++){
        if (frequency[i] == n)
            numSame++;
    }
    return numSame;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string userString;
        int n;
        cin >> userString >> n;
        cout << Occurences(userString, n) << "\n";
    }
    return 0;
}
