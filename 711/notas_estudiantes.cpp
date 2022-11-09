#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
int getLen(string arrayObject);
double getProm(double array[],int len);
int main( )
{
    int noteLen=0,studentsNumber=0,numberNotes=0;
    //recibiendo el numero de estudiantes
    studentsNumber=getLen("estudiantes");
    //recibiendo el numero de notas
    numberNotes=getLen("notas");
    double notes[studentsNumber][numberNotes];

    for (int i = 0; i < studentsNumber; i++)
    {
        for (int j = 0; j < numberNotes; j++)
        {
            cout << "Ingrese nota #"<<(j+1)<<" del estudiante "<<(i+1)<<": ";
            cin >> notes[i][j];
        }
    }
    /*
    string studentName[studentsNumber][20];
    for (int i = 0; i < studentsNumber; i++)
    {
        cout<<"Ingrese nombre estudiante "<<i+1<<endl;
        for (int j = 0; j < 20; j++)
        {
            cout<<"ingrese letra "<<j+1<<": ";
            cin>>studentName[i][j];
        }
        
    }
    */
    
    for (int i = 0; i < studentsNumber; i++)
    {   
        cout<<"Notas estudiante "<<(i+1)<<": ";
        for (int j = 0; j < numberNotes; j++)
        {
            cout << notes[i][j]<<' ';
        }
        cout <<". El promedio sera: "<<getProm(notes[i],numberNotes)<< "\n";
    }

    
    return 0;
}
int getLen(string arrayObject){
    int size=0;
    cout<<"Digite el numero de "<<arrayObject<<": ";
    cin>>size;
    return(size);
}
double getProm(double array[],int len){
    double sumatoria=0;
    for (int i = 0; i < len; i++)
    {
        sumatoria+=array[i];
    }
    return(sumatoria/len);
}
