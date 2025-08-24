#include <iostream>
#include <string>
using namespace std;

inline string calc(int n) {
  string s = "";
  for (int i=7; i>=0; i--) {
    s += (n & (1 << i) ? '1' : '0');
  }
  while (s[0] == '0') s.erase(s.begin());
  return s;
}

void solve(void) {
  int n, k; cin >> n >> k;

  string s = "0";
  for (int i=1; i<=127; i++) s += calc(i);

  for (int i=0; i<5; i++) {
    cout << s[n*i+k-1] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}