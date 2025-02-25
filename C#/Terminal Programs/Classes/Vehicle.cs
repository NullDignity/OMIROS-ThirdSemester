public class Vehicle {

    private string brand;
    private int wheels;

    public Vehicle() {
        brand = "Unknown";
        wheels = 2;
    }

    public Vehicle(string name, int num_wheels) {
        brand = name;
        wheels = num_wheels;
    }

    public string getBrand() {
        return brand;
    }

    public int getWheels() {
        return wheels;
    }

    public void setBrand(string new_brand) {
        brand = new_brand;
    }

    public void setWheels(int new_wheels) {
        wheels = new_wheels;
    }

}