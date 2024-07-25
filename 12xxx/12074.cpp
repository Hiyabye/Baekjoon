#include <iostream>
#include <string>
using namespace std;

inline string precompute(void) {
  string ret = "0";
  while (ret.length() < 100000) {
    ret += '0';
    for (int i=ret.length()-2; i>=0; i--) {
      ret += (ret[i] == '0' ? '1' : '0');
    }
  }
  return ret;
}

void solve(const string &s, int idx) {
  int n; cin >> n;

  cout << "Case #" << idx << ": " << s[n-1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s = precompute();

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(s, i);
  return 0;
}