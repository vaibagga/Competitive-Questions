#include <iostream>

using namespace std;

bool chanceCollision(bool dir, int pos, int len){
    if ((dir == 0 && pos > len) || (pos + len > 0 && dir == 1 && pos < 0))
        return false;
    return true;
}
// position after some time 't'



float positionAfterTime(float position, float velocity, float time, bool dir){
    float finalPosition;
    if (dir == 1)
        finalPosition = position + velocity * time;
    if (dir == 0)
        finalPosition = position - velocity * time;
    return finalPosition;
}


float solution(int N, int S, int Y, float speedCar[], float pos[], float L[], bool dir[]){
    float wait = 0;
    for (int i = 0; i < N; i++){
        float position = positionAfterTime(pos[i], speedCar[i], wait + i * (float) Y /  S, dir[i]);   // current position of car
        if (!(chanceCollision(dir[i], position, L[i])))
            continue;
        else if ((position + L[i])* S > Y * speedCar[i] && dir[i] == 0 && position > 0)
            continue;
        else
            wait += (position + L[i])/speedCar[i];
    }
    return wait + N * (float) Y / S;



}

int main()
{
    int T;
    cin >> T;
    while (T--){
        /*
        N = number of lanes
        S = speed of each car
        Y = width of each lane
        */
        int N, S, Y;
        cin >> N >> S >> Y;
        float speedCar[N];  // speed of each car
        for (int i = 0; i < N; i++){
            cin >> speedCar[i];
        }
        bool D[N];  //direction of motion of each car 1=positive y 0 = negative y
        for (int i = 0; i < N; i++){
            cin >> D[i];
        }
        float pos[N]; //position of each car on y axis
        for (int i = 0; i < N; i++){
            cin >> pos[i];
        }
        float L[N]; // length of each car
        for (int i = 0; i < N; i++){
            cin >> L[i];
        }
        cout << solution(N, S, Y, speedCar, pos, L, D) << "\n";
    }
    return 0;
}
