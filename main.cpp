#include <iostream>
#include <string>
using namespace std;

#include "image.h"
#include "chargesauve.h"
#include "outils.h"

int main()
{
  string imgPath;
  int seuil;
  cout << "Indiquer le chemin d'accès relatif" << endl;
  cin >> imgPath;
  cout << "Indiquer le seuil de comparaison" << endl;
  cin >> seuil;
  seuillage(imgPath, seuil);
}