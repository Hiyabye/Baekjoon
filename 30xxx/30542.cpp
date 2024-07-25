#include <iostream>
#include <string>
using namespace std;

inline bool palindrome(const string &s) {
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

bool solve(void) {
  string s; getline(cin, s);

  string t = "";
  for (char c : s) {
    if ('a' <= c && c <= 'z') {
      t += c;
    } else if ('A' <= c && c <= 'Z') {
      t += c - 'A' + 'a';
    }
  }

  for (int i=0; i<t.length()-1; i++) {
    for (int j=i+1; j<t.length(); j++) {
      if (palindrome(t.substr(i, j-i+1))) return true;
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Palindrome" : "Anti-palindrome");
  return 0;
}