//4-	Escriba un programa que reciba como entrada el radio de un círculo y entregue como salida su perímetro y su área.
//Perimetro: 2 * PI * radio
//Area: PI * radio * radio
//Incluir la librería math.h.
//POTENCIA: pow(numero, potencia)
//RAÍZ CUADRADA: sqrt(numero)
//printf("El perimetro del circulo es: %.2f\n", 2 * PI* radio);
//printf("El area del circulo es: %.2f\n", PI * pow(radio, 2));
//const float PI = 3.14;

#include <stdio.h>

#include <math.h>

const float pi = 3.141592;

int main()
{
    float r; //radio de la circunferencia
    printf("Ingrese el radio: ");
    scanf("%f", &r);
    fflush(stdin);

    printf("El perimetro es: %f", 2*pi*r);
    printf("\nEl area es: %f", pi*pow(r,2));

    getchar();
    return 0;
}
