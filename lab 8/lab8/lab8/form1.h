#pragma once

namespace lab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form1
	/// </summary>
	public ref class form1 : public System::Windows::Forms::Form
	{
	public:
		form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ buttoncancel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttondot;
	private: System::Windows::Forms::Button^ buttoneq;
	private: System::Windows::Forms::Button^ buttondiv;
	private: System::Windows::Forms::Button^ buttonmult;
	private: System::Windows::Forms::Button^ buttonminus;
	private: System::Windows::Forms::Button^ buttonplus;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttoncancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttondot = (gcnew System::Windows::Forms::Button());
			this->buttoneq = (gcnew System::Windows::Forms::Button());
			this->buttondiv = (gcnew System::Windows::Forms::Button());
			this->buttonmult = (gcnew System::Windows::Forms::Button());
			this->buttonminus = (gcnew System::Windows::Forms::Button());
			this->buttonplus = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(489, 61);
			this->textBox1->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->buttoncancel, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button4, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button5, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button6, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button7, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button8, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button9, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button0, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->buttondot, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->buttoneq, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->buttondiv, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->buttonmult, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->buttonminus, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->buttonplus, 3, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 211);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(489, 386);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// buttoncancel
			// 
			this->buttoncancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttoncancel->Location = System::Drawing::Point(3, 3);
			this->buttoncancel->Name = L"buttoncancel";
			this->buttoncancel->Size = System::Drawing::Size(116, 71);
			this->buttoncancel->TabIndex = 14;
			this->buttoncancel->Text = L"C";
			this->buttoncancel->UseVisualStyleBackColor = true;
			this->buttoncancel->Click += gcnew System::EventHandler(this, &form1::buttoncancel_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(3, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(125, 234);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 71);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(247, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 71);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(3, 157);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 71);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(125, 157);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 71);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(247, 157);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 71);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(3, 80);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(116, 71);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(125, 80);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(116, 71);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(247, 80);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(116, 71);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &form1::button9_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(3, 311);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(116, 71);
			this->button0->TabIndex = 9;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &form1::button0_Click);
			// 
			// buttondot
			// 
			this->buttondot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttondot->Location = System::Drawing::Point(125, 311);
			this->buttondot->Name = L"buttondot";
			this->buttondot->Size = System::Drawing::Size(116, 71);
			this->buttondot->TabIndex = 10;
			this->buttondot->Text = L".";
			this->buttondot->UseVisualStyleBackColor = true;
			this->buttondot->Click += gcnew System::EventHandler(this, &form1::buttondot_Click);
			// 
			// buttoneq
			// 
			this->buttoneq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttoneq->Location = System::Drawing::Point(247, 311);
			this->buttoneq->Name = L"buttoneq";
			this->buttoneq->Size = System::Drawing::Size(116, 71);
			this->buttoneq->TabIndex = 13;
			this->buttoneq->Text = L"=";
			this->buttoneq->UseVisualStyleBackColor = true;
			this->buttoneq->Click += gcnew System::EventHandler(this, &form1::buttoneq_Click);
			// 
			// buttondiv
			// 
			this->buttondiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttondiv->Location = System::Drawing::Point(369, 311);
			this->buttondiv->Name = L"buttondiv";
			this->buttondiv->Size = System::Drawing::Size(116, 71);
			this->buttondiv->TabIndex = 16;
			this->buttondiv->Text = L"/";
			this->buttondiv->UseVisualStyleBackColor = true;
			this->buttondiv->Click += gcnew System::EventHandler(this, &form1::buttondiv_Click);
			// 
			// buttonmult
			// 
			this->buttonmult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonmult->Location = System::Drawing::Point(369, 234);
			this->buttonmult->Name = L"buttonmult";
			this->buttonmult->Size = System::Drawing::Size(116, 71);
			this->buttonmult->TabIndex = 15;
			this->buttonmult->Text = L"*";
			this->buttonmult->UseVisualStyleBackColor = true;
			this->buttonmult->Click += gcnew System::EventHandler(this, &form1::buttonmult_Click);
			// 
			// buttonminus
			// 
			this->buttonminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonminus->Location = System::Drawing::Point(369, 157);
			this->buttonminus->Name = L"buttonminus";
			this->buttonminus->Size = System::Drawing::Size(116, 71);
			this->buttonminus->TabIndex = 12;
			this->buttonminus->Text = L"-";
			this->buttonminus->UseVisualStyleBackColor = true;
			this->buttonminus->Click += gcnew System::EventHandler(this, &form1::buttonminus_Click);
			// 
			// buttonplus
			// 
			this->buttonplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonplus->Location = System::Drawing::Point(369, 80);
			this->buttonplus->Name = L"buttonplus";
			this->buttonplus->Size = System::Drawing::Size(116, 71);
			this->buttonplus->TabIndex = 11;
			this->buttonplus->Text = L"+";
			this->buttonplus->UseVisualStyleBackColor = true;
			this->buttonplus->Click += gcnew System::EventHandler(this, &form1::buttonplus_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 54);
			this->label1->TabIndex = 2;
			// 
			// form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(513, 609);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->textBox1);
			this->Name = L"form1";
			this->Text = L"Калькулятор (Авдєєва С.)";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		float x, y, res;
		char oper;

	private: double calculate(double x, char oper, double y)
	{
		switch (oper)
		{
		case '+': { return x + y; }
		case '-': { return x - y; }
		case '*': { return x * y; }
		case '/': { return x / y; }
		default: { return 0.0; }
		}
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "9";
	}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "0";
	}
	private: System::Void buttondot_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + ",";
	}


	private: System::Void buttonplus_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(textBox1->Text);
		oper = '+';
		textBox1->Text = textBox1->Text + "+";
		label1->Text = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void buttonminus_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(textBox1->Text);
		oper = '-';
		textBox1->Text = textBox1->Text + "-";
		label1->Text = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void buttonmult_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(textBox1->Text);
		oper = '*';
		textBox1->Text = textBox1->Text + "*";
		label1->Text = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void buttondiv_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(textBox1->Text);
		oper = '/';
		textBox1->Text = textBox1->Text + "/";
		label1->Text = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void buttoneq_Click(System::Object^ sender, System::EventArgs^ e) {
		y = Convert::ToDouble(textBox1->Text);
		label1->Text = label1->Text + textBox1->Text;
		if ((y == 0) && (oper == '/')) { textBox1->Text = "Помилка"; }
		else
		{
			res = calculate(x, oper, y);
			textBox1->Text = Convert::ToString(res);
		}
	}


	private: System::Void buttoncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		label1->Text = "";
	}
};
}
