#include <iostream>
#include <map>
#include <string>
using namespace std;

bool palindrome(const string &s) {
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

void solve(int idx) {
  int p; cin >> p;
  map<char, char> m;
  while (p--) {
    char a, b; cin >> a >> b;
    m[a] = b;
  }

  cout << "Test case #" << idx << ":\n";

  int q; cin >> q;
  while (q--) {
    string s; cin >> s;
    cout << s << " ";
    for (char &c : s) if (m.find(c) != m.end()) c = m[c];
    cout << (palindrome(s) ? "YES" : "NO") << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}