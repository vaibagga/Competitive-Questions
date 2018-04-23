#include <bits/stdc++.h>

#define m 1000000007

using namespace std;

long long NumCodes(long long *input, int siz){

    long long *output = new long long [siz + 1];
    output[0] = 1;
    output[1] = 1;
    for (int i = 2; i <= siz; i++){
        output[i] = output[i - 1] % m;
        if (input[i - 2] * 10 + input[i - 1] <= 26)
            output[i] += output[i - 2] % m;
            output[i] = output[i] % m;
    }
    long long ans = output[siz];
    delete [] output;
    return ans % m;

}

int main(){
    string input;
    while (cin >> input){
      	if (input == "0")
          	break;
        int siz = input.length();
        long long *inp = new long long [siz];
        for (int i = 0; i < siz; i++){
            inp[i] = (long long)input[i] - 48;
        }
        cout << NumCodes(inp, siz) << "\n";
    }
    cout << "\n";
    return 0;
}
