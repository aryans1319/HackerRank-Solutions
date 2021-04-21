#include<bits/stdc++.h>
using namespace std;


int main(){
    int q;
    cin>>q;
    while(q--){
    string s,hacker = "hackerrank";
    cin >> s;
        int res = 0;
        for(int j = 0; j < s.length(); j++){
            if(res < hacker.length() && j < s.length() && hacker[res] == s[j])
                res++;
        }

        if(res == hacker.length())
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}