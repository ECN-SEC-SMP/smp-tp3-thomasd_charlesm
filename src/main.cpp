#include <iostream>
#include <string>
#include "image.h"
#include "chargesauve.h"
#include "outils.h"

using namespace std;

int main()
{
  string imgPath;
  int seuil;
  cin >> imgPath;
  cin >> seuil;
  seuillage(imgPath, seuil);
}