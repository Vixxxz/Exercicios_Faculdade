package gerencia_produtos;

import javax.swing.*;

public class Principal
{
    public static void main(String[] args)
    {
        int qtdProdutos = 0, continua = 0;
        Catalogo catalogo = new Catalogo();
        do
        {
            int menu = Integer.parseInt(JOptionPane.showInputDialog("Dite confome sua necessidade. \n 1: para adicionar um produto. \n 2: para remover um produto. \n 3: para buscar por nome. \n 4: para buscar por categoria. \n 5: para buscar todos. \n 6: para calcular o valor totoal do estoque."));
            switch (menu) {
                case 1: {
                    qtdProdutos = Integer.parseInt(JOptionPane.showInputDialog("Insira a quantidade de produtos a serem preenchidos. \n Digite 0 para não incluir nenhum produto."));
                    for (int i = 0; i < qtdProdutos; i++) {
                        Produto produto = new Produto();
                        String nome = JOptionPane.showInputDialog("Insira o nome do produto");
                        produto.setNome(nome);
                        double valor = Double.parseDouble(JOptionPane.showInputDialog("Insira o preço do produto"));
                        produto.setValor(valor);
                        int qtd = Integer.parseInt(JOptionPane.showInputDialog("Insira a quantidade do produto"));
                        produto.setQtd(qtd);
                        double codigo = Double.parseDouble(JOptionPane.showInputDialog("Insira o codigo do produto"));
                        produto.setCodigo(codigo);
                        String categoria = JOptionPane.showInputDialog("Insira a categoria do produto");
                        produto.setCategoria(categoria);
                        String descricao = JOptionPane.showInputDialog("Insira a descricao do produto");
                        produto.setDescricao(descricao);
                        catalogo.IncluiProduto(produto);
                    }
                    break;
                }
                case 2: {
                    qtdProdutos = Integer.parseInt(JOptionPane.showInputDialog("Insira a quantidade de produtos a serem removidos. \n Digite 0 para não remover nenhum produto."));
                    for (int i = 0; i < qtdProdutos; i++) {
                        double codigo = Double.parseDouble(JOptionPane.showInputDialog("Insira o codigo do produto a ser removido."));
                        catalogo.RemoveProduto(codigo);
                    }
                    break;
                }
                case 3: {
                    String nome = JOptionPane.showInputDialog("Insira o nome do produto a ser procurado.");
                    for (Produto produto : catalogo.buscarPorNome(nome))
                        JOptionPane.showMessageDialog(null, produto.toString());
                    break;
                }
                case 4: {
                    String categoria = JOptionPane.showInputDialog("Insira a categoria do produto a ser procurado.");
                    for (Produto produto : catalogo.buscarPorCategoria(categoria))
                        JOptionPane.showMessageDialog(null, produto.toString());
                    break;
                }
                case 5: {
                    for (Produto produto : catalogo.buscarTodos())
                        JOptionPane.showMessageDialog(null, produto.toString());
                    break;
                }
                case 6: {
                    JOptionPane.showMessageDialog(null, "o valor total do estoque é: " + catalogo.valorTotalEstoque());
                    break;
                }
            }
            continua = Integer.parseInt(JOptionPane.showInputDialog("Deseja continuar? 1: para sim e 0: para não"));
        } while(continua == 1);
    }
}