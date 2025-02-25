namespace Temperature_Converter
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonSubmitCelsius_Click(object sender, EventArgs e)
        {
            double c = Convert.ToDouble(textBoxCelsius.Text);
            double f_calculation = c * 1.8 + 32; // C to F formula
            labelDisplay.Text = Convert.ToString(f_calculation) + "°F";
        }

        private void buttonSubmitFahrenheit_Click(object sender, EventArgs e)
        {
            double f = Convert.ToDouble(textBoxFahrenheit.Text);
            double c_calculation = (f - 32) / 1.8; // F to C formula
            labelDisplay.Text = Convert.ToString(c_calculation) + "°C";
        }

        private void textBoxCelsius_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBoxFahrenheit_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
