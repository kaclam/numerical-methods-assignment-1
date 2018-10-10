#include "hadamard.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


int main(int argc, char** argv) 
{
    const int dlugoscN = 5;
    const int dlugoscM = 4;
    double **macierzA = new double*[dlugoscN];
    double **macierzB = new double*[dlugoscN];
    double **macierzWynikowa;
    srand(time(NULL));

    wypelnianieMacierzy(macierzA, macierzB, dlugoscN, dlugoscM);
    std::cout << "Macierz A" << std::endl;
    wyswietlMacierz(macierzA, dlugoscN, dlugoscM);

    std::cout << "Macierz B" << std::endl;
    wyswietlMacierz(macierzB, dlugoscN, dlugoscM);
    
    macierzWynikowa=hadamard(macierzA, macierzB, dlugoscN, dlugoscM);

    wyswietlMacierz(macierzWynikowa, dlugoscN, dlugoscM);


    for(int i=0; i<dlugoscN; i++)
      delete macierzA[i];

    delete macierzA;
    
    for(int i=0; i<dlugoscN; i++)  
      delete macierzB[i];
      
    delete macierzB;

    for(int i=0; i<dlugoscN; i++)
      delete macierzWynikowa[i];

    delete macierzWynikowa;
    
    return 0;
}
