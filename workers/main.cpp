#include <bits/stdc++.h>

using namespace std;

int main(){
    int numWorker;
    cin >> numWorker;
    vector  <int> typer, author, both;
    vector <int> cost;
    int types;
    for (int i = 0; i < numWorker; i++){
        int cost1;
        cin >> cost1;
        cost.push_back(cost1);
    }
    for (int i = 0; i < numWorker; i++){
        cin >> types;
        if (types == 1){
            typer.push_back(cost[i]);
        }
        if (types == 2){
            author.push_back(cost[i]);
        }
        if (types == 3){
            both.push_back(cost[i]);
        }
    }
    if (typer.empty() || author.empty())
        cout << *min_element(both.begin(), both.end());
    else if (both.empty())
        cout << *min_element(typer.begin(), typer.end()) + *min_element(author.begin(), author.end());
    else
        cout << min (*min_element(both.begin(), both.end()), *min_element(typer.begin(), typer.end()) + *min_element(author.begin(), author.end()));
    return 0;
}
