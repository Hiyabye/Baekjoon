#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  if (n & 1) return false;

  int idx = 0;
  for (int i=0; i<n; i++) {
    switch (idx) {
      case 0: if (s[i] == 'P' && i % 2 == 0) idx++; break;
      case 1: if (s[i] == 'A' && i % 2 == 1) idx++; break;
      case 2: if (s[i] == 'U' && i % 2 == 0) idx++; break;
      case 3: if (s[i] == 'L' && i % 2 == 1) idx++; break;
      default: break;
    }
  }
  return idx == 4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}