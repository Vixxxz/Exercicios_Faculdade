using System;

namespace Conversor
{
    public class Kata
    {
    public static string NumberToString(int num)
        {
            return Convert.ToString(num);
        }
    }

    public class Teste
    {
        public static void Main (string[] args)
        {
            int num = 0;
            Console.WriteLine("digite o numero para ser convertido em string");
            int.TryParse(Console.ReadLine(), out num);
            Console.WriteLine($"'{Kata.NumberToString(num)}'");
        }
    }
}