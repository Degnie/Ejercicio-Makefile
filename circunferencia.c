#include <stdio.h>

typedef struct {
    float x;
    float y;
} Punto;

typedef struct {
    Punto centro;
    float radio;
} Circunferencia;

int pertenece(Circunferencia c, Punto p) {
    float dx = p.x - c.centro.x;
    float dy = p.y - c.centro.y;

    float distancia2 = dx*dx + dy*dy;
    float radio2 = c.radio * c.radio;

    return distancia2 <= radio2;
}

int main() {
    Circunferencia c;
    Punto p;

    // Entrada de datos
    printf("Ingrese las coordenadas del centro (X Y): ");
    scanf("%f", &c.centro.x);
    scanf("%f", &c.centro.y);

    printf("Ingrese el radio: ");
    scanf("%f", &c.radio);

    printf("Ingrese el punto a verificar (x y): ");
    scanf("%f", &p.x);
    scanf("%f", &p.y);

    // Verificación
    if (pertenece(c, p))
        printf("Sí pertenece\n");
    else
        printf("No pertenece\n");

    return 0;
}
