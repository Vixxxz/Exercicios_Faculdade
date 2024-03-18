using System;

namespace CalcularAreaCirculo
{
    class Program
    {
        static void Main(string[] args)
        {
            decimal min = decimal.MinValue;
            decimal max = decimal.MaxValue;
            double areaCirculo, raio = 2.5;

            Console.WriteLine($"minimo: {min} e maximo: {max}");
            
            areaCirculo = raio * raio * Math.PI;

            Console.WriteLine(areaCirculo);
        }
    }
}

