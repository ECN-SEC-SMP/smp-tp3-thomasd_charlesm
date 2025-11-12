#include <string>
#include <cmath>
#include "image.h"
#include "chargesauve.h"

using namespace std;

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

void difference(string img1, string img2)
{
  t_Image *Image1, *Image2 = new t_Image;
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
  delete Image1, Image2;
}