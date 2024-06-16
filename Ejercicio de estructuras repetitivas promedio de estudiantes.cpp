#include<iostream>
#include<string>

using namespace std; 

int main()
{
	
	string opciones;
	int n, suma, cont, desaprobados, aprobados;
	float promedio;	
	suma=0;
	cont=0;
	desaprobados=0;
	aprobados=0;
	cout<<"BIENVENIDO AL REGISTRO DE NOTAS"<<endl;
	
	do
	{
		cout<<"Registre las notas de los estudiantes(solo ingresar numeros): ";
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

	if(cont> 0)
	{
		promedio=suma/cont;
		cout<<"El promedio de las notas es "<<promedio<<endl;
		cout<<"aprobados: "<<aprobados<<endl;
		cout<<"desaprobados: "<<desaprobados<<endl;
	}
	
	else
	{
		cout<<"No se ingresaron notas"<<endl;
	}
	
	return 0;
		
}
