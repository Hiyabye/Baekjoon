#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, string> mp = {
  {"::::o::::", "1"},
  {"o:::::::o", "2"},
  {"::o:::o::", "2"},
  {"o:::o:::o", "3"},
  {"::o:o:o::", "3"},
  {"o:o:::o:o", "4"},
  {"o:o:o:o:o", "5"},
  {"ooo:::ooo", "6"},
  {"o:oo:oo:o", "6"}
};

void solve(void) {
  string a, b, c; cin >> a >> b >> c;

  cout << (mp.find(a+b+c) != mp.end() ? mp[a+b+c] : "unknown");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}