
namespace KeyboardLightCheck
{
    partial class frm_Main
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lbl_CAPS = new System.Windows.Forms.Label();
            this.lbl_SCROLL = new System.Windows.Forms.Label();
            this.lbl_NUM = new System.Windows.Forms.Label();
            this.bgWrk = new System.ComponentModel.BackgroundWorker();
            this.SuspendLayout();
            // 
            // lbl_CAPS
            // 
            this.lbl_CAPS.BackColor = System.Drawing.Color.DimGray;
            this.lbl_CAPS.Location = new System.Drawing.Point(12, 9);
            this.lbl_CAPS.Name = "lbl_CAPS";
            this.lbl_CAPS.Size = new System.Drawing.Size(100, 104);
            this.lbl_CAPS.TabIndex = 0;
            this.lbl_CAPS.Text = "CAPS";
            this.lbl_CAPS.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lbl_SCROLL
            // 
            this.lbl_SCROLL.BackColor = System.Drawing.Color.DimGray;
            this.lbl_SCROLL.Location = new System.Drawing.Point(118, 9);
            this.lbl_SCROLL.Name = "lbl_SCROLL";
            this.lbl_SCROLL.Size = new System.Drawing.Size(100, 104);
            this.lbl_SCROLL.TabIndex = 1;
            this.lbl_SCROLL.Text = "SCROLL";
            this.lbl_SCROLL.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lbl_NUM
            // 
            this.lbl_NUM.BackColor = System.Drawing.Color.DimGray;
            this.lbl_NUM.Location = new System.Drawing.Point(224, 9);
            this.lbl_NUM.Name = "lbl_NUM";
            this.lbl_NUM.Size = new System.Drawing.Size(100, 104);
            this.lbl_NUM.TabIndex = 2;
            this.lbl_NUM.Text = "NUM";
            this.lbl_NUM.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // bgWrk
            // 
            this.bgWrk.DoWork += new System.ComponentModel.DoWorkEventHandler(this.bgWrk_DoWork);
            this.bgWrk.RunWorkerCompleted += new System.ComponentModel.RunWorkerCompletedEventHandler(this.bgWrk_RunWorkerCompleted);
            // 
            // frm_Main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(332, 125);
            this.Controls.Add(this.lbl_NUM);
            this.Controls.Add(this.lbl_SCROLL);
            this.Controls.Add(this.lbl_CAPS);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.Name = "frm_Main";
            this.Text = "BadUSB Keyboard Visualiser ";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label lbl_CAPS;
        private System.Windows.Forms.Label lbl_SCROLL;
        private System.Windows.Forms.Label lbl_NUM;
        private System.ComponentModel.BackgroundWorker bgWrk;
    }
}

