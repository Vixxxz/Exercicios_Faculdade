using System;
using System.Linq;

namespace DiferençaArrey
{
    public class Kata
    {
        public static int[] ArrayDiff(int[] a, int[] b)
        {
            IEnumerable<int> arreyA = a.Except(b);
            
        }

        public static void Main (string[] args)
        {
            
        } 
    }
}