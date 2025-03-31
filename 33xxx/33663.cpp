#include <algorithm>
#include <iostream>
using namespace std;

inline double V(double R, double G, double B) {
  return max({R, G, B});
}

inline double S(double R, double G, double B) {
  return 255.0 * (V(R, G, B) - min({R, G, B})) / V(R, G, B);
}

inline double H(double R, double G, double B) {
  if (V(R, G, B) == R) {
    double ret = 60.0 * (G - B) / (V(R, G, B) - min({R, G, B}));
    if (ret < 0) ret += 360;
    return ret;
  } else if (V(R, G, B) == G) {
    double ret = 120.0 + 60.0 * (B - R) / (V(R, G, B) - min({R, G, B}));
    if (ret < 0) ret += 360;
    return ret;
  } else {
    double ret = 240.0 + 60.0 * (R - G) / (V(R, G, B) - min({R, G, B}));
    if (ret < 0) ret += 360;
    return ret;
  }
}

bool solve(void) {
  double hlo, hhi; cin >> hlo >> hhi;
  double slo, shi; cin >> slo >> shi;
  double vlo, vhi; cin >> vlo >> vhi;
  double R, G, B; cin >> R >> G >> B;

  return (
    (hlo <= H(R, G, B) && H(R, G, B) <= hhi) &&
    (slo <= S(R, G, B) && S(R, G, B) <= shi) &&
    (vlo <= V(R, G, B) && V(R, G, B) <= vhi)
  );
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Lumi will like it." : "Lumi will not like it.");
  return 0;
}