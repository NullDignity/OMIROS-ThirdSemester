class Program {

    public static void Main() {

        List <string> codenames = ["alpha", "bravo", "charlie", "delta", "eco", "foxtrot"];
        
        if (codenames.Contains("BrAvO")) {
            Console.WriteLine("Exists");
        } else {
            Console.WriteLine("Does Not Exist");
        }

    }

}