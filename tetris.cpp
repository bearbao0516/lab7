#include <iostream>
#include "Zblock.h"
#include "Oblock.h"
using namespace std;
int main()
{
 Z_Block z;
 z.paint();
 z.rotate();
 z.paint();
 z.right();
 z.paint();
 z.right();
 z.rotate();
 z.paint();
 O_Block o;
 o.paint();
 o.rotate();
 o.paint();
 o.right();
 o.paint();
 o.right();
 o.rotate();
 o.paint();
return 0;
 }
