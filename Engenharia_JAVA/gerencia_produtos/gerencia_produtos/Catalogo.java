package gerencia_produtos;

import javax.swing.*;
import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class Catalogo
{
    private List<Produto> produtos = new ArrayList<>();

    public void IncluiProduto(Produto produto)
    {
        Produto produtoEncontrado = produtos.stream()
                .filter(p ->p.getCodigo() == produto.getCodigo())
                .findFirst()
                .orElse(null);

        if (produtoEncontrado != null)
        {
            JOptionPane.showInputDialog("Esse produto ja existe: " + produto.getNome());
        }
        else
        {
            produtos.add(produto);
        }
    }

    public void RemoveProduto(double codigo)
    {
        Produto produtoEncontrado = produtos.stream()
                .filter(p ->p.getCodigo() == codigo)
                .findFirst()
                .orElse(null);

        if (produtoEncontrado != null)
        {
            produtos.remove(produtoEncontrado);

        }
        else
        {
            JOptionPane.showInputDialog("Esse produto não existe.");
        }
    }

    public List<Produto> buscarPorNome(String nome)
    {
        return produtos.stream()
                .filter(p -> p.getNome().toUpperCase().contains(nome.toUpperCase()))
                .collect(Collectors.toList());
    }

    public List<Produto> buscarPorCategoria(String categoria)
    {
        return produtos.stream()
                .filter(p -> p.getCategoria().toUpperCase().contains(categoria.toUpperCase()))
                .collect(Collectors.toList());
    }

    public List<Produto> buscarTodos()
    {
        return new ArrayList<>(produtos);
    }

    public double valorTotalEstoque()
    {
        return produtos.stream()
                .mapToDouble(p -> p.getValor() * p.getQtd())
                .sum();
    }
}