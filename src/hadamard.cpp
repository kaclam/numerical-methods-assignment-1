#include "hadamard.h"
#include <iostream>
#include <cstdlib>
#include <ctime>  

double hadamard(double **macierzA, double **macierzB, int dlugosc)
{
    double wynik = 0;

    for(int i = 0; i<dlugosc; i++)
    {
        for(int j=0; j<dlugosc; j++)
        {
          wynik += macierzA[i][j]*macierzB[i][j]; 
        }
         
    }

    return wynik;
}

void wypelnianieMacierzy(double **macierzA, double **macierzB, int dlugosc)
{
    for(int i=0; i<dlugosc; i++)
        {
            macierzA[i] = new double[dlugosc];
            macierzB[i] = new double[dlugosc];

            for(int j=0; j<dlugosc; j++)
            {
                macierzA[i][j]=rand() %10;
                macierzB[i][j]=rand() %10;
            }

        }
}


void wyswietlMacierz(double **macierzA, double **macierzB, int dlugosc)
{
    std::cout << "Macierz A" << std::endl;
	for(int i=0; i<dlugosc; i++)
        {
            for(int j=0; j<dlugosc; j++)
            {
               std::cout << macierzA[i][j] << " ";
            }
            
            std::cout << std::endl;
            
        }

        std::cout << std::endl;

    
     std::cout << "Macierz B" << std::endl;
        
    for(int i=0; i<dlugosc; i++)
        {
            for(int j=0; j<dlugosc; j++)
            {
               std::cout << macierzB[i][j] << " ";
            }
            
            std::cout << std::endl;
            
        }

        std::cout << std::endl;
}
