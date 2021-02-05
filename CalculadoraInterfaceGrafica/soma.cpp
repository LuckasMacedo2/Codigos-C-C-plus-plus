#include "soma.h"
#include <cmath>
#include <QMessageBox>

soma::soma()
{
}


        double soma :: getResul (double x, double y)
        {
            resultado = x+y;
            return resultado;
        }
        double soma :: getMult (double x, double y)
        {
            resultado = x*y;
            return resultado;
        }
        double soma :: getSub (double x, double y)
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
        double soma :: getRaizX(double x)
        {
            resultado = sqrt (x);
            return resultado;
        }

        double soma :: getRaizY(double y)
        {
            resultado = sqrt (y);
            return resultado;
        }
























