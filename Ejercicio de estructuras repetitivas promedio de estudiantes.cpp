#include<iostream>
#include<string>

using namespace std; 

int main()
{	
	string opciones;
	int n, suma, cont, desaprobados, aprobados;
	string nombre, nombreEstudiante;
	float promedio;	
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
		}
		else 
		{
			desaprobados++;
		}

		cout<<"Desea continuar (si/no): ";
		cin>>opciones;
	}
	while(opciones=="si");

	cout<<"\nDatos obtenidos"<<endl;
	cout<<"\nNombre de la persona que esta registrando las notas: "<<nombre<<endl;
	promedio=suma/cont;
	cout<<"El promedio de las notas es: "<<promedio<<endl;
	cout<<"Cantidad de estudiantes registrados:"<<cont<<endl;
	cout<<"Cantidad de estudiantes aprobados: "<<aprobados<<endl;
	cout<<"Cantidad de estudiantes desaprobados: "<<desaprobados<<endl;
	
	
	return 0;
		
}
