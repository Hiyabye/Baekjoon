#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &s) {
  int n = s.length();
  for (int i=0; i<n/2; i++) {
    if (s[i] != s[n-i-1]) return false;
  }
  return true;
}

bool solve(const string &s) {
  int n = s.length();
  return n == 1 || (check(s) && solve(s.substr(0, n/2)) && solve(s.substr((n+1)/2)));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  cout << (solve(s) ? "AKARAKA" : "IPSELENTI");
  return 0;
}