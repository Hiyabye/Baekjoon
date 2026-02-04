#include <cctype>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, string> mp = {
  {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
  {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
  {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
  {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
  {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
  {'Z', "--.."}, {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
  {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."},
  {'9', "----."}
};

bool solve(void) {
  string s; getline(cin, s);

  string t = "";
  for (char c : s) {
    if (isalpha(c)) c = toupper(c);
    if (mp.find(c) == mp.end()) continue;
    t += mp[c];
  }

  int n = t.length();
  if (n == 0) return false;
  for (int i=0; i<n/2; i++) {
    if (t[i] != t[n-i-1]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}