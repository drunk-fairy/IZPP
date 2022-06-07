#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

namespace lab71 {

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
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(148, 17);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(291, 356);
			this->listBox1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 452);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 452);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(321, 452);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(79, 22);
			this->textBox3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 418);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"початкове";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(167, 418);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"кінцеве";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(320, 418);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 21);
			this->label3->TabIndex = 6;
			this->label3->Text = L"крок";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(468, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(442, 356);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &form1::pictureBox1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LemonChiffon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(549, 418);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(303, 68);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Виконати табуляцію й намалювати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form1::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 40);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 20);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"функція 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 66);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(90, 20);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"функція 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(21, 17);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(121, 263);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Функції:";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 144);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(90, 20);
			this->radioButton5->TabIndex = 13;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"функція 5";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 118);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(90, 20);
			this->radioButton4->TabIndex = 12;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"функція 4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 92);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(90, 20);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"функція 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(943, 528);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"form1";
			this->Text = L"Task 1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	double W, H;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox1->Items->Clear();

		double a, b, h, R;

		W = pictureBox1->Width;
		H = pictureBox1->Height;

		pictureBox1->Refresh();

		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != ""))
		{
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			h = Convert::ToDouble(textBox3->Text);

			if (radioButton1->Checked == true)
			{
				for (double t = a; t <= b; t = t + h)
				{
					R = f1(t);
					listBox1->Items->Add("x = " + t + "		" + R);
				}
			}
			else if (radioButton2->Checked == true)
			{
				for (double t = a; t <= b; t = t + h)
				{
					R = f2(t);
					listBox1->Items->Add("x = " + t + "		" + R);
				}
			}
			else if (radioButton3->Checked == true)
			{
				for (double t = a; t <= b; t = t + h)
				{
					R = f3(t);
					listBox1->Items->Add("x = " + t + "		" + R);
				}
			}
			else if (radioButton4->Checked == true)
			{
				for (double t = a; t <= b; t = t + h)
				{
					R = f4(t);
					listBox1->Items->Add("x = " + t + "		" + R);
				}
			}
			else if (radioButton5->Checked == true)
			{
				for (double t = a; t <= b; t = t + h)
				{
					R = f5(t);
					listBox1->Items->Add("x = " + t + "		" + R);
				}
			}
			else
			{
				MessageBox::Show("Спочатку оберіть функцію", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}

		}
		else
		{
			MessageBox::Show("Вкажіть початкове й кінцеве значення та крок", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

		}
	}	

	private: System::Double f1(double x)
	{
		return 5 * cos(2 * x + (float)M_PI);
	}

	private: System::Double f2(double x)
	{
		return pow(cos(x), 2) + 2 * x;
	}

	private: System::Double f3(double x)
	{
		return 3 * pow(x, 5) + 20 * pow(x, 2) - 20 * x + 3;
	}

	private: System::Double f4(double x)
	{
		return sin(x - 0.5);
	}

	private: System::Double f5(double x)
	{
		if (x > 0) {
			return cos(sqrt(x));
		}
		else { return 1; }
	}

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		String^ Text = "Графік фунуції";
		Brush^ Кисть = gcnew SolidBrush(Color::Black);
		Font = gcnew System::Drawing::Font("Times New Roman", 14, FontStyle::Bold);

		e->Graphics->DrawString(Text, Font, Кисть, 150, 50);

		double halfW = W / 2., halfH = H / 8.;

		e->Graphics->DrawLine(System::Drawing::Pens::Black, 0, halfH, W, halfH);
		e->Graphics->DrawLine(System::Drawing::Pens::Black, halfW, 0, halfW, H);

		int ixPrev = -1, iyPrev = (int)halfH;

		for (int ix = 0; ix < W; ix++)
		{
			float x = (ix - halfW) / halfW;
			x = 2 * x * (float)M_PI;
			float y;

			if (radioButton1->Checked == true) { y = (float)(f1(x)); }
			else if (radioButton2->Checked == true) { y = (float)(f2(x)); }
			else if (radioButton3->Checked == true) { y = (float)(f3(x)); }
			else if (radioButton4->Checked == true) { y = (float)(f4(x)); }
			else if (radioButton5->Checked == true) { y = (float)(f5(x)); }
			
			int iy = (int)(halfH - y * halfH);

			e->Graphics->DrawLine(System::Drawing::Pens::Green, ixPrev, iyPrev, ix, iy);

			ixPrev = ix;
			iyPrev = iy;
		}
	}
};
}
