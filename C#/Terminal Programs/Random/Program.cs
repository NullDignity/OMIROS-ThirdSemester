public class Program {

    public static void Main() {

        Random rand = new();
        List<int> numbers_list = [];

        for (int i = 0; i < 30; i++) {
            numbers_list.Add(rand.Next(20,99));
        }

        foreach (int i in numbers_list) {
            Console.WriteLine(i);
        }

    }

}