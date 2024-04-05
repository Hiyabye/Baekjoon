#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  bool ans = true;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    if (s != "mumble" && stoi(s) != i+1) ans = false;
  }
  cout << (ans ? "makes sense" : "something is fishy");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}