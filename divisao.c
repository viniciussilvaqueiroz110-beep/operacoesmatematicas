int divisao (int numero1,int numero2)
{
    int quociente = 0;


    if (numero2 == 0)
    {

        printf("não pode dividir");

        return;
    }
    while (numero1 >= numero2)
    {

        numero1 = numero1 - numero2;
        quociente++;
    }
  
    return quociente;
}
