///////////////////////////////
///
///  ejemplo_cola.cpp
///
////////////////////////////////


/// Ejemplo del libro de Deytel y Deytel 
/// C++ C�mo programar

// Fig. 21.24: fig21_24.cpp
// Programa de prueba para el adaptador queue de la Biblioteca est�ndar.
#include <iostream>

using std::cout;
using std::endl;

// definici�n del adaptador queue
#include <queue>  

int main()
{
   std::queue< double > valores;
   
   // meter elementos en la cola valores
   valores.push( 3.2 );
   valores.push( 9.8 );
   valores.push( 5.4 );

   cout << "Sacando de valores: ";
   
   while ( !valores.empty() )
     {
      // ver elemento inicial
      cout << valores.front() << ' ';  
      
      // eliminar elemento
      valores.pop();                    

   } // fin de instrucci�n while

   cout << endl;

   return 0;

} // fin de main

