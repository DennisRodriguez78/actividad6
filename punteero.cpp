#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int edad = 25, *p_edad;
    p_edad =&edad;
    
    cout <<"edad:"<<edad<<endl;
    cout<<"punteros edad"<<p_edad<<endl;

    cout<<"------cambiar valores------ "<<endl;
   *p_edad=40; 

   cout<<"edad:"<<edad<<endl;
   cout<<"Puntero edad: "<<p_edad<<endl;
   
    cout<<"------cambiar valores------ "<<endl;
    int edad2 = 120; 
    p_edad = &edad2;

    cout<<"variable edad:" <<edad<<endl;
    
    cout<<"Puntero edad:" <<*p_edad<<endl;
    
    cout<<"variable edad:" <<edad2<<endl;


  


    system("pause");
}
