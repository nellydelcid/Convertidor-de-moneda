#include <stdio.h>

#define TC_DOLAR_GTQ 7.75 // Tipo de cambio: 1 USD = 7.75 QTQ
#define TC_EURO_GTQ 10

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda\n");
    printf("1. Convertir de Dolares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dolares\n");
    printf("3. Convertir de Dolares a Euros\n");
    printf("4. Convertir de Euros a Dolares\n");
    printf("5. Convertir de Euros a Quetzales\n");
    printf("6. Convertir de Quetzales a Euros\n");
    printf("Ingresar su opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la cantidad en Dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
            break;
        case 2:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
            break;
        case 3:
            printf("Ingrese la cantidad en Dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f EURO\n", cantidad, cantidad / TC_EURO_GTQ);
            break;
        case 4:
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f EURO equivale a %.2f USD\n", cantidad, cantidad * TC_EURO_GTQ);
            break;
        case 5:
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f EURO equivale a %.2f GTQ\n", cantidad, cantidad * TC_EURO_GTQ);
            break;
        case 6:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f EURO\n", cantidad, cantidad / TC_EURO_GTQ);
            break;
        default:
            printf("Opcion no valida\n");
    }
    return 0;
}
