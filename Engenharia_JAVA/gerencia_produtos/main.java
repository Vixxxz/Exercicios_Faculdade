import javax.swing.*;

class Principal
{
    public static void main(String[] args)
    {
        int qtdProdutos = JOption.showInputDialog("Insira a quantidade de produtos a serem preenchidos");
        foreach (contador in qtdProdutos)
        {
            Produto produto = new Produto();
            produto.nome = JOptionPane.showInputDialog("Insira o nome do produto");
            produto.preco = JOptionPane.showInputDialog("Insira o preço do produto");
            produto.quantidade = JOptionPane.showInputDialog("Insira a quantidade do produto");
            JOptionPane.showMessageDialog(null, produto.toString());
        }
    }
}