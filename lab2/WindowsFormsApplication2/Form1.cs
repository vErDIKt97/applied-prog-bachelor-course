using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace Lab2
{
    public partial class View : Form
    {
        Controller controller = new Controller();
        public View()
        {
            InitializeComponent();
        }

 
        private void button1_Click_1(object sender, EventArgs e)
        {
            textBox1.Text=controller.Read();      
        }

        private void button2_Click(object sender, EventArgs e)
        {
            controller.Save(textBox1.Text); 
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
