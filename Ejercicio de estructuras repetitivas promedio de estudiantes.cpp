#include<iostream>
#include<string>

using namespace std;

int main()
{	
	string opciones;
	int n, suma, cont, desaprobados, aprobados;
	string nombre, nombreEstudiante, RegistroNombre;
	float promedio;
	RegistroNombre= ""; //Se quita el espacio incial de la variable RegistroNombre
	suma=0;
	cont=0;
	desaprobados=0;
	aprobados=0;
	cout<<"\nBIENVENIDO AL REGISTRO DE NOTAS"<<endl;
	cout<<"\nRegistre su nombre: ";
	cin>>nombre;
	
	do
	{
		cout<<"\nRegistre nombre del estudiante: ";
		cin>>nombreEstudiante;
		cout<<"Registre la nota del estudiante (solo ingresar numeros): ";
		cin>>n;
		suma+=n;		
		cont++;
		if(n>10.5)
		{
			aprobados++;
			RegistroNombre+=to_string(cont)+". "+nombreEstudiante+" Aprobo"+"\n"; //los estudiantes son enumerados y mostrados como aprobados
		}else 
		{
			desaprobados++;
			RegistroNombre+=to_string(cont)+". "+nombreEstudiante+" Desaprobo"+"\n"; //Los estudiantes son enumerados y mostrados como desaprovados
		}

		cout<<"Desea continuar (si/no): ";
		cin>>opciones;
	}
	while(opciones=="si");

	cout<<"\nDatos obtenidos"<<endl;
	cout<<"\nNombre del registrador de notas: "<<nombre<<endl; //Se denomina al usuario como registrador de notas
	promedio=suma/cont;
	cout<<"El promedio de las notas es: "<<promedio<<endl;
	cout<<"Cantidad de estudiantes registrados:"<<cont<<endl;
	cout<<"Cantidad de estudiantes aprobados: "<<aprobados<<endl;
	cout<<"Cantidad de estudiantes desaprobados: "<<desaprobados<<endl;
	cout<<"Lista de estudiantes registrados: "<<endl<<RegistroNombre; //Se cambia el enunciado de "Lista de estudiantes que fueron registrados" a "Lista de estudiantes registrados" y termina con un cambio de linea
	
	
	return 0;
		
}