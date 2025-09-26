namespace _2._3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //a
            Console.Write("Введите а - ");
            double a = double.Parse(Console.ReadLine());
            double result1 = Math.Sqrt((2*a+Math.Sin(Math.Abs(3*a)))/3.56);
            Console.WriteLine(result1);
            //b
            Console.Write("Введите x - ");
            double x = double.Parse(Console.ReadLine());
            double result2 = Math.Sin((3.2 + Math.Sqrt(1 + x)) / Math.Abs(5 * x));      
            Console.Write(result2);

        }
    }
}
