#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int numCars, date;
        cin >> numCars >> date;
        int fine[numCars][2];
        for (int i = 0; i < numCars; i++){
            cin >> fine[i][0];
        }
        for (int i = 0; i < numCars; i++){
            cin >> fine[i][1];
        }
        int fineTotal = 0;
        for (int i = 0; i < numCars; i++){
            if (fine[i][0] % 2 != date % 2){
                fineTotal += fine[i][1];
            }
        }
        cout << fineTotal << "\n";
    }

    return 0;
}
