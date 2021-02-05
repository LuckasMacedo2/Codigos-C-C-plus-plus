#include "soma.h"
#include <cmath>

soma::soma()
{
}


        int soma :: getResul (int x, int y)
        {
            resultado = x+y;
            return resultado;
        }
        double soma :: getMult (double x, double y)
        {
            resultado = x*y;
            return resultado;
        }
        int soma :: getSub (int x, int y)
        {
            resultado = x-y;
            return resultado;
        }
        double soma :: getDiv (double x, double y)
        {
            resultado = x/y;
            return resultado;
        }
        double soma ::getAB(double x, double y)
        {
            resultado = pow (x,y);
            return resultado;
        }
        double soma ::getBA(double x, double y)
        {
            resultado = pow (y,x);
            return resultado;
        }
