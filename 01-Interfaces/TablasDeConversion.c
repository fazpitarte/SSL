#include <stdio.h>
#include "Conversion.c"

int main () {

int fahr, cel;

printf("Tabla de Conversion Fahrenheit a Celsius\n\n");

for (fahr=0; fahr<=300; fahr=fahr+20)
printf("%3d %6.1f\n", fahr, Celsious (fahr));

printf("\nTabla de Conversion Celsius a Fahrenheit\n\n");

for (cel=0; cel<=300; cel=cel+20)
printf("%3d %6.1f\n", cel, Fahrenheit (cel));

}