#include<iostream>
using namespace std;
int main( )
{
	const double cm_per_inch=2.54;
	int length=1;
	char unit=' ';
	cout<<"por favor ingrese una longitud seguida de una unidad (c o i):\n";
	cin>>length>>unit;
	
	if (unit =='i')
		cout<<length<<"in == "<<cm_per_inch*length<<"cm\n";
	else if (unit=='c')
		cout <<length<<"cm == "<<length/cm_per_inch<<" in\n";
	else 
		cout<<"lo siento no conozco una unidad llamada"<<unit<<"\n";
		

}
