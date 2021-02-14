using System;
using System.Collections.Generic;
using System.IO;

namespace rand_from_file
{
    class Program
    {
        static Random random = new Random((int)DateTime.Now.Ticks);

        static void Main(string[] args)
        {
            Console.WriteLine("Random Sentences");
            List<string> list = new List<string>( File.ReadAllLines("sentences.txt") );
            int len = list.Count;

            for (int i = 0; i < 4; i++)
            {
                Console.WriteLine(list[ random.Next(0, len -1) ]);
            }


        }
    }
}
