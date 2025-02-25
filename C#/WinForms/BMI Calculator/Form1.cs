namespace BMI_Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonSubmit_Click(object sender, EventArgs e)
        {
            if (String.IsNullOrEmpty(textBoxWeight.Text) || String.IsNullOrEmpty(textBoxHeight.Text))
            {
                labelBMI.Text = String.Empty;
                labelText.Text = String.Empty;
                MessageBox.Show("Invalid Input.");
                return;
            }

            if (Convert.ToDouble(textBoxWeight.Text) <= 0 || Convert.ToDouble(textBoxWeight.Text) > 600)
            {
                labelBMI.Text = String.Empty;
                labelText.Text = String.Empty;
                MessageBox.Show("Invalid Weight.");
                return;
            }

            if (Convert.ToDouble(textBoxHeight.Text) <= 0 || Convert.ToDouble(textBoxHeight.Text) > 4)
            {
                labelBMI.Text = String.Empty;
                labelText.Text = String.Empty;
                MessageBox.Show("Invalid Height.");
                return;
            }

            double bmi = Convert.ToDouble(textBoxWeight.Text) / Math.Pow(Convert.ToDouble(textBoxHeight.Text), 2);
            labelBMI.Text = Convert.ToString(Math.Truncate(bmi*10)/10);
            if (bmi < 18.5)
            {
                labelText.Text = "Underweight";
            }
            else if (bmi >= 18.5 && bmi < 25)
            {
                labelText.Text = "Normal Weight";
            }
            else if (bmi >= 25 && bmi < 30)
            {
                labelText.Text = "Overweight";
            }
            else
            {
                labelText.Text = "Obese";
            }
        }
    }
}