class Program {

    static void test() {
        Console.WriteLine("Hello Mr. President");
    }

    static void prNt(int N) {
        for (int x = 1; x <= N; x++)
            Console.WriteLine(x);
    }

    static void add(int a, int b) {
        Console.WriteLine(a+b);
    }

    static void add(int a, int b, int c) { // Overloading with different amount of Parameters
        Console.WriteLine(a+b+c);
    }

    static int multi(int a, int b) {
        return a*b;
    }

    static double multi(double a, double b) { // Overloading with different type of variables
        return a*b;
    }
    
    static bool isEven(int X) {
        return X % 2 == 0;
    }

    static void Main() {
        test();
        prNt(3);
        add(10, 2);
        add(5, 7, 12);
        Console.WriteLine(multi(2, 4));
        Console.WriteLine(multi(2.5, 4.2));
        Console.WriteLine(isEven(761));
    }
}