#include <iostream>

#define m 1000000007
#define ll long long

using namespace std;

int NumBalanced(int x){
    if (x == 0 || x == 1)
        return 1;
    ll v = NumBalanced(x - 1);
    ll u = NumBalanced(x - 2);
    return (((v % m) * (v % m)) % m + 2 * ((v % m) * (u % m)) % m) % m;
}

int main()
{
    cout << NumBalanced(40);
    return 0;
}
