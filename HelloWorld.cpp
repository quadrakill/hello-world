#include "HelloWorld.h"
#include <iostream>

void HelloWorld::hello() {
  std::cout << "Hello World!" << std::endl;
}

#include <iostream>

class HelloWorld

{ public:
void hello() 
{
  std::cout << "Hello World!" << std::endl;
}
} ;
int main()
{
	HelloWorld cd;
	cd.hello();
} 
