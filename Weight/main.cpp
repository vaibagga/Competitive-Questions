#include <bits/stdc++.h>

using namespace std;

long long power(long long x, long long y, long long p){
    long long res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0){
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}


long long numWeight(long long num, int wt){
    if (wt > 8 || wt < -9)
        return 0;
    long long mt = 1000000007;
    map <int, int> m;
    m.insert(pair <int, int> (-8, 1));
    m.insert(pair <int, int> (-7, 2));
    m.insert(pair <int, int> (-6, 3));
    m.insert(pair <int, int> (-5, 4));
    m.insert(pair <int, int> (-4, 5));
    m.insert(pair <int, int> (-3, 6));
    m.insert(pair <int, int> (-2, 7));
    m.insert(pair <int, int> (-1, 8));
    m.insert(pair <int, int> (0, 9));
    m.insert(pair <int, int> (1, 9));
    m.insert(pair <int, int> (2, 8));
    m.insert(pair <int, int> (3, 7));
    m.insert(pair <int, int> (4, 6));
    m.insert(pair <int, int> (5, 5));
    m.insert(pair <int, int> (6, 4));
    m.insert(pair <int, int> (7, 3));
    m.insert(pair <int, int> (8, 2));
    m.insert(pair <int, int> (9, 1));
    long long initial = m[-wt];

    return ((initial % mt) * (power(10, num - 2, mt) % mt)) % mt ;
}
int main()
{
    int T;
    cin >> T;
    while (T--){
        long long numDig;
        cin >> numDig;
        int wt;
        cin >> wt;
        cout << numWeight(numDig, wt)<< "\n";
    }
    return 0;
}
