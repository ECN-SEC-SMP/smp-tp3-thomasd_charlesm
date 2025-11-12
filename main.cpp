#include <iostream>
#include <string>
using namespace std;

#include "image.h"
#include "chargesauve.h"
#include "outils.h"

int main()
{
  string chemin = "images/";
  int seuil;
  cout << "Indiquer la première image" << endl;
  string img1 = cheminImage();
  cout << "Indiquer la seconde image" << endl;
  string img2 = cheminImage();
  difference(img1, img2);
  return 0;
}