#include <iostream>
#include <string>
using namespace std;

class BigNum {
public:
  string num;

private:
  static string trim(string &s) {
    int idx = s.find_first_not_of('0');
    return idx != string::npos ? s.substr(idx) : "0";
  }

  static void padding(string &a, string &b) {
    if (a.length() < b.length()) a.insert(0, string(b.length() - a.length(), '0'));
    if (a.length() > b.length()) b.insert(0, string(a.length() - b.length(), '0'));
  }

  static string add(string a, string b) {
    if (a.length() <= 18 && b.length() <= 18) {
      return to_string(stoll(a) + stoll(b));
    }
    padding(a, b);

    string c = "";
    int carry = 0, sum = 0;
    for (int i = a.length() - 1; i >= 0; --i) {
      sum = (a[i] - '0') + (b[i] - '0') + carry;
      carry = sum / 10;
      c.insert(0, 1, (char)(sum % 10 + '0'));
    }
    if (carry) c.insert(0, 1, (char)(carry + '0'));

    return trim(c);
  }
  
public:
  BigNum(void) : num("0") {}
  BigNum(const string &s) : num(s) {}

  friend istream &operator>>(istream &is, BigNum &bn) {
    string s;
    is >> s;
    bn = BigNum(s);
    return is;
  }

  friend ostream &operator<<(ostream &os, const BigNum &bn) {
    os << bn.num;
    return os;
  }

  BigNum operator+(const BigNum &bn) const {
    return BigNum(add(this->num, bn.num));
  }
};

void solve(void) {
  BigNum a, b;
  cin >> a >> b;
  cout << a + b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}