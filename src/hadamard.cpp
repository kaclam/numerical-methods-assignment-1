#include "hadamard.h"
#include <iostream>
#include <cstdlib>
#include <ctime>  

double** hadamard(double **macierzA, double **macierzB, int dlugoscN, int dlugoscM)
{
    double **macierzWynikowa = new double*[dlugoscN];

    for(int i=0; i<dlugoscN; i++)
        {
            macierzWynikowa[i] = new double[dlugoscM];
        }

    for(int i = 0; i<dlugoscN; i++)
    {
        for(int j=0; j<dlugoscM; j++)
        {
          macierzWynikowa[i][j] = macierzA[i][j] * macierzB[i][j];
        }
         
    }

    return macierzWynikowa;
}

void wypelnianieMacierzy(double **macierzA, double **macierzB, int dlugoscN, int dlugoscM)
{
    for(int i=0; i<dlugoscN; i++)
        {
            macierzA[i] = new double[dlugoscM];
            macierzB[i] = new double[dlugoscM];

            for(int j=0; j<dlugoscM; j++)
            {
                macierzA[i][j]=rand() %10;
                macierzB[i][j]=rand() %10;
            }

        }
}


void wyswietlMacierz(double **macierzA, int dlugoscN, int dlugoscM)
{
	for(int i=0; i<dlugoscN; i++)
        {
            for(int j=0; j<dlugoscM; j++)
            {
                if(macierzA[i][j] >= 10)
                {
                    std::cout << macierzA[i][j] << " ";
                }

                else
                {
                    std::cout << " " << macierzA[i][j] << " ";
                }
                    
            }
            
            std::cout << std::endl;
            
        }

        std::cout <<  std::endl;
}
