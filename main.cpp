#include "Persona.h"
#include "Object.h"
#include "Employee.h"
#include "ADTList.h"
#include <iostream>

using namespace std;

int main(){

  do{
    switch(menu()){
      case 1{
        break;
      }//fin case 1
      case 2:{
        break;
      }//fin case 2
      case 3:{
        break;
      }//fin case 3
      case 4:{
        break;
      }//fin case 4
      case 5:{
        break;
      }//fin case 5
      case 6:{
        break;
      }//fin case 6
      case 7:{
        break;
      }//fin case 7
    }//fin switch de menu
  }while(opcion > 0 || opcion <= 8)
}

void menu(){
  int opcion = 0;
  cout << "Bienvenido a su nuevo puesto como gerente! Esperamos todo cumpla con sus requisitos!" << endl;
  cout << "Opcion 1. Ingresar nuevo empleado" << endl;
  cout << "Opcion 2. Listar empleados" << endl;
  cout << "Opcion 3. Remover Empleados" << endl;
  cout << "Opcion 4. Calcular salario promedio" << endl;
  cout << "OPcion 5. Ver salario maximo" << endl;
  cout << "Opcion 6. Ver salario minimo" << endl;
  cout << "Opcion 7. Dar incremento por inflacion" << endl;
  cout << "Opcion 8. Salir de simulacion" << endl;
  cout << "Por favor ingrese una opcion: " << endl;
  cin >> opcion;
}
