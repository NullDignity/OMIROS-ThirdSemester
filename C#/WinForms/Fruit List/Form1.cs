namespace Fruit_List
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void checkedListBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            int N = checkedListBox1.CheckedItems.Count;
            for (int i = 0; i < N; i++)
            {
                label1.Text += checkedListBox1.CheckedItems[i].ToString();
                if (!(i == N - 1))
                    label1.Text += $", {Environment.NewLine}";
            }
            // "Environment.NewLine" = "\n"
        }

        private void quitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
