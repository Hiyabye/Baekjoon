#include <iostream>
using namespace std;

void solve(void) {
  int n, h, w; cin >> n >> h >> w;

  while (n--) {
    char a, b; cin >> a >> b;
    if (a == 'Y' || w == 0) {
      cout << "Y"; h--; w++;
    } else {
      cout << "N";
    }
    cout << " ";
    if (b == 'Y' || h == 0) {
      cout << "Y"; w--; h++;
    } else {
      cout << "N";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}