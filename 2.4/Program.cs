namespace _2._4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите длину стороны квадрата - ");
            int user = int.Parse(Console.ReadLine());
            int res = user * 4;
            Console.WriteLine("Периметр - "+res);
        }
    }
}
