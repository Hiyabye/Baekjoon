#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool palindrome(string s) {
  int n = s.length();
  for (int i=0; i<n/2; i++) {
    if (s[i] != s[n-i-1]) return false;
  }
  return true;
}

void solve(void) {
  int k; cin >> k;
  vector<string> v(k);
  for (int i=0; i<k; i++) cin >> v[i];

  for (int i=0; i<k; i++) {
    for (int j=0; j<k; j++) {
      if (i == j) continue;
      if (palindrome(v[i] + v[j])) {
        cout << v[i] + v[j] << "\n";
        return;
      }
    }
  }
  cout << "0\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}