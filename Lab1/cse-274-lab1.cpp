// classes example
#include <iostream>
#include"rectangle.h"
using namespace std;


int main () {
  Rectangle rect;

  Rectangle *pRect;

  pRect=&rect;
 cout<<"area for pointer " << pRect->area()<<endl;
 cout<<"memory location for rect"<<pRect<<endl;
}
