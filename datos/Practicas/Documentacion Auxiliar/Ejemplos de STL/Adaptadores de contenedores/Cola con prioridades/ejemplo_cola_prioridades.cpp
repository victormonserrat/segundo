///////////////////////////////
///
///  ejemplo_cola_prioridades.cpp
///
////////////////////////////////


/// Ejemplo del libro de Deytel y Deytel 
/// C++ C�mo programar


// Fig. 21.25: fig21_25.cpp
// Programa de prueba para el adaptador priority_queue de la Biblioteca est�ndar.
#include <iostream>

using std::cout;
using std::endl;

// definici�n del adaptador priority_queue
#include <queue>  

int main()
{
   std::priority_queue< double > prioridades;
   
   // meter elementos en prioridades
   prioridades.push( 3.2 );
   prioridades.push( 9.8 );
   prioridades.push( 5.4 );

   cout << "Sacando de prioridades: ";
   
   while ( !prioridades.empty() ) {
      // ver elemento superior
      cout << prioridades.top() << ' '; 
      // eliminar elemento superior
      prioridades.pop();                

   } // fin de instrucci�n while

   cout << endl;

   return 0;

} // fin de main

