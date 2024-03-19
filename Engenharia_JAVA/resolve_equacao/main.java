import javax.swing.*;

class Pincipal
{
    public static void main(String[] args) 
    {
        double delta, x1, x2;
        Equacao2Grau x = new Equacao2Grau();
        JOptionPane.showMessageDialog(null,"Digite os valores de a, b e c: ");
        String aStr = JOptionPane.showInputDialog("Informe o coeficiente a:");
        x.a = Double.valueOf(aStr);
        String bStr = JOptionPane.showInputDialog("Informe o coeficiente b:");
        x.b = Double.valueOf(bStr);
        String cStr = JOptionPane.showInputDialog("Informe o coeficiente c:");
        x.c = Double.valueOf(cStr);

        delta = x.calculaDelta(x.a, x.b, x.c);
        x1 = x.calculaX1(x.a, x.b, x.c);
        x2 = x.calculaX2(x.a, x.b, x.c);

        if (delta < 0)
        {
            JOptionPane.showMessageDialog(null, "Não há raizes reais para o delta");
            JOptionPane.showMessageDialog(null, "X1 e X2 são números imaginários");
        } 
        else if (delta == 0)
        {
            JOptionPane.showMessageDialog(null, "O valor de delta é: " + delta);
            JOptionPane.showMessageDialog(null, "O valor de X1 e X2 é: " + x1);
        }
        else 
        {
            JOptionPane.showMessageDialog(null, "O valor de delta é: " + delta);
            JOptionPane.showMessageDialog(null, "O valor de X1 é: " + x1);
            JOptionPane.showMessageDialog(null, "O valor de X2 é: " + x2);
        }
    }
}