#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int OX(const string& s){
    int mask = 0;
    for(int i =0 ; i < s.size(); i++){
        mask = (mask << 1) | (s[i] == 'o');
    }
    return mask;
}
int Hunga(int N, int M, const vector<string>& P){
    vector<int> mask(N);
    for(int i = 0; i < N; ++i){
        mask[i] = OX(P[i]);
    }
    int All = (1 << M) - 1; 
}
int main(){
    int N, M;
    cin >> N >> M;
    vector<string> P;
    for(int i=0; i<N; i++){
        cin >> P[i];
    }
    

    return 0;
}