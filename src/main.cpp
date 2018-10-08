#include "hadamard.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


int main(int argc, char** argv) 
{
    const int dlugosc = 4;
    double **macierzA = new double*[dlugosc];
    double **macierzB = new double*[dlugosc];
    srand(time(NULL));

    wypelnianieMacierzy(macierzA, macierzB, dlugosc);
    wyswietlMacierz(macierzA, macierzB, dlugosc);
    
    std::cout << hadamard(macierzA, macierzB, dlugosc) << std::endl;


    for(int i=0; i<dlugosc; i++)
      delete macierzA[i];

    delete macierzA;
    
    for(int i=0; i<dlugosc; i++)  
      delete macierzB[i];
      
    delete macierzB;
    
    return 0;
}
