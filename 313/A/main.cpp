#include <bits/stdc++.h>
using namespace std;
long long int n, last, bef_last, res;


int main() {
  cin >> n;
  if (n > 0) {
    cout << n;
  } else {
    n       *= -1LL;
    last     = n - ((n / 10LL) * 10LL);
    bef_last = floor(n / 10LL) - ((n / 10LL) / 10LL) * 10LL;
    //cout << last << bef_last << endl;
    if (last >= bef_last) {
      res = n / 10LL * -1LL;
      cout << res;
    } else {
      res  = floor(floor(n / 10LL) / 10LL);
      res  = res * 10LL + last;
      res *= -1LL;
      cout << res << "\n";
    }
  }
  return(0);
}