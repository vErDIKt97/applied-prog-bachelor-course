using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Windows.Forms;

namespace Lab2
{
   public class FileContent //model
    {
        string fileText; //  Saves text for later use
        public string FilePath { get; set; }
        public string ReadFile (string S)
        {
            FilePath = S;
            using (StreamReader rFile = new StreamReader(FilePath))
            {
                fileText = rFile.ReadToEnd();
                return fileText;
            }
        }
        public void OverwriteFileText(string S)
        {
            fileText = S;
        }
    }
}
