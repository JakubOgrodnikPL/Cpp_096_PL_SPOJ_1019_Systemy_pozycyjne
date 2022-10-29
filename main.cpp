#include <iostream>
using namespace std;
int liczba_testow;

string dec2p(int liczba, int podstawa)
{
    string wynik = "";
    int reszta;
    if(liczba==0) wynik="0";
    while (liczba>0)
    {
        reszta=liczba%podstawa;
        if (reszta<10) wynik=char(reszta+48)+wynik;
        else wynik=char(reszta+48+7)+wynik;
        liczba=liczba/podstawa;
    }
    return wynik;
}

int main()
{
    cin>>liczba_testow;
    while(liczba_testow--)
    {
    int liczbaDec;
    cin>>liczbaDec;
    cout<<dec2p(liczbaDec, 16)<<" "<<dec2p(liczbaDec, 11)<<endl;
    }
    return 0;
}
