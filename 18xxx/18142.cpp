#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v(3);
  for (int i=0; i<3; i++) cin >> v[i];

  bool flag = false;
  for (int i=0; i<3; i++) {
    if (v[i] == "bubble" || v[i] == "tapioka") continue;
    cout << v[i] << " ";
    flag = true;
  }
  if (!flag) cout << "nothing";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}