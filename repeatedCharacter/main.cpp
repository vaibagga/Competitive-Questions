#include <bits/stdc++.h>

using namespace std;

char RepeatedCharacter(string str){
    for (int i = 0; i < str.length(); i++){
        for (int j = i; j < str.length(); j++){
            if ((i != j) && (str[i] == str[j]))
                return str[i];
        }
    }
    return NULL;
}

int main()
{
    int T;
    cin >> T;
    while (T--){
        string userString;
        cin >> userString;
        if (RepeatedCharacter(userString) != NULL)
            cout << RepeatedCharacter(userString) << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
