#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];//elírás
    std::cout << "1-100 ertekek duplazasa"; //hiányzik a ";" , " helyet '
    for (int i = 0; i < N_ELEMENTS;i++)// hiányos ciklus fej
    {
        b[i] = (i+1) * 2; // 1 helyett 0- val kezdődik
    }
    for (int i = 0; i < N_ELEMENTS; i++) //hiányzik a kilépési feltétel
    {
        std::cout << "Ertek:" << b[i] <<" ";//hiányós kód
    }
    std::cout << std::endl;
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) //";" helyett ","
    {
        atlag += b[i];//hiányzik a ";"
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
