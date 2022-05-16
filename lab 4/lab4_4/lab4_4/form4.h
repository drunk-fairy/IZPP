#pragma once

namespace lab44 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form4
	/// </summary>
	public ref class form4 : public System::Windows::Forms::Form
	{
	public:
		form4(void)
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
		~form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbNum1;
	protected:
	private: System::Windows::Forms::Label^ lbNum2;
	private: System::Windows::Forms::TextBox^ tbNum1;
	private: System::Windows::Forms::TextBox^ tbNum2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnGo;

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
			this->lbNum1 = (gcnew System::Windows::Forms::Label());
			this->lbNum2 = (gcnew System::Windows::Forms::Label());
			this->tbNum1 = (gcnew System::Windows::Forms::TextBox());
			this->tbNum2 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbNum1
			// 
			this->lbNum1->AutoSize = true;
			this->lbNum1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbNum1->Location = System::Drawing::Point(24, 46);
			this->lbNum1->Name = L"lbNum1";
			this->lbNum1->Size = System::Drawing::Size(118, 18);
			this->lbNum1->TabIndex = 0;
			this->lbNum1->Text = L"1st number:";
			// 
			// lbNum2
			// 
			this->lbNum2->AutoSize = true;
			this->lbNum2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbNum2->Location = System::Drawing::Point(24, 103);
			this->lbNum2->Name = L"lbNum2";
			this->lbNum2->Size = System::Drawing::Size(118, 18);
			this->lbNum2->TabIndex = 1;
			this->lbNum2->Text = L"2nd number:";
			// 
			// tbNum1
			// 
			this->tbNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum1->Location = System::Drawing::Point(163, 42);
			this->tbNum1->Name = L"tbNum1";
			this->tbNum1->Size = System::Drawing::Size(142, 27);
			this->tbNum1->TabIndex = 2;
			// 
			// tbNum2
			// 
			this->tbNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum2->Location = System::Drawing::Point(163, 99);
			this->tbNum2->Name = L"tbNum2";
			this->tbNum2->Size = System::Drawing::Size(142, 27);
			this->tbNum2->TabIndex = 3;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnGo, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 355);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(406, 60);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// btnClear
			// 
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(206, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(197, 54);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &form4::btnClear_Click);
			// 
			// btnGo
			// 
			this->btnGo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGo->Location = System::Drawing::Point(3, 3);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(197, 54);
			this->btnGo->TabIndex = 0;
			this->btnGo->Text = L"Go";
			this->btnGo->UseVisualStyleBackColor = true;
			this->btnGo->Click += gcnew System::EventHandler(this, &form4::btnGo_Click);
			// 
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(430, 427);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tbNum2);
			this->Controls->Add(this->tbNum1);
			this->Controls->Add(this->lbNum2);
			this->Controls->Add(this->lbNum1);
			this->MaximumSize = System::Drawing::Size(448, 474);
			this->MinimumSize = System::Drawing::Size(448, 474);
			this->Name = L"form4";
			this->Text = L"Task 4";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGo_Click(System::Object^ sender, System::EventArgs^ e) {
		int a, b;
		a = Convert::ToInt32(tbNum1->Text);
		b = Convert::ToInt32(tbNum2->Text);
		if (a == b) { a = 0; b = 0; }
		else
		{
			int sum = a + b;
			a = sum;
			b = sum;
		}
		tbNum1->Text = Convert::ToString(a);
		tbNum2->Text = Convert::ToString(b);
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		tbNum1->Text = "";
		tbNum2->Text = "";
	}
};
}
