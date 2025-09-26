namespace _2._2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите а - ");
            double a= double.Parse(Console.ReadLine());
            double resuslt = (Math.Pow(a, 2) + 10) / Math.Sqrt(Math.Pow(a, 2) + 1);
            Console.WriteLine(resuslt);
        }
    }
}
