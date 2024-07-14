#include <iostream>
#include <string>
using namespace std;

inline char change(char c) {
  if ('A' <= c && c <= 'Z') return c - 'A' + 'a';
  else return c - 'a' + 'A';
}

void solve(void) {
  int n, k; cin >> n >> k;
  string t; cin >> t;

  for (int i=0; i<k-1; i++) cout << t[i];
  for (int i=k-1; i<n; i++) cout << change(t[i]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}