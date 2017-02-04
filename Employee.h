#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Persona.h"

class Employee: public Persona{
private:
  double salario;

public:
  Employee();
  Employee(string, int, double);
  ~Employee();
  virtual double getSalario();
}:
#endif
