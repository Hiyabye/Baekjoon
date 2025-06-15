#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int boj(const string &s) {
  if (s.substr(0, 7) != "boj.kr/") return 0;
  return stoi(s.substr(7));
}

inline bool cmp(const string &a, const string &b) {
  if (boj(a) || boj(b)) return boj(a) < boj(b);
  if (a.length() != b.length()) return a.length() < b.length();
  return a < b;
}

void solve(void) {
  int n; cin >> n; cin.ignore();
  vector<string> v(n);
  for (int i=0; i<n; i++) getline(cin, v[i]);
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << v[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}