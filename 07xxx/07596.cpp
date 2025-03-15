#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool cmp(string a, string b) {
  for (char &c : a) if (isupper(c)) c = tolower(c);
  for (char &c : b) if (isupper(c)) c = tolower(c);
  return a < b;
}

bool solve(int idx) {
  int n; cin >> n; cin.ignore();
  if (n == 0) return false;

  vector<string> v(n);
  for (int i=0; i<n; i++) getline(cin, v[i]);
  sort(v.begin(), v.end(), cmp);

  cout << idx << "\n";
  for (string &s : v) cout << s << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}