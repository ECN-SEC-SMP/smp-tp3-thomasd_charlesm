#include <string>
#include <cmath>
#include <iostream>
#include "image.h"
#include "chargesauve.h"
#include "outils.h"

using namespace std;

string cheminImage()
{
  string imgPath;
  cin >> imgPath;
  return "images/" + imgPath;
}

/**
 * @brief Transformation d'une image en niveaux de gris en une image en noir et blanc à l'aide d'un seuil.
 *
 * @param Image
 * @param seuil
 */
void seuillage(string Image, int seuil)
{
  t_Image *img = new t_Image;
  bool statut;
  loadPgm(Image, img, statut);
  for (int i = 0; i < img->h; i++)
  {
    for (int j = 0; j < img->w; j++)
    {
      if (img->im[i][j] < seuil)
        img->im[i][j] = 0;
      else
        img->im[i][j] = 255;
    }
  }
  savePgm("seuillage.pgm", img);
  delete img;
}

/**
 * @brief
 *
 * @param img1
 * @param img2
 */
void difference(string img1, string img2)
{
  t_Image *Image1 = new t_Image;
  t_Image *Image2 = new t_Image;
  bool statut1, statut2;
  loadPgm(img1, Image1, statut1);
  loadPgm(img2, Image2, statut2);
  int H = Image1->h;
  int W = Image1->w;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      Image2->im[i][j] = abs(signed(Image1->im[i][j] - Image2->im[i][j]));
    }
  }
  savePgm("difference.pgm", Image2);
  delete Image1;
  delete Image2;
}

void erosion()
{
}