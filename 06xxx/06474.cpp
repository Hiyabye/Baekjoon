#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, char> mp = {
  {'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'}, {'L', 'J'},
  {'M', 'M'}, {'O', 'O'}, {'S', '2'}, {'T', 'T'}, {'U', 'U'}, {'V', 'V'},
  {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'}, {'Z', '5'}, {'1', '1'}, {'2', 'S'},
  {'3', 'E'}, {'5', 'Z'}, {'8', '8'}
};

inline bool palindrome(const string &s) {
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

inline bool mirror(const string &s) {
  for (int i=0; i<s.length()/2+1; i++) {
    if (mp.find(s[i]) == mp.end() || mp[s[i]] != s[s.length()-i-1]) return false;
  }
  return true;
}

void solve(const string &s) {
  bool p = palindrome(s), m = mirror(s);
  cout << s << " -- ";
  if (p && m) cout << "is a mirrored palindrome.";
  else if (p) cout << "is a palindrome.";
  else if (m) cout << "is a mirrored string.";
  else cout << "is not a palindrome.";
  cout << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (cin >> s) solve(s);
  return 0;
}