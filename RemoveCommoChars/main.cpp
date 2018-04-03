#include <bits/stdc++.h>

using namespace std;

string RemoveCommonChars(string s1, string s2){
    int occurence1[256] = {0}, occurence2[256] = {0};
    for (int i = 0; i < s1.length(); i++){
        occurence1[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++){
        occurence2[s2[i]]++;
    }
    string concated = s1 + s2, retString = "";
    for (int i = 0; i < concated.length(); i++){
        if (!(occurence1[concated[i]] && occurence2[concated[i]]))
            retString += concated[i];
    }
    return retString;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        string str1, str2;
        cin >> str1 >> str2;
        if (RemoveCommonChars(str1, str2) != "")
            cout << RemoveCommonChars(str1, str2) << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
