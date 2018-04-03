#include <iostream>

using namespace std;

long long ConvertDecimalToBinary(int n){
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0){
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

string StringMutation(string str){
    string returnString = "";
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '1')
            returnString += "10";
        else
            returnString += "01";
    }
    return returnString;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        int m, k, n;
        cin >> m >> k >> n;
        string numString = to_string(ConvertDecimalToBinary(m));
        for (int i = 0; i < n; i++)
            numString = StringMutation(numString);
        cout << numString[k] << "\n";
    }
    return 0;
}
