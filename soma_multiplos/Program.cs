//Soma multiplos de 3 e 5; Negativo = 0.
using System;

namespace SomandoMultiplos
{
    public static class Kata
    {
        public static void Main(string[] args)
        {
            int resultado = 0, valor = 0;
            Console.WriteLine("Digite um valor para encontrar a soma dos multiplos de 3 e 5");
            int.TryParse(Console.ReadLine(), out valor);
            resultado = Solution(valor);
            Console.WriteLine(resultado);
        }
        public static int Solution(int value)
        {
            int somaMultiplos = 0;
            for (int i = value - 1; i > 0; i--)
            {
                if  (i % 3 == 0 || i % 5 == 0)
                {
                    somaMultiplos += i;
                }
            }
            return somaMultiplos;
        }
    }
}
