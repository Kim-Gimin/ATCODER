#include <iostream>


using namespace std;

int main(){
    int N, A, T;


    cin >> N >> A;

    int ans[N];
    for(int i = 0; i < N; i++){
        ans[i] = 0;
        cin >> T;
        if (i==0) {
            ans[i] += T+A;
        } else {
            if (ans[i-1]>T) {
                ans[i] += ans[i-1]+A;
            } else {
                ans[i] += T+A;
            }
        }
        cout << ans[i] << endl;
    }
    
    return 0;
}