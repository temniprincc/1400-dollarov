namespace _1._13
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите любое целое число: ");
            int user = int.Parse(Console.ReadLine());
            Console.WriteLine("Следующее за числом "+user+" число - "+ (user+1));
            Console.WriteLine("Для числа "+user+ " предыдущее число - "+(user-1));
        }
    }
}
