#pragma once

namespace lab43 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form3
	/// </summary>
	public ref class form3 : public System::Windows::Forms::Form
	{
	public:
		form3(void)
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
		~form3()
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
			this->lbNum1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbNum1->Location = System::Drawing::Point(12, 32);
			this->lbNum1->Name = L"lbNum1";
			this->lbNum1->Size = System::Drawing::Size(118, 30);
			this->lbNum1->TabIndex = 0;
			this->lbNum1->Text = L"1st number:";
			// 
			// lbNum2
			// 
			this->lbNum2->AutoSize = true;
			this->lbNum2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbNum2->Location = System::Drawing::Point(12, 106);
			this->lbNum2->Name = L"lbNum2";
			this->lbNum2->Size = System::Drawing::Size(125, 30);
			this->lbNum2->TabIndex = 1;
			this->lbNum2->Text = L"2nd number:";
			// 
			// tbNum1
			// 
			this->tbNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum1->Location = System::Drawing::Point(155, 35);
			this->tbNum1->Name = L"tbNum1";
			this->tbNum1->Size = System::Drawing::Size(158, 27);
			this->tbNum1->TabIndex = 2;
			// 
			// tbNum2
			// 
			this->tbNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum2->Location = System::Drawing::Point(155, 109);
			this->tbNum2->Name = L"tbNum2";
			this->tbNum2->Size = System::Drawing::Size(158, 27);
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 335);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(368, 50);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Beige;
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(187, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(178, 44);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &form3::btnClear_Click);
			// 
			// btnGo
			// 
			this->btnGo->BackColor = System::Drawing::Color::Beige;
			this->btnGo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGo->Location = System::Drawing::Point(3, 3);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(178, 44);
			this->btnGo->TabIndex = 0;
			this->btnGo->Text = L"Go";
			this->btnGo->UseVisualStyleBackColor = false;
			this->btnGo->Click += gcnew System::EventHandler(this, &form3::btnGo_Click);
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->ClientSize = System::Drawing::Size(392, 397);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tbNum2);
			this->Controls->Add(this->tbNum1);
			this->Controls->Add(this->lbNum2);
			this->Controls->Add(this->lbNum1);
			this->MaximumSize = System::Drawing::Size(410, 444);
			this->MinimumSize = System::Drawing::Size(410, 444);
			this->Name = L"form3";
			this->Text = L"Task 3";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGo_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b;
		double small, big;
		a = Convert::ToDouble(tbNum1->Text);
		b = Convert::ToDouble(tbNum2->Text);
		if (a < b) { small = a; big = b; }
		else { small = b; big = a; }
		a = small;
		b = big;
		tbNum1->Text = Convert::ToString(a);
		tbNum2->Text = Convert::ToString(b);
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		tbNum1->Text = "";
		tbNum2->Text = "";
	}
};
}
