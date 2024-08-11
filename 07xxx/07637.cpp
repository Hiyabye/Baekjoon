#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool conflict(const string &s, const string &t) {
  int a = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 2));
  int b = stoi(t.substr(0, 2)) * 60 + stoi(t.substr(3, 2));
  int c = stoi(s.substr(6, 2)) * 60 + stoi(s.substr(9, 2));
  int d = stoi(t.substr(6, 2)) * 60 + stoi(t.substr(9, 2));
  return (a <= b && b < c) || (a < d && d <= c) || (b <= a && a < d) || (b < c && c <= d);
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (conflict(v[i], v[j])) {
      cout << "conflict\n";
      return true;
    }
  }
  cout << "no conflict\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}