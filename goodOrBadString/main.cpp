#include <bits/stdc++.h>

using namespace std;

bool IsVowel(char ch){
    if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
        return true;
    return false;
}

bool GoodOrBad(string str){
    string str1 =  str, str2 = str;
    replace(str1.begin(), str1.end(), '?', 'a');
    replace(str2.begin(), str2.end(), '?', 'b');
    int numVow = 0, numCon = 0;
    for (int i = 0; i < str1.length(); i++){
        if (IsVowel(str1[i]))
            numVow++;
        else
            numVow = 0;
        if (numVow > 5)
            return false;
    }
    for (int i = 0; i < str2.length(); i++){
        if (!IsVowel(str2[i]))
            numCon++;
        else
            numCon = 0;
        if (numCon > 3)
            return false;
    }
    return true;
}




int main(){
    int T;
    cin >> T;
    while (T--){
        string userString;
        cin >> userString;
        cout << GoodOrBad(userString) << "\n";
    }
    return 0;
}
