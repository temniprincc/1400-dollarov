namespace _2._5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите радиус - ");
            double r = double.Parse(Console.ReadLine());
            double res = 2 * r;
            Console.WriteLine("Диаметр - "+res);
        }
    }
}
