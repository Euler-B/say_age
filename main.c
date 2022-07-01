/* cabecera del programa */
#include <stdio.h>

int main() {
  int anio_de_nacimiento;
  int edad;
  const int anio_actual = 2022;

  printf("Hola. Buen dia");
  printf("Introduzca su año de nacimiento:\n");
  scanf("%d", &anio_de_nacimiento);
  edad = anio_actual - anio_de_nacimiento;
  printf("Su edad es: %d  años \n", edad);
  return 0;
}
