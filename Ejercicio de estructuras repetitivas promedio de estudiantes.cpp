#include <iostream>
#include <string>
#include <locale.h> //Llamado a la librer�a que nos permitir� utilizar � y acentos
using namespace std;

int main(){
	setlocale(LC_ALL, "spanish"); //Uso y definici�n de la funci�n setlocale
	int n,suma=0,cont=0,desaprobados=0,aprobados=0;
	string opciones,nombre,nombreEstudiante,RegistroNombre="";
	cout<<"\nBIENVENIDO AL REGISTRO DE NOTAS"<<endl;
	cout<<"\nRegistre su nombre: ";
	cin>>nombre;
	do{
		cout<<"\nRegistre nombre del estudiante (no ingrese � ni acentos): ";
		cin>>nombreEstudiante;
		do{
			cout<<"Registre la nota del estudiante (solo ingresar numeros): ";
			cin>>n;
			if(n<0){
				cout<<"ERROR: Valor n�merico no admitido"<<endl; //Se verifica que la nota no sea valor menor a 0
			}
		}while(n<0);
		if(n>10.5){
			aprobados++;
			RegistroNombre+=to_string(cont)+". El estudiante "+nombreEstudiante+" aprob�.\n"; //los estudiantes son enumerados y mostrados como aprobados
		}else{
			desaprobados++;
			RegistroNombre+=to_string(cont)+". El estudiante "+nombreEstudiante+" desaprob�.\n"; //Los estudiantes son enumerados y mostrados como desaprobados
		}
		suma+=n;		
		cont++;
		cout<<"Desea continuar? (si/no): ";
		cin>>opciones;
	}while(opciones=="si"||opciones=="SI"||opciones=="Si"||opciones=="s"||opciones=="S");		
	double promedio=double(suma)/cont; //Cambio del tipo de variable por una de mayor precisi�n
	cout<<"\nDatos obtenidos"<<endl;
	cout<<"\nNombre del registrador de notas: "<<nombre<<endl; //Se denomina al usuario como registrador de notas
	cout<<"El promedio de las notas es: "<<promedio<<endl;
	cout<<"Cantidad de estudiantes registrados: "<<cont<<endl;
	cout<<"Cantidad de estudiantes aprobados: "<<aprobados<<endl;
	cout<<"Cantidad de estudiantes desaprobados: "<<desaprobados<<endl;	
	cout<<"Lista de estudiantes registrados:\n"<<RegistroNombre<<endl;
	return 0;
		
}
