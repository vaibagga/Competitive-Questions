#include <iostream>

using namespace std;

int main()
{
    int N,Q;
    cin >> N >> Q;
    int A[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int j = 0; j < Q; j++){
        int quer_type, I, K;
        cin >> quer_type >> I >> K;
        if (quer_type == 1)
            A[I] = K;
        if (quer_type == 2)

    }


    }
}
