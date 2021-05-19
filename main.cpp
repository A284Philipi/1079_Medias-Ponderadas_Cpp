#include <iostream>

using namespace std;

int main()
{
    int cont = 0, casos;
    float a, b, c, media;
    cin >> casos;
    while (cont < casos)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        media = ((a * 2) + (b * 3) + (c * 5)) / 10;
        cout.precision(1);
        cout << fixed << media <<endl;
        cont++;
    }
    return 0;
}
