#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n; n--;

  string ans[6] = {
    "57429 06381",
    "58239 06471",
    "75249 08361",
    "95742 10638",
    "95823 10647",
    "97524 10836"
  };
  cout << ans[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}

