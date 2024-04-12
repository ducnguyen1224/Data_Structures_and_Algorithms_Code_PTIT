#include<bits/stdc++.h>
using namespace std;
//tham khảo nhé 
string reverseWord(string word) {
    stack<char> s;
    for (char c : word) {
        s.push(c);
    }
    string reversedWord = "";
    while (!s.empty()) {
        reversedWord += s.top();
        s.pop();
    }
    return reversedWord;
}

string reverse(string ) {
    stringstream ss();
    string word;
    string reversed = "";
    while (ss >> word) {
        reversed += reverseWord(word) + " ";
    }
    return reversed;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << reverse(s) << "\n";
    }
    return 0;
}
