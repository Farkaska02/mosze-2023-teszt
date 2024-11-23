#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];//elírás
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;)// felesleges ";"
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"//hiányzik a ";"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]//hiányzik a ";"
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
