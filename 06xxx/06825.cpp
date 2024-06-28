#include <iostream>
using namespace std;

void solve(void) {
  double w, h; cin >> w >> h;

  cout << (w/(h*h) > 25 ? "Overweight" : (w/(h*h) < 18.5 ? "Underweight" : "Normal weight"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}