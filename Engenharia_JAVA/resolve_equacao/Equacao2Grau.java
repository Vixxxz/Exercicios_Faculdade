class Equacao2Grau
{
        double a, b, c;
        double calculaDelta(Double a, Double b, Double c)
        {
                return Math.pow(b, 2) - 4*a*c;
        }

        double calculaX1 (Double a, Double b, Double c)
        {       
                return (-b - Math.sqrt(calculaDelta(a, b, c)))/(2*a);
                
        }       
        
        double calculaX2 (Double a, Double b, Double c)
        {       
                return (-b + Math.sqrt(calculaDelta(a, b, c)))/(2*a);
        }       
}