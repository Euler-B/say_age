/* WIP*/
#include <stdio.h>

int main() {
  int anio_de_nacimiento, mes_de_nacimiento, dia_de_nacimiento;
  int edad;
  const int anio_actual = 2022;
  const short  mes_actual = 7;
  const short dia_actual = 6;

  printf("\t\t\t\t-----------------------------------------\n");
  printf("\t\t\t\t|                                       |\n");
  printf("\t\t\t\t|            Saludos                    |\n");
  printf("\t\t\t\t|                                       |\n");
  printf("\t\t\t\t-----------------------------------------\n");
  printf("****** Introduzca su fecha de nacimiento en el formato: DD/MM/AA ********");
 
  printf("\n--->: ");
  scanf("%d", &dia_de_nacimiento);

  printf("\n--->: ");
  scanf("%d", &mes_de_nacimiento);

  printf("\n--->: ");
  scanf("%d", &anio_de_nacimiento);

  edad = anio_actual - anio_de_nacimiento;
  printf("Su edad es: %d  años \n", edad);
  return 0;
}
