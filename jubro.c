#include <stdio.h>
#include <complex.h>
#include <math.h>


int main(int argc, char *argv[])
{

  _Complex double C = 0.398 + I * 0.224;
  _Complex double z = 0.;

  int h = 5000;
  int w = 4000;
  int imax = 1500;
  int i;
  double zoom = 2000.;

  for(int y = 0; y < h; y++)
    for(int x = 0; x < w; x++)
      {
	// initial value
	z = (x/zoom + -1.) + (y/zoom + -1.2) * I;

	for(i=0; i < imax; i++)
	  {
	    z = z * z + C;
	    if(cabs(z) > 2.)
	      break;
	  }
	printf("%d %d %d\n", x, y, i);
      }



  return 0;
}
