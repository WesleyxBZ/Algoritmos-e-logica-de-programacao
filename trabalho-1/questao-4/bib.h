float calculo(float nota1, float nota2, float nota3) // declarando variáveis e importando valores de main;
{
    int mf; // declarando variável local;

    mf = (nota1 + nota2 + nota3) / 3;

    return mf; // retornando ao main com valor do cálculo de 'mf';
}

float calc_alun_rep(float n_alunosrep, int i)   // declarando variáveis e importando valores de main;
{
    float res;  // declarando variável local;

    res = (n_alunosrep * 100) / i;

    return res; // retornando ao main com valor do cálculo de 'res';
}
