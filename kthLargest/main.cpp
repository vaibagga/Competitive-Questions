#include <bits/stdc++.h>
using namespace std;
int kthLargest(vector <int> v, int k){
    sort(v.begin(), v.end(), greater <int> ());
    return v[k - 1];
}
int main(){
    int N, K;
    cin >> N;
    vector <int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    cin >> K;
    cout << kthLargest(v, K) << "\n";
    return 0;
}
