float calculo(float nota1, float nota2, float nota3) // declarando vari�veis e importando valores de main;
{
    int mf; // declarando vari�vel local;

    mf = (nota1 + nota2 + nota3) / 3;

    return mf; // retornando ao main com valor do c�lculo de 'mf';
}

float calc_alun_rep(float n_alunosrep, int i)   // declarando vari�veis e importando valores de main;
{
    float res;  // declarando vari�vel local;

    res = (n_alunosrep * 100) / i;

    return res; // retornando ao main com valor do c�lculo de 'res';
}
