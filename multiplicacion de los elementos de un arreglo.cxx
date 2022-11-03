#include <iostream>

using namespace std;


int main (){
	
	int arreglo[]={3,6,2};
	int multi=1;
	
	for (int i=0; i<3; i++){
		
		multi *= arreglo[i];
		
	}
	
	cout<<"la multiplicacion consecutiva de los arreglos es: "<<multi<<endl;
	
	return 0;
}
