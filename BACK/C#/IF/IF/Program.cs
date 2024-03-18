using System;

namespace UsandoIF
{
    class Program
    {
        static void Main(string[] args)
        {   
            double nota1, nota2, nota3, media;
            Console.WriteLine("\ndigite suas nota de matematica");
            nota1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("\ndigite suas nota de português");
            nota2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("\ndigite suas nota de ciências");
            nota3 = Convert.ToDouble(Console.ReadLine());

            media = (nota1 + nota2 + nota3) / 3;

            if (media > 6)
            {
                Console.WriteLine($"você foi aprovado. Sua media foi: {media}");
            }
            else if (media == 6)
            {
                Console.WriteLine($"Você ficou de exame. Sua média foi: {media}");
            }
            else 
            {
                Console.WriteLine($"Você foi reprovado. Sua media foi: {media}");
            }
        }
    }
}