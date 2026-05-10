using System;
using System.Windows.Forms;

class Program
{
    [STAThread]
    static void Main()
    {
        MessageBox.Show(
            "Hello World!",
            "C# Hello World",
            MessageBoxButtons.OK,
            MessageBoxIcon.Information
        );
    }
}