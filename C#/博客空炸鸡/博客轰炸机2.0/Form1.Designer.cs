namespace 博客轰炸机2._0 {
    partial class Form1 {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing) {
            if (disposing && (components != null)) {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent() {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.name = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.关于ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.注意事项ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.声明ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.ListShow = new System.Windows.Forms.TextBox();
            this.TextShow = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.Count = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.button2 = new System.Windows.Forms.Button();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // name
            // 
            this.name.Font = new System.Drawing.Font("Comic Sans MS", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.name.ForeColor = System.Drawing.Color.Red;
            this.name.Location = new System.Drawing.Point(202, 28);
            this.name.Name = "name";
            this.name.Size = new System.Drawing.Size(177, 30);
            this.name.TabIndex = 0;
            this.name.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("华文楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.ForeColor = System.Drawing.Color.Black;
            this.label1.Location = new System.Drawing.Point(27, 33);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(168, 18);
            this.label1.TabIndex = 1;
            this.label1.Text = "请输入被轰炸的用户名";
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("华文楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button1.ForeColor = System.Drawing.Color.Black;
            this.button1.Location = new System.Drawing.Point(751, 31);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "开始";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.关于ToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(984, 25);
            this.menuStrip1.TabIndex = 3;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // 关于ToolStripMenuItem
            // 
            this.关于ToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.注意事项ToolStripMenuItem,
            this.声明ToolStripMenuItem});
            this.关于ToolStripMenuItem.Name = "关于ToolStripMenuItem";
            this.关于ToolStripMenuItem.Size = new System.Drawing.Size(68, 21);
            this.关于ToolStripMenuItem.Text = "使用说明";
            // 
            // 注意事项ToolStripMenuItem
            // 
            this.注意事项ToolStripMenuItem.Name = "注意事项ToolStripMenuItem";
            this.注意事项ToolStripMenuItem.Size = new System.Drawing.Size(124, 22);
            this.注意事项ToolStripMenuItem.Text = "注意事项";
            this.注意事项ToolStripMenuItem.Click += new System.EventHandler(this.注意事项ToolStripMenuItem_Click);
            // 
            // 声明ToolStripMenuItem
            // 
            this.声明ToolStripMenuItem.Name = "声明ToolStripMenuItem";
            this.声明ToolStripMenuItem.Size = new System.Drawing.Size(124, 22);
            this.声明ToolStripMenuItem.Text = "声明";
            this.声明ToolStripMenuItem.Click += new System.EventHandler(this.声明ToolStripMenuItem_Click);
            // 
            // ListShow
            // 
            this.ListShow.Font = new System.Drawing.Font("Comic Sans MS", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ListShow.ForeColor = System.Drawing.SystemColors.WindowText;
            this.ListShow.Location = new System.Drawing.Point(34, 80);
            this.ListShow.Multiline = true;
            this.ListShow.Name = "ListShow";
            this.ListShow.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.ListShow.Size = new System.Drawing.Size(515, 473);
            this.ListShow.TabIndex = 4;
            // 
            // TextShow
            // 
            this.TextShow.Font = new System.Drawing.Font("华文楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.TextShow.Location = new System.Drawing.Point(582, 80);
            this.TextShow.Multiline = true;
            this.TextShow.Name = "TextShow";
            this.TextShow.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.TextShow.Size = new System.Drawing.Size(372, 473);
            this.TextShow.TabIndex = 5;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("华文楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label2.ForeColor = System.Drawing.Color.Black;
            this.label2.Location = new System.Drawing.Point(434, 34);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(200, 18);
            this.label2.TabIndex = 6;
            this.label2.Text = "每篇文章需要被轰炸的次数";
            this.label2.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Count
            // 
            this.Count.Font = new System.Drawing.Font("Consolas", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Count.ForeColor = System.Drawing.Color.Red;
            this.Count.Location = new System.Drawing.Point(643, 30);
            this.Count.Name = "Count";
            this.Count.Size = new System.Drawing.Size(67, 26);
            this.Count.TabIndex = 7;
            this.Count.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Consolas", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(441, 584);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(513, 19);
            this.label3.TabIndex = 8;
            this.label3.Text = "Copyright (c) 2015/9/10 , jtahstu , All Rights Reserved.";
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("华文楷体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button2.Location = new System.Drawing.Point(832, 32);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 23);
            this.button2.TabIndex = 9;
            this.button2.Text = "停止";
            this.button2.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(984, 623);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.Count);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.TextShow);
            this.Controls.Add(this.ListShow);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.name);
            this.Controls.Add(this.menuStrip1);
            this.Font = new System.Drawing.Font("华文行楷", 8.999999F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MainMenuStrip = this.menuStrip1;
            this.MaximumSize = new System.Drawing.Size(1000, 662);
            this.MinimumSize = new System.Drawing.Size(1000, 662);
            this.Name = "Form1";
            this.Text = "博客轰炸机2.0";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox name;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem 关于ToolStripMenuItem;
        private System.Windows.Forms.TextBox ListShow;
        private System.Windows.Forms.TextBox TextShow;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox Count;
        private System.Windows.Forms.ToolStripMenuItem 注意事项ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 声明ToolStripMenuItem;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button button2;
    }
}

