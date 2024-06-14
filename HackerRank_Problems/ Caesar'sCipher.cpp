// problem link
// https://www.hackerrank.com/challenges/caesar-cipher-1/problem?isFullScreen=true



#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    string str;
    cin >> n >> str >> k;

    string caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string small = "abcdefghijklmnopqrstuvwxyz";

    string res = "";

    for(char i : str){
        if(i >= 65 && i <= 90){
            int val = i - 65;
            val += k;
            res += caps[val%26];
        }else if(i >= 97 && i <= 122){
            int val = i - 97;
            val += k;
            res += small[val%26];
        }else{
            res += i;
        }
    }

    cout << res << endl;
}
