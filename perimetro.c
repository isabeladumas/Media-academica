int main(int argc, char const *argv[])
{
    int Raio;
    float Perim, Area, PI;
    PI = 3.14159;
    printf("Qual é o raio da circunferência: ");
    scanf("%d", &Raio);
    Perim = 2 * PI * Raio;
    Area = PI * Raio * Raio;
    printf("O perimetro da circunferencia é: %f e a area e %f", Perim, Area);
    return 0;
}
