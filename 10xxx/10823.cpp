#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void solve(void) {
  string s;

  string str = "";
  while (cin >> s) str += s;
  stringstream ss(str);

  int ans = 0;
  while (getline(ss, s, ',')) ans += stoi(s);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}