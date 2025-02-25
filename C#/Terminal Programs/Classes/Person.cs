public class Person {

    // Ο κατασκευαστής καλείται ΠΑΝΤΑ και ΜΟΝΟ μετά το new.

    private string name;
    private int age;
    public Person() {
        name = "No Name";
        age = 18;
    }
    public Person(string n, int a) {
        name = n;
        age = a;
    }

    public string getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public void setName(string new_name) {
        name = new_name;
    }

    public void setAge(int new_age) {
        age = new_age;
    }

}