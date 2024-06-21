#include <iostream>
#include <string>

using namespace std;

string check(const string& s, const string& t){
    if (s == "AtCoder" && t == "Land") {
        return "Yes";
    } else {
        return "No";
    }


}



int main(){
    string s, t;
    cin >> s >> t;
    cout <<check(s,t) << endl;


    return 0;
}