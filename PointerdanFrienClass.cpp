#include <iostream>
using namespace std;

class PersegiPanjang 
{
    public // akses modifier 
        int panjang, lebar;

public:

    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    Lingkaran ol;

};

class lingkaran 
{
public:
    int jarijari;

    void input()
    {
        cout <<"Masukkan jari-jari : ";
        cin >> jarijari;
    }

    int luaslingkaran(int r)
    {
        return 3.14 * r * r;
    }
};

int main()
{
    PersegiPanjang objekPP: //membuat objek 
    Lingkaran ol;

    cout << "Masukkan panjang : ";
    cin >> objekPP.panjang 
    cout << "Masukan lebar : ";
    cin >> objekPP.lebar;
    cout << "luas persegi panjang : ";
    objekPP.luasPP(.panjang, objekPP.lebar) << endl;

    
}