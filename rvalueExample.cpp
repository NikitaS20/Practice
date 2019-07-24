// rvalue example

#include <iostream>
#include <utility>

using namespace std;

int add(int &x)  // & lvalue reference
{
  std::cout<<"\nFuncion call: add(int &x)";
  return x+x;
}

int add(int &&x)  // && rvalue reference
{
  std::cout<<"\nFuncion call: add(int &&x)";
  return x+x;
}

int main()
{
  int value = 5;

  int ans = add(value); // Call to add(int &x)
  std::cout << "\n Answer = " << ans << '\n';

  value = 7;
  int ans2 = add(std::move(value)); // Call to add(int &&x)
  // std::move cast its argument to an rvalue
  std::cout << "\n Answer2 = " << ans2 << '\n';

  return 0;
}