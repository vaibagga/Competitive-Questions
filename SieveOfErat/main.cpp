#include <iostream>

using namespace std;

void Sieve(int n){
    bool sieve[n + 1];
    for (int i = 0; i <= n; i++){
        sieve[i] = true;
    }
    sieve[0] = false;
    sieve[1] = false;
    for (int i = 2; i * i <= n; i++){
        if (sieve[i] == true){
            for (int j = i * i; j < n; j += i){
                sieve[j] = false;
            }
        }
    }
    for (int i = 0; i <= n; i++){
        cout << i << " is " << sieve[i] << "\n";
    }

}

int main()
{
    //cout << "Hello world!" << endl;
    Sieve(100);
    return 0;
}
