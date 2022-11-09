#include <iostream>
#include <cstring>
using namespace std;
int GetLen(string concept);
float GetProm(int len, float elements[]);
int main()
{
    int ArrayLen = GetLen("Notas");
    float Notes[ArrayLen];
    for (int i = 0; i < ArrayLen; i++)
    {
        cout << "Ingrese la nota del alummno " << (i + 1) << ": ";
        cin >> Notes[i];
    }
    cout << "El promedio de notas es: " << GetProm(ArrayLen, Notes);

    return 0;
}
int GetLen(string concept)
{
    int cantidad = 0; 
    do
    {
    cout << "ingrese la cantidad de " << concept << ": ";
    cin >> cantidad;
    }
    while(cantidad<0);
    return cantidad;
}
float GetProm(int len, float elements[])
{
    float prom = 0;
    for (int i = 0; i < len; i++)
    {
        prom += elements[i];
    }
    return (prom / len);
}