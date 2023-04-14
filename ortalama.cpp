#include<iostream>
using namespace std;

int main()
{
    int sayi, toplam = 0;
    int sayac=1;

    while( sayac<=5 )
    {
        cout<< sayac << ". ogrencinin notunu giriniz:"; cin>>sayi;
        toplam += sayi;
        sayac++;

    }
    cout<< "Ortalama: "<< toplam/5<<endl;

    return 0;
}
