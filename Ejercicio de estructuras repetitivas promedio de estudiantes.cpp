#include <iostream>
using namespace std;

int main()
{	
	int n,suma=0,cont=0,desaprobados=0,aprobados=0;
	string opciones,nombre,nombreEstudiante,RegistroNombre="";
	float promedio;
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
			RegistroNombre+="- El estudiante "+nombreEstudiante+" ha aprobado\n"; //los estudiantes son enumerados y mostrados como aprobados
		}else 
		{
			desaprobados++;
			RegistroNombre+="- El estudiante "+nombreEstudiante+" ha desaprobado\n"; //Los estudiantes son enumerados y mostrados como desaprobados
		}

		cout<<"Desea continuar? (si/no): ";
		cin>>opciones;
	}
	while(opciones=="si");		
	promedio=suma/cont;
	cout<<"\nDatos obtenidos"<<endl;
	cout<<"\nNombre del registrador de notas: "<<nombre<<endl; //Se denomina al usuario como registrador de notas
	cout<<"El promedio de las notas es: "<<promedio<<endl;
	cout<<"Cantidad de estudiantes registrados: "<<cont<<endl;
	cout<<"Cantidad de estudiantes aprobados: "<<aprobados<<endl;
	cout<<"Cantidad de estudiantes desaprobados: "<<desaprobados<<endl;	
	cout<<"Lista de estudiantes registrados:\n"<<RegistroNombre<<endl;
	return 0;
		
}
