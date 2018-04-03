        #include <bits/stdc++.h>

        using namespace std;
        int xor_num(int A[],int I,int X){
        	int count = 0;
        	for (int i = 0; i < I; i++){
        		int x = 0;
        		for (int j = 0; j < i; j++){
        			x = x ^ A[j];
        			if (x==X)
        				count++;
        		}
        	}
        	return count;
        }
        int main(){
		int N, Q;
                cin >> N >> Q;
               	int arr[N];
                for (int i = 0; i < N; i++){
                   	cin >> arr[i];
                }
                for (int i = 0; i < Q; i++){
                	int type_quer, I, X;
                	cin >> type_quer >> I >> X;
                	if (type_quer == 1)
                		arr[I] = X;
                	else
                		cout << xor_num(arr,I,X) << "\n";
                }

            return 0;
        }
