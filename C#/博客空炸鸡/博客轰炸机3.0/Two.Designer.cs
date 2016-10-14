namespace 博客轰炸机3._0 {
    partial class Two {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing) {
            if (disposing && (components != null)) {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent() {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Two));
            this.link = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.show = new System.Windows.Forms.TextBox();
            this.count = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // link
            // 
            this.link.Font = new System.Drawing.Font("Consolas", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.link.Location = new System.Drawing.Point(40, 57);
            this.link.Multiline = true;
            this.link.Name = "link";
            this.link.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.link.Size = new System.Drawing.Size(585, 529);
            this.link.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.Location = new System.Drawing.Point(37, 23);
            this.label1.Name = "label1";
            this.label1.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.label1.Size = new System.Drawing.Size(376, 16);
            this.label1.TabIndex = 1;
            this.label1.Text = "请输入需要轰炸的博客的多条链接，每个链接占一行";
            // 
            // show
            // 
            this.show.Font = new System.Drawing.Font("楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.show.Location = new System.Drawing.Point(650, 57);
            this.show.Multiline = true;
            this.show.Name = "show";
            this.show.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.show.Size = new System.Drawing.Size(322, 529);
            this.show.TabIndex = 2;
            // 
            // count
            // 
            this.count.Font = new System.Drawing.Font("Consolas", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.count.Location = new System.Drawing.Point(631, 19);
            this.count.Name = "count";
            this.count.Size = new System.Drawing.Size(70, 26);
            this.count.TabIndex = 3;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label2.Location = new System.Drawing.Point(425, 23);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(200, 16);
            this.label2.TabIndex = 4;
            this.label2.Text = "请输入每篇博客轰炸的次数";
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button1.Location = new System.Drawing.Point(730, 20);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 5;
            this.button1.Text = "开始";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label3.Location = new System.Drawing.Point(499, 597);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(456, 16);
            this.label3.TabIndex = 6;
            this.label3.Text = "Copyright (c) 2015/9/14 , jtahstu , All Rights Reserved.";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label4.ForeColor = System.Drawing.Color.Red;
            this.label4.Location = new System.Drawing.Point(40, 596);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(440, 16);
            this.label4.TabIndex = 7;
            this.label4.Text = "注意：请严格按格式输入链接，请勿添加空行或多余的空格等";
            // 
            // Two
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(984, 623);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.count);
            this.Controls.Add(this.show);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.link);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Two";
            this.Text = "博客轰炸机2.0";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox link;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox show;
        private System.Windows.Forms.TextBox count;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
    }
}