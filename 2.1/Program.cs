namespace _2._1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите x: ");
            double x1 = double.Parse(Console.ReadLine());
            double y1 = 17 * Math.Pow(x1, 2) - 6 * x1 + 13;
            Console.WriteLine("a) "+y1);
            Console.Write("Введите a: ");
            double a = double.Parse(Console.ReadLine());
            double y2 = 3*Math.Pow(a, 2)+5*a-21;
            Console.WriteLine("б) " + y2);


        }
    }
}
