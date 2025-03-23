#include <stdio.h>

// Tasas de cambio (puedes actualizarlas según el valor actual)
#define USD_TO_GTQ 7.8
#define EUR_TO_GTQ 8.5
#define GTQ_TO_USD (1.0 / USD_TO_GTQ)
#define GTQ_TO_EUR (1.0 / EUR_TO_GTQ)
#define USD_TO_EUR 0.92
#define EUR_TO_USD (1.0 / USD_TO_EUR)

void convertirMoneda(int opcion, double cantidad) {
    double resultado;
    switch (opcion) {
        case 1: // Quetzales a Dólares
            resultado = cantidad * GTQ_TO_USD;
            printf("%.2f Quetzales = %.2f Dólares\n", cantidad, resultado);
            break;
        case 2: // Quetzales a Euros
            resultado = cantidad * GTQ_TO_EUR;
            printf("%.2f Quetzales = %.2f Euros\n", cantidad, resultado);
            break;
        case 3: // Dólares a Quetzales
            resultado = cantidad * USD_TO_GTQ;
            printf("%.2f Dólares = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 4: // Dólares a Euros
            resultado = cantidad * USD_TO_EUR;
            printf("%.2f Dólares = %.2f Euros\n", cantidad, resultado);
            break;
        case 5: // Euros a Quetzales
            resultado = cantidad * EUR_TO_GTQ;
            printf("%.2f Euros = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 6: // Euros a Dólares
            resultado = cantidad * EUR_TO_USD;
            printf("%.2f Euros = %.2f Dólares\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

int main() {
    int opcion;
    double cantidad;
    
    do {
        printf("\nSeleccione la conversión de moneda:\n");
        printf("1. Quetzales a Dólares\n");
        printf("2. Quetzales a Euros\n");
        printf("3. Dólares a Quetzales\n");
        printf("4. Dólares a Euros\n");
        printf("5. Euros a Quetzales\n");
        printf("6. Euros a Dólares\n");
        printf("7. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);
        
        if (opcion >= 1 && opcion <= 6) {
            printf("Ingrese la cantidad a convertir: ");
            scanf("%lf", &cantidad);
            convertirMoneda(opcion, cantidad);
        }
        else if (opcion == 7) {
            printf("Saliendo del programa...\n");
        }
        else {
            printf("Opción inválida, intente de nuevo.\n");
        }
    } while (opcion != 7);
    
    return 0;
}
