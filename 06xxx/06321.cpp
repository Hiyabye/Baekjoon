#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  string s; cin >> s;
  cout << "String #1\n";
  for (int i=0; i<s.length(); i++) {
    cout << (char)((s[i]-'A'+1)%26+'A');
  }
  cout << "\n";
  for (int i=2; i<=n; i++) {
    string s; cin >> s;

    cout << "\nString #" << i << "\n";
    for (int j=0; j<s.length(); j++) {
      cout << (char)((s[j]-'A'+1)%26+'A');
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}