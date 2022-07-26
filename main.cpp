#include <iostream>
using namespace std ;
/*
  Archivo: main.cpp
  Autor:Juan Mnauel Cuellar  
  <juan.manuel.cuellar@correounivalle.edu.co>
  Fecha creación: 2019-10-29
  Fecha última modificación: 2019-11-01
  modificado: Juan Manuel Cuellar Rendon 
  Licencia: GNU-GPL
*/
int main() 
{
  int multiplicacion =0;
  int tercerNumero = 0 ;

  cout<< "\t ""|" " " ;
  for (int segundoNumero= 0; segundoNumero<11; segundoNumero++)
  {
    cout<<segundoNumero<< "\t"; 
  }
  cout<<endl << "---------------------------------------------------"; 
  for ( int segundoNumero= 0; segundoNumero<11; segundoNumero++)
  {
    cout<< endl;
    cout <<tercerNumero ++ << "\t |"<< "\t";
    for (int primerNumero=0; primerNumero< 11; primerNumero++ ) 
    {
      multiplicacion = primerNumero * segundoNumero;
      cout<<multiplicacion <<"\t";
    }
    
  }
  return 0;
}