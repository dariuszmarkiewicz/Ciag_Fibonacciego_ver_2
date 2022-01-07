#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int wynik;

    if(n < 3)
        wynik = 1;
    else{
        int poprzedni_1 = 1;
        int poprzedni_2 = 1;
        for(int i = 3; i <= n; i++)
        {
            wynik = poprzedni_1 + poprzedni_2;
            poprzedni_2 = poprzedni_1;
            poprzedni_1 = wynik;
        }
    }

    return wynik;
}


int main()
{

    int k;

    cout << "Ile liczb ciagu Fibonacciego wyswietlic: ";
    cin >> k;

    for(int i = 1; i <= k; i++)
        cout << fibonacci(i) << endl;

    return 0;
}
