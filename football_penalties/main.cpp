#include <iostream>

using namespace std;

int main()
{
string user_input;
    while(true){
        int tie = true;
       	getline(cin, user_input);
        if (user_input== "")
        	break;
        int l = user_input.length();
        int shoot[l];
        for (int i = 0; i < l; i++){
            shoot[i] = (int)user_input[i]-48;
            //cout << shoot[i] << " ";
        }
        int num_shoots = 0,team1 = 0,team2 = 0;
        for (int i = 0; i < 10; i++){
            num_shoots++;
            if (i%2==0 && shoot[i]==1){
                team1++;
            }
            else if (i%2==1 && shoot[i]==1){
                team2++;
            }
            //cout << team1 << " " << team2 << " " << num_shoots << "\n";
            if (team2 > team1 + (10-num_shoots)/2){
                cout << "TEAM-B " << num_shoots << "\n";
                tie = false;
                break;
            }
            else if (team1 > team2 + (10-num_shoots+1)/2){
                cout << "TEAM-A " << num_shoots << "\n";
                tie = false;
                break;
            }
        }
        if (team1 == team2){
            for (int i = 10; i < l; i=i+2){
                num_shoots += 2;
                if (shoot[i]==1 && shoot[i+1] == 0){
                    cout << "TEAM-A " << num_shoots << "\n";
                    tie = false;
                    break;
                }
                else if (shoot[i]==0 && shoot[i+1] == 1){
                    cout << "TEAM-B " << num_shoots << "\n";
                    tie = false;
                    break;
                }
            }
        }
        if (tie){
            cout << "TIE\n";
        }
    }
    return 0;
}
