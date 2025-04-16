int main(int argc, char const *argv[])
{
    int faltas;
    float nota1, nota2, media;
    printf("informe as duas notas e faltas:\n");
    scanf("%f %f %d", &nota1, &nota2, &faltas);
    media = (nota1 +nota2)/2;
    if (media>5 && faltas<3)
        printf("aluno aprovado por media: %4.2f e %d faltas \n", media, faltas);
            if(faltas>=3)
                printf("Aluno reprovado por faltas (%d faltas)", faltas);
            else 
                printf("aluno reprovado por nota (media = %4.2f)", media);
    return 0;
}
