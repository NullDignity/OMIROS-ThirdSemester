namespace Pizza_App
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text.Length == 0)
                MessageBox.Show("Please enter your address!");
            else if (comboBox1.Text.Length == 0)
                MessageBox.Show("Please select a pizza size!");
            else
            {
                float price;

                if (comboBox1.SelectedIndex == 0)
                    price = 5.00f;
                else if (comboBox1.SelectedIndex == 1)
                    price = 7.00f;
                else
                    price = 10.00f;

                for (int x = 0; x < checkedListBox1.CheckedItems.Count; x++)
                {
                    price += 0.50f;
                }

                labelPrice.Text = "Total Price: " + price.ToString("C2");
            }
        }
    }
}
