#include <iostream>

int main()
{
  int a = 0, b = 0, max;
  std::cin >> a >> b;
  if (a > b)
  {
    max = a;
  }
  else
  {
    max = b;
  }
  if (a == b && a == 1)
  {
    std::cout << 1 << '/' << 1;
  }
  else
  {
    int result = 7 - max;
    if (result % 3 == 0)
    {
      std::cout << result / 3 << '/' << 2;
    }
    else if (result % 2 == 0)
    {
      std::cout << result / 2 << '/' << 3;
    }
    else
    {
      std::cout << result << '/' << 6;
    }
  }
  return 0;
}