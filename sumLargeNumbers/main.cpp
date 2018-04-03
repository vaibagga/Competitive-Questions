#include <iostream>

using namespace std;

string SumLargeNumbers(string num1, string num2){
    int largeNumber1[101] = {0}, largeNumber2 = {0};
    for (int i = 0, j = 100; i < num1.length(); i++, j--){
        largeNumber1[j] = num1[i];
    }
    for (int i = 0, j = 100; i < num2.length(); i++, j--){
        largeNumber2[j] = num2[i];
    }
    int largeSum[101] = {0};
    for (int i = 100; j >= 0; j--){
        largeSum[j] = largeNumber1[j] + largeNumber2[j];
    }
}

int main(){
    int T;
    cin >> T;
    while (T--){
        string number1, number2;
        cin >> number1, number2;
    }
    return 0;
}
