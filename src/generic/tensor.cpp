#include <cstdlib>
#include <iostream>
#include <list>
#include <string>

#include "tensor.h"

using namespace std;

string AbstractTensor::show() const
{
  if (this->child)
    {
      AbstractObject* child_ptr = this->child;
      AbstractObject child = *child_ptr;
      string child_repr = child.show();

      return "Tensor > " + child_repr;
    }
  else
    {
      return "Tensor";
    }
}