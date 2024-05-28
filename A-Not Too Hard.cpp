#include <iostream>
using namespace std;

int main() {
    int N, X, Ans = 0;
    
    // N을 먼저 입력받아야 합니다.
    cin >> N >> X;

    // N을 입력받은 후에 배열을 동적으로 할당합니다.
    int S[N];

    // N개의 숫자를 배열에 입력받습니다.
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }

    // 배열의 요소들을 검사하고 X보다 작거나 같은 값을 Ans에 더합니다.
    for (int j = 0; j < N; ++j) {
        if (S[j] <= X) {
            Ans += S[j];
        }
    }

    // 결과를 출력합니다.
    cout << Ans << endl;

    return 0;
}
