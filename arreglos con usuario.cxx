#include <iostream>

using namespace std;

int main (){
	
	int arreglo[100];
	int i;
	int num;
	int c;
	
	cout<<"introduce el numero de arreglos que desea agregar al arreglo: "; cin>>num;
	
	for (i=0;i<num;i++){
		
		cout<<"["<<i<<"]: "; cin>>arreglo[i];
		
	}
	
	cout<<endl<<endl<<"Arreglo\n\n";
	
	for (i=0;i<num;i++){
		
		cout<<"["<<i<<"]: "<<arreglo[i]<<endl;
		
	}
	
	
	return 0;
}
