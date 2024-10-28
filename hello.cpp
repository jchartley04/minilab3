#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;
  cout << "Changes to hello from BRANCH" << endl;
  MyClass a(5);
  cout << a.getX() << endl;
}
