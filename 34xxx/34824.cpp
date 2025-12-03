#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  int y = 0, k = 0;
  for (int i=1; i<=n; i++) {
    string s; cin >> s;
    if (s == "yonsei") y = i;
    else if (s == "korea") k = i;
  }
  return y < k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yonsei Won!" : "Yonsei Lost...");
  return 0;
}