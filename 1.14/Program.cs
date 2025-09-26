namespace _1._14
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите 1 число: ");
            double user1= double.Parse(Console.ReadLine());
            Console.Write("Введите 2 число: ");
            double user2 = double.Parse(Console.ReadLine());
            Console.Write("Введите 3 число: ");
            double user3 = double.Parse(Console.ReadLine());
            Console.WriteLine(user1 + "  " + user2+"  "+ user3);
        }
    }
}
