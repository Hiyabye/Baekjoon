#include <iostream>
#include <vector>
using namespace std;

struct Color {
  int r, g, b;
  Color(void) {}
  Color(int r, int g, int b): r(r), g(g), b(b) {}
};

inline int calc(const Color &a, const Color &b) {
  return (a.r-b.r)*(a.r-b.r) + (a.g-b.g)*(a.g-b.g) + (a.b-b.b)*(a.b-b.b);
}

void solve(void) {
  vector<Color> v(16);
  for (int i=0; i<16; i++) cin >> v[i].r >> v[i].g >> v[i].b;

  Color c; cin >> c.r >> c.g >> c.b;
  while (~c.r || ~c.g || ~c.b) {
    Color ans = v[0];
    for (int i=1; i<16; i++) {
      if (calc(c, v[i]) < calc(c, ans)) {
        ans = v[i];
      }
    }
    cout << "(" << c.r << "," << c.g << "," << c.b << ") maps to (" << ans.r << "," << ans.g << "," << ans.b << ")\n";
    cin >> c.r >> c.g >> c.b;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}