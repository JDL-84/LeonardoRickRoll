using System;
using System.ComponentModel;
using System.Drawing;
using System.Windows.Forms;
namespace KeyboardLightCheck
{

    public partial class frm_Main : Form
    {
        bool CAPSStats = false;
        bool NUMStats = false;
        bool ScrollStats = false;
        public frm_Main()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
            bgWrk.RunWorkerAsync();
        }

        private void bgWrk_DoWork(object sender, DoWorkEventArgs e)
        {
            CAPSStats =  Control.IsKeyLocked(Keys.CapsLock);
            ScrollStats = Control.IsKeyLocked(Keys.Scroll);
            NUMStats = Control.IsKeyLocked(Keys.NumLock);
        }

        private void SwitchLight(object label, bool CurrentStatus)
        {
           
           if (CurrentStatus)
            {
                ((Label)label).BackColor = Color.Yellow;
            }
            else
            {
                ((Label)label).BackColor = Color.DimGray;
            }
        }

        private void bgWrk_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
        {
            SwitchLight(lbl_CAPS, CAPSStats);
            SwitchLight(lbl_NUM, NUMStats);
            SwitchLight(lbl_SCROLL, ScrollStats);

            bgWrk.RunWorkerAsync();
        }
    }
}
