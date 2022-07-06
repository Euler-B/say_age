/* WIP*/
#include <stdio.h>

int main() {
  int anio_de_nacimiento, mes_de_nacimiento, dia_de_nacimiento;
  int edad;
  const int anio_actual = 2022;
  const short  mes_actual = 7;
  const short dia_actual = 6;
  // Step 1: show greetings
  printf("\t\t\t\t-----------------------------------------\n");
  printf("\t\t\t\t|                                       |\n");
  printf("\t\t\t\t|            Saludos                    |\n");
  printf("\t\t\t\t|                                       |\n");
  printf("\t\t\t\t-----------------------------------------\n");

  //Step 0: entrada  de datos 
  printf("\t\t****** Introduzca su fecha de nacimiento en el formato: DD/MM/AA ******\n");
 
  printf("\n\t\t\t\t--->: ");
  scanf("%d", &dia_de_nacimiento);
  printf("\n\t\t\t\t--->: ");
  scanf("%d", &mes_de_nacimiento);
  printf("\n\t\t\t\t--->: ");
  scanf("%d", &anio_de_nacimiento);

  // Step 1 Procesado de datos

  short anio_valido = anio_de_nacimiento <= anio_actual && anio_de_nacimiento >= 1903;
  short mes_valido  = mes_de_nacimiento  <= 12          && mes_de_nacimiento  >= 1;
  short dia_valido  = dia_de_nacimiento  <= 31          && mes_de_nacimiento  >= 1;

  if (anio_valido && mes_valido && dia_valido){
    edad = anio_actual - anio_de_nacimiento;

    if (mes_de_nacimiento > mes_actual)
      edad--;
    if (mes_de_nacimiento == mes_actual && dia_de_nacimiento < dia_actual)
      edad--;
    
    printf("\n");
    printf("\t\t\t\t-----------------------------------------\n");
    printf("\t\t\t\t|                                       |\n");
    printf("\t\t\t\t|        su edad es: %d años            |\n", edad);
    printf("\t\t\t\t|                                       |\n");
    printf("\t\t\t\t-----------------------------------------\n");
  } 
  else {
    printf("\n");
    printf("\t\t\t\t-----------------------------------------\n");
    printf("\t\t\t\t|                                       |\n");
    printf("\t\t\t\t|   Por favor introduzca datos validos  |\n", edad);
    printf("\t\t\t\t|                                       |\n");
    printf("\t\t\t\t-----------------------------------------\n");
  }
  return 0;
}
