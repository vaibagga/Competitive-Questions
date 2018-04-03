#include <bits/stdc++.h>

using namespace std;
long long digitSum(long long x){
        if (x < 10){
        	return x;
        }
        if (x = 1000000)
        	return 1;
        long long sum = 0;
        long long dig[6] = {x%10, (x/10)%10,(x/100)%10,(x/1000)%10,(x/10000)%10,(x/100000)%10};
        for (int i = 0; i < 6; i++){
        	if (dig[i]%2)
        		sum+=dig[i];
        	else
        		sum-=dig[i];
        }
        return abs(sum);
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        long long N;
        cin >> N;
        long long total = 0;
        for (long long i = 2; i <= N+1; i++){
            total += (i-1)*digitSum(i);
        }
        for (long long i = N+2; i <= 2*N ; i++){
            total += (2*N+1-i)*digitSum(i);
        }

        cout << digitSum(121) << "\n";
    }
    return 0;
}
