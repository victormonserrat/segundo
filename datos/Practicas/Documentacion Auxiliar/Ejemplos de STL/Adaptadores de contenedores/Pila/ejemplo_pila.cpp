///////////////////////////////
///
///  ejemplo_pila.cpp
///
////////////////////////////////


/// Ejemplo del libro de Deytel y Deytel 
/// C++ C�mo programar


// Fig. 21.23: fig21_23.cpp
// Programa de prueba para el adaptador stack de la Biblioteca est�ndar.
#include <iostream>

using std::cout;
using std::endl;

// definici�n del adaptador stack
#include <stack>  

// definici�n de la plantilla de clase vector
#include <vector>  

// definici�n de la plantilla de clase list
#include <list>    

// prototipo de la plantilla de funci�n sacarElementos 
template< class T >
void sacarElementos( T &stackRef );

int main()
{
   // pila con deque subyacente predeterminado
   std::stack< int > intDequePila;   

   // pila con vector subyacente
   std::stack< int, std::vector< int > > intVectorPila;

   // pila con lista subyacente
   std::stack< int, std::list< int > > intListaPila;

   // meter los valores 0-9 en cada pila 
   for ( int i = 0; i < 10; ++i ) {
      intDequePila.push( i );
      intVectorPila.push( i );
      intListaPila.push( i );

   } // fin de instrucci�n for

   // mostrar y eliminar elementos de cada pila
   cout << "Sacando de intDequePila: ";
   sacarElementos( intDequePila );
   cout << "\nSacando de intVectorPila: ";
   sacarElementos( intVectorPila );
   cout << "\nSacando de intListaPila: ";
   sacarElementos( intListaPila );

   cout << endl;

   return 0;

} // fin de main

// sacar elementos del objeto pila al que hace referencia stackRef
template< class T >
void sacarElementos( T &stackRef )
{
   while ( !stackRef.empty() ) {
      // ver elemento superior
      cout << stackRef.top() << ' '; 
      // eliminar elemento superior
      stackRef.pop();                

   } // fin de instrucci�n while

} // fin de la funci�n sacarElementos


