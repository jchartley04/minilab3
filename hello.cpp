#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;
  cout << "I am now editing hello in myBranch. After the merge." << endl;
  MyClass a(5);
  cout << a.getX() << endl;
}
