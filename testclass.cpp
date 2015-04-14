#include <iostream>
using namespace std;
class test
{
  public:
    static test* initial()
	{
	 // return new test;
	 test* t = new test;
	 return t;
	}
  private:
    test()
	{cout << "initial successful" <<endl;}
};

int main()
{
  test* t;
  t = test::initial();
  return 0;
  }
