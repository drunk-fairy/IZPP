#pragma once

namespace lab45 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form5
	/// </summary>
	public ref class form5 : public System::Windows::Forms::Form
	{
	public:
		form5(void)
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
		~form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbNum3;
	protected:
	private: System::Windows::Forms::Label^ lbNum2;
	private: System::Windows::Forms::Label^ lbNum1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ tbNum1;
	private: System::Windows::Forms::TextBox^ tbNum2;
	private: System::Windows::Forms::TextBox^ tbNum3;


	private: System::Windows::Forms::Label^ lbSmall;
	private: System::Windows::Forms::Label^ lbFinal;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
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
			this->lbNum3 = (gcnew System::Windows::Forms::Label());
			this->lbNum2 = (gcnew System::Windows::Forms::Label());
			this->lbNum1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbNum1 = (gcnew System::Windows::Forms::TextBox());
			this->tbNum2 = (gcnew System::Windows::Forms::TextBox());
			this->tbNum3 = (gcnew System::Windows::Forms::TextBox());
			this->lbSmall = (gcnew System::Windows::Forms::Label());
			this->lbFinal = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbNum3
			// 
			this->lbNum3->AutoSize = true;
			this->lbNum3->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum3->Location = System::Drawing::Point(3, 144);
			this->lbNum3->Name = L"lbNum3";
			this->lbNum3->Size = System::Drawing::Size(122, 26);
			this->lbNum3->TabIndex = 0;
			this->lbNum3->Text = L"3d number:";
			// 
			// lbNum2
			// 
			this->lbNum2->AutoSize = true;
			this->lbNum2->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum2->Location = System::Drawing::Point(3, 72);
			this->lbNum2->Name = L"lbNum2";
			this->lbNum2->Size = System::Drawing::Size(133, 26);
			this->lbNum2->TabIndex = 1;
			this->lbNum2->Text = L"2nd number:";
			// 
			// lbNum1
			// 
			this->lbNum1->AutoSize = true;
			this->lbNum1->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum1->Location = System::Drawing::Point(3, 0);
			this->lbNum1->Name = L"lbNum1";
			this->lbNum1->Size = System::Drawing::Size(125, 26);
			this->lbNum1->TabIndex = 2;
			this->lbNum1->Text = L"1st number:";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->lbNum1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->lbNum3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->lbNum2, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(23, 24);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(177, 217);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// tbNum1
			// 
			this->tbNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum1->Location = System::Drawing::Point(206, 26);
			this->tbNum1->Name = L"tbNum1";
			this->tbNum1->Size = System::Drawing::Size(165, 27);
			this->tbNum1->TabIndex = 4;
			// 
			// tbNum2
			// 
			this->tbNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum2->Location = System::Drawing::Point(206, 98);
			this->tbNum2->Name = L"tbNum2";
			this->tbNum2->Size = System::Drawing::Size(165, 27);
			this->tbNum2->TabIndex = 5;
			// 
			// tbNum3
			// 
			this->tbNum3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum3->Location = System::Drawing::Point(206, 170);
			this->tbNum3->Name = L"tbNum3";
			this->tbNum3->Size = System::Drawing::Size(165, 27);
			this->tbNum3->TabIndex = 6;
			// 
			// lbSmall
			// 
			this->lbSmall->AutoSize = true;
			this->lbSmall->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSmall->Location = System::Drawing::Point(26, 256);
			this->lbSmall->Name = L"lbSmall";
			this->lbSmall->Size = System::Drawing::Size(176, 26);
			this->lbSmall->TabIndex = 7;
			this->lbSmall->Text = L"Smallest number:";
			// 
			// lbFinal
			// 
			this->lbFinal->AutoSize = true;
			this->lbFinal->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFinal->Location = System::Drawing::Point(218, 256);
			this->lbFinal->Name = L"lbFinal";
			this->lbFinal->Size = System::Drawing::Size(23, 26);
			this->lbFinal->TabIndex = 8;
			this->lbFinal->Text = L"\?";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->btnClear, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnGo, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(12, 369);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(530, 66);
			this->tableLayoutPanel2->TabIndex = 9;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::PowderBlue;
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(268, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(259, 60);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &form5::btnClear_Click);
			// 
			// btnGo
			// 
			this->btnGo->BackColor = System::Drawing::Color::PowderBlue;
			this->btnGo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGo->Location = System::Drawing::Point(3, 3);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(259, 60);
			this->btnGo->TabIndex = 0;
			this->btnGo->Text = L"Go";
			this->btnGo->UseVisualStyleBackColor = false;
			this->btnGo->Click += gcnew System::EventHandler(this, &form5::btnGo_Click);
			// 
			// form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(554, 447);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->lbFinal);
			this->Controls->Add(this->lbSmall);
			this->Controls->Add(this->tbNum3);
			this->Controls->Add(this->tbNum2);
			this->Controls->Add(this->tbNum1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(572, 494);
			this->MinimumSize = System::Drawing::Size(572, 494);
			this->Name = L"form5";
			this->Text = L"Task 5";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnGo_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, c;
	a = Convert::ToDouble(tbNum1->Text);
	b = Convert::ToDouble(tbNum2->Text);
	c = Convert::ToDouble(tbNum3->Text);

	double Arr[3] = { a, b, c };

	double min = Arr[0];
	for (int i = 0; i < 3; i++)
	{
		if (Arr[i] < min) { min = Arr[i]; }
	}

	lbFinal->Text = Convert::ToString(min);
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tbNum1->Text = "";
	tbNum2->Text = "";
	tbNum3->Text = "";
	lbFinal->Text = "?";
}
};
}
