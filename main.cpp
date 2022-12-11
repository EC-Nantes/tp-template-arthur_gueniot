#include <iostream>

#include "carre.h"
#include "pointT.h"
#include "rectangle.h"

using namespace std;

int main() {
  std::cout << "Hello World!\n";

  /*****************************************
   * Test de la classe point
   ****************************************/
  pointT<double> p1(1.5, 2.3);
  pointT<int> p2(3, 4);
  pointT<int> p_orig;
  pointT<double> p_recopie(p1);

  std::cout << "\n\n*************************************************" << std::endl;
  std::cout << "\nAffichage P1" << std::endl;
  cout << p1 << endl;

  std::cout << "\nAffichage P2" << std::endl;
  cout << p2 << endl;
  
  std::cout << "\nAffichage point créer par le constrcuteur par défaut" << std::endl;
  cout << p_orig << endl;

  std::cout << "\nAffichage point recopie de P1" << std::endl;
  cout << p_recopie << endl;

  std::cout << "\nTranslater P2" << std::endl;
  p2.translater(1, 1);
  cout << p2 << endl;

  std::cout << "\nSet une nouvelle valeur de P2" << std::endl;
  p2.setX(2);
  p2.setY(3);
  
  std::cout << "\nAffichage en utilisant la méthode get" << std::endl;
  cout << "\nValeur get X de P2 : " << p2.getX() << endl;
  cout << "Valeur get Y de P2 : " << p2.getY() << endl;

  /*****************************************
   * Test de la classe forme
   * ATTENTION le test a été fait en retirant les fonctions virtuelles pures pour
   * pouvoir instancier un objet forme
   ****************************************/
  // forme<int> f1(p2);
  // cout << f1 << endl;

  /*****************************************
   * Test de la classe Rectangle
   ****************************************/
  std::cout << "\n\n*************************************************" << std::endl;
  std::cout << "\nAffichage du rectangle 1 à partir du centre p1" << std::endl;
  rectangle<double> rect1(p1, 20.0, 15.0);
  cout << rect1 << endl;

  // cout << "Perimetre rectangle 1 : " << rect1.perimetre() << endl;  // DEBUG
  // cout << "Surface rectangle 1 : " << rect1.surface() << endl;  // DEBUG

  std::cout << "\nAffichage du rectangle 2 à partir du centre p2" << std::endl;
  rectangle<int> rect2(p2, 10, 5);
  cout << rect2 << endl;

  std::cout << "\nAffichage du rectangle 2 après translation de p2" << std::endl;
  p2.translater(1, 1);
  cout << p2 << endl;
  cout << rect2 << endl;

  // cout << "Perimetre rectangle 2 : " << rect2.perimetre() << endl;  // DEBUG
  // cout << "Surface rectangle 2 : " << rect2.surface() << endl;  // DEBUG
  
  /*****************************************
   * Test de la classe carre
   ****************************************/
  std::cout << "\n\n*************************************************" << std::endl;
  pointT<int> p3(10, 20);
  std::cout << "\nAffichage d'un carré 1 à partir du centre p3" << std::endl;
  carre<int> carre1(p3, 2);
  cout << carre1 << endl;
}