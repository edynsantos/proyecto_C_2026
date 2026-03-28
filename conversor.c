#include <stdio.h>

// Tasas de cambio aproximadas (puedes actualizarlas)
#define GTQ_USD 0.13     // 1 quetzal = 0.13 USD
#define USD_GTQ 7.70     // 1 USD = 7.70 quetzales
#define GTQ_EUR 0.12     // 1 quetzal = 0.12 EUR
#define EUR_GTQ 8.30     // 1 EUR = 8.30 quetzales
#define USD_EUR 0.92     // 1 USD = 0.92 EUR
#define EUR_USD 1.09     // 1 EUR = 1.09 USD

int main() {
    int opcion;
    float cantidad, resultado;

    do {
        printf("\n=== CONVERSOR DE MONEDAS ===\n");
        printf("1. Quetzales a Dólares\n");
        printf("2. Dólares a Quetzales\n");
        printf("3. Quetzales a Euros\n");
        printf("4. Euros a Quetzales\n");
        printf("5. Dólares a Euros\n");
        printf("6. Euros a Dólares\n");
        printf("7. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 6) {
            printf("Ingrese la cantidad: ");
            scanf("%f", &cantidad);
        }

        switch(opcion) {
            case 1:
                resultado = cantidad * GTQ_USD;
                printf("Resultado: %.2f USD\n", resultado);
                break;
            case 2:
                resultado = cantidad * USD_GTQ;
                printf("Resultado: %.2f GTQ\n", resultado);
                break;
            case 3:
                resultado = cantidad * GTQ_EUR;
                printf("Resultado: %.2f EUR\n", resultado);
                break;
            case 4:
                resultado = cantidad * EUR_GTQ;
                printf("Resultado: %.2f GTQ\n", resultado);
                break;
            case 5:
                resultado = cantidad * USD_EUR;
                printf("Resultado: %.2f EUR\n", resultado);
                break;
            case 6:
                resultado = cantidad * EUR_USD;
                printf("Resultado: %.2f USD\n", resultado);
                break;
            case 7:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }

    } while(opcion != 7);

    return 0;
}