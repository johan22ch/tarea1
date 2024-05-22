#include <stdio.h>
#include <string.h> // Necesaria para la función strlen

int main() {
    // Declaración de variables
    char nombre[100]; // Array para almacenar el nombre
    int dia, mes, anio; // Variables para almacenar la fecha de nacimiento

    // Mostrar un mensaje de bienvenida
    printf("Bienvenido al programa de lectura de datos personales!\n");

    // Solicitar al usuario que ingrese su nombre
    printf("Por favor, ingresa tu nombre: ");
    // Leer el nombre ingresado por el usuario
    // Usamos fgets en lugar de scanf para permitir espacios en el nombre
    fgets(nombre, sizeof(nombre), stdin);

    // Eliminar el salto de línea al final del nombre si es necesario
    size_t len = strlen(nombre);
    if (len > 0 && nombre[len - 1] == '\n') {
        nombre[len - 1] = '\0';
    }

    // Solicitar al usuario que ingrese su fecha de nacimiento
    printf("Por favor, ingresa tu fecha de nacimiento.\n");
    printf("Día: ");
    // Leer el día de nacimiento ingresado por el usuario
    scanf("%d", &dia);

    printf("Mes: ");
    // Leer el mes de nacimiento ingresado por el usuario
    scanf("%d", &mes);

    printf("Año: ");
    // Leer el año de nacimiento ingresado por el usuario
    scanf("%d", &anio);

    // Mostrar los valores ingresados por el usuario con un mensaje descriptivo
    printf("\nHas ingresado los siguientes datos:\n");
    printf("Nombre: %s\n", nombre);
    printf("Fecha de nacimiento: %02d/%02d/%04d\n", dia, mes, anio);

    // Indicar que el programa ha finalizado correctamente
    printf("Gracias por utilizar el programa. Hasta luego Dios Te Bendiga!\n");

    return 0;
}