#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char operacao;

    cout << "Num 1: ";
    cin >> x;

    /*cout << "(/, *, +, -): \n";
    cin >> operacao;*/

    cout << "Num 2: ";
    cin >> y;

    int sum = x+y;
    cout << "Soma: " <<sum << endl;
}
