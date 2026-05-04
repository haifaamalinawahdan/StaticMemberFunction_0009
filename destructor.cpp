#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;

public:
    angka(int); //CONSTRUCTOR
    ~angka(); // DESTRUCTOR
    void cetakData();
    void isiData();

};

