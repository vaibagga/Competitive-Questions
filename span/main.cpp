#include <bits/stdc++.h>

using namespace std;

int* stockSpan(int *price, int size) {
  	int *result = new int[size];
  	stack <int> s;
  	s.push(0);
  	result[0] = 1;
  	for (int i = 1; i < size; i++){
      while (!s.empty() && (price[s.top()] < price[i])){
		s.pop();
      }
      if (s.empty())
        result[i] = 1 + i;
      else
        result[i] = i - s.top();
      s.push(i);
    }
  	return result;
}

int main()
{
    int N;
    cin >> N;
    int cost[N];
    for (int i = 0; i < N; i++)
        cin >> cost[i];
    int *ptr = stockSpan(cost, N);
    for (int i = 0; i < N; i++)
        cout << *(ptr + i) << " ";
    return 0;
}
