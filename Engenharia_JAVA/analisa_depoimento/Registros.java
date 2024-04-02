import java.time.LocalDate;

class Registros 
{
    LocalDate data;
    String nomeDepoente, depoimento;
    String[] palavrasOdio;
    int qtdPalavras;

    Registros(LocalDate data, String nomeDepoente, String depoimento, String[] palavrasOdio)
    {
        this.data = data;
        this.nomeDepoente = nomeDepoente;
        this.depoimento = depoimento;
        this.palavrasOdio = palavrasOdio;
    }

    void contaPalavrasOdio()
    {
        int indice = -1;
        for (String palavra : palavrasOdio)
        {
            while ((indice = depoimento.indexOf(palavra, indice + 1)) != -1) 
            {
                qtdPalavras++;
            }
        }
    }

    String classificaCensura()
    {
        if (qtdPalavras > 10)
        {
            return "Inseguro";
        }
        else if (qtdPalavras > 5 && qtdPalavras <= 10)
        {
            return "Aceitável";
        }
        else 
        {
            return "Livre";
        }
    }
}
