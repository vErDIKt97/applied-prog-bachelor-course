using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Windows.Forms;
namespace Lab2
{
    public class Controller
    {
        FileContent file = new FileContent();
        public string Read()
        {
            OpenFileDialog oDialog = new OpenFileDialog();
            if (oDialog.ShowDialog() != DialogResult.OK)
            {
                return "No file selected!";
            }
            return file.ReadFile(oDialog.FileName); // call model
        }
        public void Save(string S)
        {
            if ( file.FilePath == null)
            {
                MessageBox.Show("No file selected!");
                return;
            }
            using (StreamWriter wFile = new StreamWriter(file.FilePath))
            {
                wFile.Write(S);
                MessageBox.Show("Job's done");
            }
            file.OverwriteFileText(S); // overwrite text on memory (model)
        }
    }
}
  
