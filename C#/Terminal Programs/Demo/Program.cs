using System;
					
// Console.WriteLine("{0} {1}", a, 6) - alternate method of printing

public class Program
{
	public static void Main()
	{

        Point A = new Point();
        Point B = new Point();
        Point M = new Point();

        A.x = Convert.ToInt32(Console.ReadLine());
        A.y = Convert.ToInt32(Console.ReadLine());

        B.x = Convert.ToInt32(Console.ReadLine());
        B.y = Convert.ToInt32(Console.ReadLine());

        M.x = (A.x+A.y)/2;
        M.y = (B.x+B.y)/2;

        // TBD next lesson


    /*
        int point_A_x = Convert.ToInt32(Console.ReadLine());
        int point_A_y = Convert.ToInt32(Console.ReadLine());
        int point_B_x = Convert.ToInt32(Console.ReadLine());
        int point_B_y = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("A(" + point_A_x + "," + point_A_y + ")");
        Console.WriteLine("B(" + point_B_x + "," + point_B_y + ")");

        double middle_x = (point_A_x+point_B_x)/2;
        double middle_y = (point_A_y+point_B_y)/2;

        Console.WriteLine("Middle(" + middle_x + "," + middle_y + ")");
    */


	}
}