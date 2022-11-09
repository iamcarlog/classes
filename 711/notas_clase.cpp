#include <iostream>
using namespace std;
int getLen(string arrayObject);
double getProm(double array[],int len);
int main( )
{
    int numberNotes=0;
    //recibiendo el numero de notas
    numberNotes=getLen("notas");
    double notes[numberNotes];

    for (int i = 0; i < numberNotes; i++)
    {

        cout << "Ingrese nota #"<<(i+1)<<" del estudiante:";
        cin >> notes[i];
        
    }
    cout<<"El promedio del estudiante sera: "<<getProm(notes,numberNotes);
    
    return 0;
}
/* funcion para obtener el largo para un arreglo*/
int getLen(string arrayObject){
    int size=0;
    cout<<"Digite el numero de "<<arrayObject<<": ";
    cin>>size;
    return(size);
}
/*Funcion para obtener el promedio de elementos almacenados en un arreglo*/
double getProm(double array[],int len){
    double sumatoria=0;
    for (int i = 0; i < len; i++)
    {
        sumatoria+=array[i];
    }
    return(sumatoria/len);
}
