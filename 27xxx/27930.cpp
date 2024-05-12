#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  int y = 0, k = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == "YONSEI"[y]) y++;
    if (y == 6) return true;
    if (s[i] == "KOREA"[k]) k++;
    if (k == 5) return false;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YONSEI" : "KOREA");
  return 0;
}