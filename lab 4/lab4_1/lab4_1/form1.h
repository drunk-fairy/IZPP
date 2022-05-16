#pragma once

namespace lab41 {

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
	private: System::Windows::Forms::Label^ lbNum1;
	protected:
	private: System::Windows::Forms::Label^ lbGreatNum;
	private: System::Windows::Forms::Label^ lbSmallNum;
	private: System::Windows::Forms::Label^ lbNum2;
	private: System::Windows::Forms::Label^ lbGreat;
	private: System::Windows::Forms::Label^ lbSmall;
	private: System::Windows::Forms::Button^ btnGo;
	private: System::Windows::Forms::TextBox^ tb1st;
	private: System::Windows::Forms::TextBox^ tb2nd;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnClear;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbNum1 = (gcnew System::Windows::Forms::Label());
			this->lbGreatNum = (gcnew System::Windows::Forms::Label());
			this->lbSmallNum = (gcnew System::Windows::Forms::Label());
			this->lbNum2 = (gcnew System::Windows::Forms::Label());
			this->lbGreat = (gcnew System::Windows::Forms::Label());
			this->lbSmall = (gcnew System::Windows::Forms::Label());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->tb1st = (gcnew System::Windows::Forms::TextBox());
			this->tb2nd = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbNum1
			// 
			this->lbNum1->AutoSize = true;
			this->lbNum1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum1->Location = System::Drawing::Point(22, 24);
			this->lbNum1->Name = L"lbNum1";
			this->lbNum1->Size = System::Drawing::Size(106, 23);
			this->lbNum1->TabIndex = 0;
			this->lbNum1->Text = L"1st number:";
			// 
			// lbGreatNum
			// 
			this->lbGreatNum->AutoSize = true;
			this->lbGreatNum->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbGreatNum->Location = System::Drawing::Point(22, 158);
			this->lbGreatNum->Name = L"lbGreatNum";
			this->lbGreatNum->Size = System::Drawing::Size(142, 23);
			this->lbGreatNum->TabIndex = 1;
			this->lbGreatNum->Text = L"Greater number:";
			// 
			// lbSmallNum
			// 
			this->lbSmallNum->AutoSize = true;
			this->lbSmallNum->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSmallNum->Location = System::Drawing::Point(22, 229);
			this->lbSmallNum->Name = L"lbSmallNum";
			this->lbSmallNum->Size = System::Drawing::Size(142, 23);
			this->lbSmallNum->TabIndex = 2;
			this->lbSmallNum->Text = L"Smaller number:";
			// 
			// lbNum2
			// 
			this->lbNum2->AutoSize = true;
			this->lbNum2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum2->Location = System::Drawing::Point(22, 91);
			this->lbNum2->Name = L"lbNum2";
			this->lbNum2->Size = System::Drawing::Size(114, 23);
			this->lbNum2->TabIndex = 3;
			this->lbNum2->Text = L"2nd number:";
			// 
			// lbGreat
			// 
			this->lbGreat->AutoSize = true;
			this->lbGreat->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbGreat->Location = System::Drawing::Point(170, 158);
			this->lbGreat->Name = L"lbGreat";
			this->lbGreat->Size = System::Drawing::Size(16, 23);
			this->lbGreat->TabIndex = 4;
			this->lbGreat->Text = L"\?";
			// 
			// lbSmall
			// 
			this->lbSmall->AutoSize = true;
			this->lbSmall->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSmall->Location = System::Drawing::Point(170, 229);
			this->lbSmall->Name = L"lbSmall";
			this->lbSmall->Size = System::Drawing::Size(16, 23);
			this->lbSmall->TabIndex = 5;
			this->lbSmall->Text = L"\?";
			// 
			// btnGo
			// 
			this->btnGo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGo->Location = System::Drawing::Point(3, 3);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(180, 60);
			this->btnGo->TabIndex = 6;
			this->btnGo->Text = L"Go";
			this->btnGo->UseVisualStyleBackColor = true;
			this->btnGo->Click += gcnew System::EventHandler(this, &form1::btnGo_Click);
			// 
			// tb1st
			// 
			this->tb1st->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb1st->Location = System::Drawing::Point(144, 23);
			this->tb1st->Name = L"tb1st";
			this->tb1st->Size = System::Drawing::Size(126, 27);
			this->tb1st->TabIndex = 7;
			// 
			// tb2nd
			// 
			this->tb2nd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb2nd->Location = System::Drawing::Point(144, 90);
			this->tb2nd->Name = L"tb2nd";
			this->tb2nd->Size = System::Drawing::Size(126, 27);
			this->tb2nd->TabIndex = 8;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnGo, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 307);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(373, 66);
			this->tableLayoutPanel1->TabIndex = 9;
			// 
			// btnClear
			// 
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(189, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(180, 60);
			this->btnClear->TabIndex = 7;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &form1::btnClear_Click);
			// 
			// form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(397, 385);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tb2nd);
			this->Controls->Add(this->tb1st);
			this->Controls->Add(this->lbSmall);
			this->Controls->Add(this->lbGreat);
			this->Controls->Add(this->lbNum2);
			this->Controls->Add(this->lbSmallNum);
			this->Controls->Add(this->lbGreatNum);
			this->Controls->Add(this->lbNum1);
			this->MaximumSize = System::Drawing::Size(415, 432);
			this->MinimumSize = System::Drawing::Size(415, 432);
			this->Name = L"form1";
			this->Text = L"Task 1";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGo_Click(System::Object^ sender, System::EventArgs^ e) {
		int a, b;
		a = Convert::ToInt32(tb1st->Text);
		b = Convert::ToInt32(tb2nd->Text);

		if (a > b)
		{
			lbGreat->Text = Convert::ToString(a);
			lbSmall->Text = Convert::ToString(b);
		}
		else if (b > a)
		{
			lbGreat->Text = Convert::ToString(b);
			lbSmall->Text = Convert::ToString(a);
		}
		else if (a == b)
		{
			lbGreat->Text = "numbers are equal";
			lbSmall->Text = "numbers are equal";
		}
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		tb1st->Text = "";
		tb2nd->Text = "";
		lbGreat->Text = "?";
		lbSmall->Text = "?";
	}
};
}
