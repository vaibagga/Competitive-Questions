#include <iostream>
#include <string>

using namespace std;

bool isSub(string s1, string s2){
    int l1 = s1.length(), l2 = s2.length();
    for (int i = 0; i  + l2 < l1; i++){
        if (s1.substr(i, l2) == s2)
            return true;
    }
    return false;

}

int main()
{
    int T = 24;
    while (T--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << isSub(s1, s2) << "\n";
    }
    return 0;
}
