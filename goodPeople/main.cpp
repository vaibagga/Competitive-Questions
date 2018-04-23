#include <bits/stdc++.h>
using namespace std;

int main(){
  	int N, K;
  	cin >> N >> K;
  	vector <double> radius;
  	int x, y;
  	for (int i = 0; i < N; i++){
    	cin >> x >> y;
      	radius.push_back(x * x + y * y);
    }
  	sort(radius.begin(), radius.end());
  	double ans = sqrt(radius[K - 1]);
  	cout << std::setprecision(7) << ans << "\n";

	// Write your code here

	return 0;
}
