import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class Catalogo
{
    private List<Produto> produtos = new ArrayList<>();

    public void IncluiProduto(Produto p)
    {
        produtos.add(p);
    }

    public void RemoveProduto(Produto p)
    {
        produtos.remove(p);
    }

    public List<Produto> buscarPorNome(String nome)
    {
        return produtos.stream()
                .filter(p -> p.getNome().toUpperCase().contains(nome.toUpperCase()));
                .collect(Collectors.toList());
    }

    public List<Produto> buscarPorCategoria(String categoria)
    {
        return produtos.stream()
                .filter(p -> p.getCategoria().toUpperCase().contains(categoria.toUpperCase()));
                .collect(Collectors.toList());
    }

    public List<Produto> buscarTodos()
    {
        return new ArrayList<>(produtos);
    }

    public double valorTotalEstoque()
    {
        return produtos.stream()
                .mapToDouble(p -> p.getPreco() * p.getQtd())
                .sum();
    }

    public void comparaCodigo(long codigo)
    {
        Produto produto = produtos.stream()
                .filter(p -> p.getCodigo() == codigo)
                .findFirst()
                .orElse(null);

        if (produto != null)
        {
            System.out.println("Produto encontrado: " + produto.getNome());
        }
        else
        {
            System.out.println("Produto não encontrado");
        }
    }
}