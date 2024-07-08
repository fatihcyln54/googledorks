using System;

abstract class BaseClass
{
    public abstract void Display(); // Abstract method

    public void Show()
    {
        Console.WriteLine("BaseClass Show method.");
    }
}

class DerivedClass : BaseClass
{
    public override void Display()
    {
        Console.WriteLine("DerivedClass Display method.");
    }
}

class Program
{
    static void Main(string[] args)
    {
        // BaseClass obj = new BaseClass(); // Hata verir, çünkü abstract sınıf örneklenemez.
        
        DerivedClass obj = new DerivedClass();
        obj.Display(); // DerivedClass Display method.
        obj.Show(); // BaseClass Show method.
    }
}
