package gerencia_produtos;

public class Produto
{
    private String nome;
    private double codigo;
    private String descricao;
    private double valor;
    private int qtd;
    private String categoria;

    public void setNome(String nome)
    {
        this.nome = nome;
    }
    public void setCodigo(double codigo)
    {
        this.codigo = codigo;
    }
    public void setDescricao(String descricao)
    {
        this.descricao = descricao;
    }
    public void setValor(double preco)
    {
        this.valor = preco;
    }
    public void setQtd(int qtd)
    {
        this.qtd = qtd;
    }
    public void setCategoria(String categoria)
    {
        this.categoria = categoria;
    }
    public String getNome()
    {
        return this.nome;
    }
    public double getCodigo()
    {
        return this.codigo;
    }
    public String getDescricao()
    {
        return this.descricao;
    }
    public double getValor()
    {
        return this.valor;
    }
    public int getQtd()
    {
        return this.qtd;
    }
    public String getCategoria()
    {
        return this.categoria;
    }

    @Override
    public String toString()
    {
        return "Nome: " + nome + "\nCódigo: " + codigo + "\nDescrição: " + descricao + "\nValor: " + valor + "\nQuantidade: " + qtd + "\nCategoria: " + categoria;
    }
}