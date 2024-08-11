#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> mp = {
  {"White", 255 + (255 << 8) + (255 << 16)},
  {"Silver", 192 + (192 << 8) + (192 << 16)},
  {"Gray", 128 + (128 << 8) + (128 << 16)},
  {"Black", 0 + (0 << 8) + (0 << 16)},
  {"Red", 255 + (0 << 8) + (0 << 16)},
  {"Maroon", 128 + (0 << 8) + (0 << 16)},
  {"Yellow", 255 + (255 << 8) + (0 << 16)},
  {"Olive", 128 + (128 << 8) + (0 << 16)},
  {"Lime", 0 + (255 << 8) + (0 << 16)},
  {"Green", 0 + (128 << 8) + (0 << 16)},
  {"Aqua", 0 + (255 << 8) + (255 << 16)},
  {"Teal", 0 + (128 << 8) + (128 << 16)},
  {"Blue", 0 + (0 << 8) + (255 << 16)},
  {"Navy", 0 + (0 << 8) + (128 << 16)},
  {"Fuchsia", 255 + (0 << 8) + (255 << 16)},
  {"Purple", 128 + (0 << 8) + (128 << 16)}
};

inline int dist(int r1, int g1, int b1, int r2, int g2, int b2) {
  return (r1 - r2) * (r1 - r2) + (g1 - g2) * (g1 - g2) + (b1 - b2) * (b1 - b2);
}

bool solve(void) {
  int r, g, b; cin >> r >> g >> b;
  if (r == -1 && g == -1 && b == -1) return false;

  string ans = ""; int d = 1 << 30;
  for (const auto& [name, color] : mp) {
    int dr = color & 255, dg = (color >> 8) & 255, db = (color >> 16) & 255;
    int dd = dist(r, g, b, dr, dg, db);
    if (dd < d) {
      d = dd;
      ans = name;
    }
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}