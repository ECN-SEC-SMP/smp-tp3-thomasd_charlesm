#include <string>

using namespace std;

string cheminImage();

void seuillage(string Image, int seuil);

void difference(string Image1, string Image2);

void erosion();

struct t_Structurant // question 2
{
  int w; // largeur élement structurant
  int h; // hauteur élément structurant
  int centreW;
  int centreH;    // coordonées centre
  t_MatEnt forme; // forme
};
