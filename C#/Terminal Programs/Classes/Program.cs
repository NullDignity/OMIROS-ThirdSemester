using static Vehicle;

class Program {

    static public void Main() {

        Vehicle motorcycle = new();
        Vehicle suv = new("Hyundai",4);

        Console.WriteLine(motorcycle.getBrand() + " " + motorcycle.getWheels());
        Console.WriteLine(suv.getBrand() + " " + suv.getWheels());

    }

}