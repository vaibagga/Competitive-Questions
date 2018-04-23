#include <iostream>

using namespace std;

long long left(long long X, long long Y){
    if (X == Y)
        return 2 * X;
    if (X == 0 || Y == 0)
        return max(X, Y);
    if (X % Y == 0)
        return 2 * Y;
    if (Y % X == 0)
        return 2 * X;
    if (X > Y)
        X = X % Y;
    else if (X < Y)
        Y = Y % X;
    return left(X, Y);
}

int main(){
    int T;
    cin >> T;
    while (T--){
        long long X, Y;
        cin >> X >> Y;
        cout << left(X, Y) << "\n";
    }
    return 0;
}
