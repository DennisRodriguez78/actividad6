#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /*int edad, *p_edad;
    p_edad=&edad;
    cout<<"ingrese edad;";
    cin>>edad;
    cout<<*p_edad<<endl;
    if(*p_edad >18){
        cout<<"Mayor edad";
    }else{cout<<"mernor edad"}*/

    /*int total =0 ;
    int notas[total];
    char res;
    int *p_notas=notas;
    do
    {
        cout<<"ingrese nota "<<total<<":";
        cin>>notas[total];
        total++;
        cout<<"Desea ingresar otro valor (s/n)";
        cin>>res;
    } while (res =='s' || res =='S');
    cout<<"Mostral notas -----"<<endl;
    for (int i = 0; i < total; i++)
    {
       cout<<"Notas ("<<i<<"):"<<*p_notas<<endl;
       p_notas++;
    }
    */

   int fil =0, col=0, **pm_notas;
   cout<<"ingrese la cantidad estudiantes ";
   cin>>fil;
   cout<<"ingrese la cantidad de notas del estudiante"<<endl;
   cin>>col;
   pm_notas[i]= new int[fil];
   for (int i = 0; i < fil; i++)
   {
    pm_notas[i]=new int [col];
   }

   for (int i = 0; i < fil; i++)
   {
    for (int ii = 0; ii < col; ii++)
    {
        cout<<"estudiante"<<i<<", notas: "<<ii<<": ";
        cin>>*(*(pm_notas+i)+ii);
    }
    cout<<"______________________"<<endl;
   }
   cout<<"Mostral notas -----"<<endl;
   for (int i = 0; i < fil; i++)
   {
    for (int  ii = 0; ii < col; ii++)
    {
         cout<<*(*(pm_notas+i)+ii)<<endl;
    }
      cout<<"______________________"<<endl;
   }
   for (int i = 0; i < fil; i++)

   {
    delete[] pm_notas[i];
   }
   delete[] pm_notas;
   
   

   system("pause");
   
   

}
