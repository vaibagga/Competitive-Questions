#include <iostream>

using namespace std;

bool Rectangle(int a, int b, int c, int d){
    return ((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c));
    }

int main()
{
    int T;
    cin >> T;
    while (T--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (Rectangle(a,b,c,d))
            cout << "YES\n";
        else
            cout  << "NO\n";
    }
    return 0;
}
