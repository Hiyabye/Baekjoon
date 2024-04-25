#include <iostream>
#include <string>
using namespace std;

inline string rev(const string &s) {
  string t = "";
  for (int i=s.length()-1; i>=0; i--) t += s[i];
  return t;
}

void solve(void) {
  string a, b; cin >> a >> b;

  cout << stoi(rev(to_string(stoi(rev(a)) + stoi(rev(b))))) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}