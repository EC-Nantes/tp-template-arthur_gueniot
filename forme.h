#ifndef _FORME_HPP_
#define _FORME_HPP_

#include "pointT.h"

// Pour pouvoir déclarer la surcharge de l'affichage juste en dessous
template <typename T> class forme;

// Prototype de l'affichage
template <typename T>
std::ostream &operator<<(std::ostream &s, forme<T> const &f);

/**
Création de la classe forme
*/
template <typename T> class forme {
protected:
  pointT<T> centre;

public:
  forme(pointT<T> &p);

  // Les deux fonctions périmètre() et surface() sont a redéfinir dans les
  // classes filles donc déclarée en virtuelle pure ici
  virtual T perimetre() const = 0;
  virtual T surface() const = 0;

  friend std::ostream &operator<<<T>(std::ostream &s, forme<T> const &f);
};

/**
  Constructeur de la forme
*/
template <typename T> forme<T>::forme(pointT<T> &p) {
  // std::cout << "Creation de la forme" << std::endl; // DEBUG
  this->centre = p;
}

/**
Surcharge de l'opérateur d'affichage
*/
template <typename T>
std::ostream &operator<<(std::ostream &s, forme<T> const &f) {
  s << "Forme : " 
    << "\n\tType : " << typeid(f).name()
    << "\n\tCentre de la forme = " << f.centre
    << "\n\tPérimètre = " << f.perimetre()
    << "\n\tSurface = " << f.surface();
  return s;
}

#endif