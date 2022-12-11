#ifndef _RECTANGLE_HPP_
#define _RECTANGLE_HPP_

#include "forme.h"

// Pour pouvoir déclarer la surcharge de l'affichage juste en dessous
template <typename T> class rectangle;

// Prototype de l'affichage
template <typename T>
std::ostream &operator<<(std::ostream &, rectangle<T> const &);

/**
Définition de la classe rectangle héritée de forme
*/
template <typename T> class rectangle : public forme<T> {
protected:
  T L;
  T H;

public:
  rectangle(pointT<T> &p, T l, T h);
  pointT<T> getCentre() const;
  T getL() const;
  T getH() const;
  T perimetre() const;
  T surface() const;

  friend std::ostream &operator<<<T>(std::ostream &, rectangle const &);
};

/**
Constructeur de rectangle
*/
template <typename T>
rectangle<T>::rectangle(pointT<T> &p, T l, T h) : forme<T>(p) {
  this->L = l;
  this->H = h;
}

/**
Accesseur pour la longueur du carré
*/
template <typename T> T rectangle<T>::getL() const { return this->L; }

/**
Accesseur pour la hauteur du carré
*/
template <typename T> T rectangle<T>::getH() const { return this->H; }

/**
Accesseur au point du centre du carré
*/
template <typename T> pointT<T> rectangle<T>::getCentre() const {
  return this->centre;
}

/**
calculer le périmètre du carré
*/
template <typename T> T rectangle<T>::perimetre() const {
  return (2 * this->L + 2 * this->H);
}

/**
calculer la surface du carré
*/
template <typename T> T rectangle<T>::surface() const {
  return (this->L * this->H);
}

/**
Surcharge de l'opérateur d'affichage
*/
template <typename T>
std::ostream &operator<<(std::ostream &o, rectangle<T> const &R) {
  const forme<T> *form = &R;
  o << *form
    << "\n\tLongueur : " << R.H
    << "\n\tLargeur : " << R.L ;
  return o;
}

#endif