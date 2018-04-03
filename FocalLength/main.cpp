#include <bits/stdc++.h>
using namespace std;
int FocalLength(float radius, string mirrorType){
    if (mirrorType == "convex")
        return -ceil(radius/2);
    else
        return radius/2;
}
int main() {
	int T;
	cin >> T;
	while(T--){
	    string mirror;
	    float radius;
	    cin >> mirror >> radius;
	    cout << FocalLength(radius, mirror) << "\n";
	}
	return 0;
}
