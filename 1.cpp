#include <iostream>
using namespace std;
int main()
{
    float n, ht, st, hex, sr, seg, afp, renta;
    cout << "ingrese la cantidad de empleados" << endl;
    cin >> n;
    cout << "Ingrese las horas trabajadas" << endl;
    cin >> ht;
    cout << "Ingrese las horas extras" << endl;
    cin >> hex;
    st=(ht *1.75)+(hex*2.50);
    cout << "Tu salario total sin descuentos es de: "<<st<<endl;
    if (st>500)
    {
    seg = (st*4)/100;
    afp = (6.25*st)/100;
    renta = (st*10)/100;
    sr = (st-seg-afp-renta);
    cout << "Tu seguro es de: "<<seg<<endl;
    cout << "AFP es: "<<afp<<endl;
    cout << "Tu descuento de la renta es: "<<renta<<endl;
     cout <<"Tu salario total con descuentos es de: "<<sr<<endl;
    }
    if (st<500)
    {
    seg = (st*4)/100;
    afp = (st*6.25)/100;
    sr = (st-seg-afp);
    cout << "Tu seguro es de: "<<seg<<endl;
    cout << "AFP es: "<<afp<<endl;
    cout <<"Tu salario total con descuentos es de: "<<sr<<endl;
    }
}