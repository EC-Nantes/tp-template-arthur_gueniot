#ifndef _CARRE_HPP_
#define _CARRE_HPP_

#include "rectangle.h"

/**
Définition de la classe carré
*/
template <typename T> class carre : public rectangle<T> {
public:
  carre(pointT<T> p, T l);
};

/**
Constructeur de carre
*/
template<typename T>
carre<T>::carre(pointT<T> p, T l) : rectangle<T>(p, l, l) { }

#endif