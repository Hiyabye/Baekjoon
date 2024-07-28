#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  string s = "";
  for (int i=0; i<26; i++) s += 'a' + i;
  
  while (n--) {
    int a; cin >> a;
    cout << s[a];
    s = s[a] + s.substr(0, a) + s.substr(a+1);
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}