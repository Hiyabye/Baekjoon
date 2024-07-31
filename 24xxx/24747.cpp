#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline string check(const string &a, const string &b) {
  if (a == b) return "WINNER";
  string ret = "";
  for (int i=0; i<b.length(); i++) {
    ret += (a[i] == b[i] ? 'G' : (a.find(b[i]) != string::npos ? 'Y' : 'X'));
  }
  return ret;
}

void solve(void) {
  string s; cin >> s;
  vector<string> v(7);
  for (int i=0; i<7; i++) cin >> v[i];

  for (int i=0; i<6; i++) {
    cout << check(s, v[i]) << "\n";
    if (s == v[i]) return;
  }
  cout << (s == v[6] ? "WINNER" : "LOSER");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}