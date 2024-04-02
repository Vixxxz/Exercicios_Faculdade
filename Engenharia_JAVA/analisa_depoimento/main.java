import javax.swing.*;
import java.time.LocalDate;

class Principal
{
    public static void main(String[] args) 
    {
        LocalDate data = null;

        String strData = JOptionPane.showInputDialog("Informe a data (Formato: AAAA-MM-DD): ");

        try 
        {
            data = LocalDate.parse(strData);
        } 
        catch (Exception e) 
        {
            JOptionPane.showMessageDialog(null, "Erro ao converter a data. Certifique-se de inserir no formato correto (AAAA-MM-DD).");
        }

        String nomeDepoente = JOptionPane.showInputDialog("Informe o nome do depoente: ");
        String depoimento = JOptionPane.showInputDialog("Informe o depoimento: ");
        String palavrasOdioInput = JOptionPane.showInputDialog("Informe as palavras de ódio separadas por virgulas: ");
        
        String[] palavrasOdio = palavrasOdioInput.split(",\\s*");

        Registros registro = new Registros(data, nomeDepoente, depoimento, palavrasOdio);

        registro.contaPalavrasOdio();

        JOptionPane.showMessageDialog(null, "Data do depoimento: " + registro.data);
        JOptionPane.showMessageDialog(null, "Nome do depoente: " + registro.nomeDepoente);
        JOptionPane.showMessageDialog(null, "Depoimento: " + registro.depoimento);
        JOptionPane.showMessageDialog(null, "Quantidade de palavras de ódio no texto: " + registro.qtdPalavras);
        JOptionPane.showMessageDialog(null, "Nivel de Censura: " + registro.classificaCensura());
    }
}
