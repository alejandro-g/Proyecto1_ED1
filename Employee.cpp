#include "Persona.h"
#include "Employee.h"
#include <iostream>

Employee::Employee(){

}

Employee::Employee(string nombre, int edad, double pSalario):Persona(nombre, edad){
  salario = getSalario();
}

Employee::~Employee(){

}

double Employee::getSalario(){
  return salario;
}
