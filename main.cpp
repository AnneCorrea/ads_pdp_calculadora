using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace calculadora2._0
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		private void button3_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "0";
		}

		private void button4_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "1";
		}

		private void button2_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "2";
		}

		private void button14_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "3";
		}

		private void vv_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "4";
		}

		private void button8_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "5";
		}

		private void button5_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "6";
		}

		private void button1_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "7";
		}

		private void button9_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "8";
		}

		private void button6_Click(object sender, EventArgs e)
		{
			txtResultado.Text += "9";
		}

		private void button13_Click(object sender, EventArgs e)
		{
			txtResultado.Text += ".";
		}
	}
}
