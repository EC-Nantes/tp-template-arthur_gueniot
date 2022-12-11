#ifndef _POINTT_HPP_
#define _POINTT_HPP_

#include <ostream>

template <typename T> class pointT;

template <typename T>
std::ostream &operator<<(std::ostream &s, pointT<T> const &p);

template <typename T> class pointT {
protected:
  T x;
  T y;

public:
  pointT();
  pointT(T x, T y);
  pointT(const pointT &p);
  T getX() const;
  void setX(T x);
  T getY() const;
  void setY(T x);

  void translater(T xt, T yt);

  friend std::ostream &operator<<<T>(std::ostream &s, pointT<T> const &p);
};

/**
Constructeur par défaut créer le point à l'origine
*/
template <typename T> pointT<T>::pointT() {
  // std::cout << "Creation d'un point par défaut" << std::endl; // DEBUG
  this->x = 0;
  this->y = 0;
}

/**
Constructeur pour définir directement les valeur du point central (x et y)
*/
template <typename T> pointT<T>::pointT(T x, T y) {
  // std::cout << "Creation d'un point avec x et y" << std::endl; // DEBUG
  this->x = x;
  this->y = y;
}

/**
Constructeur par recopie de point
*/
template <typename T> pointT<T>::pointT(pointT const &p) {
  // std::cout << "Creation d'un point par recopie" << std::endl; // DEBUG
  this->x = p.x;
  this->y = p.y;
}

/**
Accesseur de la position en absisce
*/
template <typename T> T pointT<T>::getX() const { return this->x; }

/**
Mutateur de la position en ordonnée
*/
template <typename T> void pointT<T>::setX(T x) { this->x = x; }

/**
Accesseur de la position en ordonnée
*/
template <typename T> T pointT<T>::getY() const { return this->y; }

/**
Mutateur de la position en absisce
*/
template <typename T> void pointT<T>::setY(T y) { this->y = y; }

/**
Translater un point en abscisse et ordonnée
*/
template <typename T> void pointT<T>::translater(T xt, T yt) {
  this->x += xt;
  this->y += yt;
  std::cout << "translater: x = " << this->x << " y = "<< this->y << std::endl;
}

/**
Surcharge opérateur d'affichage
*/
template <typename T>
std::ostream &operator<<(std::ostream &s, pointT<T> const &p) {
  s << "Point en x = " << p.x << " et y = " << p.y;
  return s;
}

#endif