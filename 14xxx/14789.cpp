#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  string s; int k; cin >> s >> k;

  int ans = 0;
  for (int i=0; i<s.length()-k+1; i++) {
    if (s[i] != '-') continue;
    for (int j=i; j<i+k; j++) {
      s[j] = (s[j] == '-') ? '+' : '-';
    }
    ans++;
  }
  cout << "Case #" << idx << ": " << ((s.find('-') != string::npos) ? "IMPOSSIBLE" : to_string(ans)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}