#include<bits/stdc++.h>
using namespace std;
int CantidadCaracteres(string frase);
int main(){
	string frase;
	cout<<"ingrese la frase:"<<endl;
	getline(cin,frase);
	int B=CantidadCaracteres(frase);
	cout<<"La cantidad de caracteres son:"<<B;
	return 0;
}
int CantidadCaracteres(string frase){
	int contador;
	for(int i=0;i<frase.size();i++){
		contador++;
	}
	return contador;
}
