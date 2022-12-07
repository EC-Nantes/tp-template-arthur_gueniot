#include "pointT.h"

template <typename T> class forme {
protected:
  pointT<T> centre;

public:
  int perimetre() = 0;
  int surface() = 0;
};