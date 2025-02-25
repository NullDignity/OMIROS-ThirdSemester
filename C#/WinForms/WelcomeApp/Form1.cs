namespace WelcomeApp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            if (DateTime.Now.Hour <= 12)
                label1.Text = "Good morning, " + textBox1.Text + "!";
            else if (DateTime.Now.Hour > 12 && DateTime.Now.Minute <= 17)
                label1.Text = "Good afternoon, " + textBox1.Text + "!";
            else
                label1.Text = "Good evening, " + textBox1.Text + "!";

        }
    }
}
