#include <iostream>
#include <random>
#include <set>
using namespace std;

int getNum(char c) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(1, 10000);

  set<int> s;
  int ret = dis(gen);
  s.insert(ret);

  while (s.size() < 10000) {
    cout << "? " << c << " " << ret << endl;
    int resp; cin >> resp;
    if (resp == 1) return ret;
    while (s.find(ret) != s.end()) ret = dis(gen);
    s.insert(ret);
  }
  return -1;
}

void solve(void) {
  int a = getNum('A');
  int b = getNum('B');

  cout << "! " << a + b << endl;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}