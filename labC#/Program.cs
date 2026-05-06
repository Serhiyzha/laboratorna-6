using System;
using ClassLibrary1;

class Program
{
    static void Main(string[] args)
    {
        containerC_ container = new containerC_();
        container.Addstring("Hello");
        container.Addstring("World");
        container.Addstring("C#");
        Console.WriteLine("Перші символи: " + container.FirstChars());
        Console.WriteLine("Найкоротший рядок: " + container.shortest());
        Console.WriteLine("Частота літери 'l': " + container.frequency('l'));
    }
}