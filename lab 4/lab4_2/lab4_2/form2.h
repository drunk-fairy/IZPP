#pragma once

namespace lab42 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		form2(void)
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
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbNum1;
	protected:
	private: System::Windows::Forms::Label^ lbNum3;
	private: System::Windows::Forms::Label^ lbNum2;
	private: System::Windows::Forms::TextBox^ tbNum1;
	private: System::Windows::Forms::TextBox^ tbNum2;
	private: System::Windows::Forms::TextBox^ tbNum3;
	private: System::Windows::Forms::Label^ lbResult;
	private: System::Windows::Forms::Label^ lbFinal;
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
			this->lbNum3 = (gcnew System::Windows::Forms::Label());
			this->lbNum2 = (gcnew System::Windows::Forms::Label());
			this->tbNum1 = (gcnew System::Windows::Forms::TextBox());
			this->tbNum2 = (gcnew System::Windows::Forms::TextBox());
			this->tbNum3 = (gcnew System::Windows::Forms::TextBox());
			this->lbResult = (gcnew System::Windows::Forms::Label());
			this->lbFinal = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbNum1
			// 
			this->lbNum1->AutoSize = true;
			this->lbNum1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum1->Location = System::Drawing::Point(12, 19);
			this->lbNum1->Name = L"lbNum1";
			this->lbNum1->Size = System::Drawing::Size(104, 23);
			this->lbNum1->TabIndex = 0;
			this->lbNum1->Text = L"1st number:";
			// 
			// lbNum3
			// 
			this->lbNum3->AutoSize = true;
			this->lbNum3->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum3->Location = System::Drawing::Point(12, 132);
			this->lbNum3->Name = L"lbNum3";
			this->lbNum3->Size = System::Drawing::Size(105, 23);
			this->lbNum3->TabIndex = 1;
			this->lbNum3->Text = L"3d number:";
			// 
			// lbNum2
			// 
			this->lbNum2->AutoSize = true;
			this->lbNum2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNum2->Location = System::Drawing::Point(12, 75);
			this->lbNum2->Name = L"lbNum2";
			this->lbNum2->Size = System::Drawing::Size(116, 23);
			this->lbNum2->TabIndex = 2;
			this->lbNum2->Text = L"2nd number:";
			// 
			// tbNum1
			// 
			this->tbNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum1->Location = System::Drawing::Point(135, 17);
			this->tbNum1->Name = L"tbNum1";
			this->tbNum1->Size = System::Drawing::Size(156, 28);
			this->tbNum1->TabIndex = 3;
			// 
			// tbNum2
			// 
			this->tbNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum2->Location = System::Drawing::Point(134, 73);
			this->tbNum2->Name = L"tbNum2";
			this->tbNum2->Size = System::Drawing::Size(156, 28);
			this->tbNum2->TabIndex = 4;
			// 
			// tbNum3
			// 
			this->tbNum3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNum3->Location = System::Drawing::Point(135, 130);
			this->tbNum3->Name = L"tbNum3";
			this->tbNum3->Size = System::Drawing::Size(156, 28);
			this->tbNum3->TabIndex = 5;
			// 
			// lbResult
			// 
			this->lbResult->AutoSize = true;
			this->lbResult->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbResult->Location = System::Drawing::Point(12, 213);
			this->lbResult->Name = L"lbResult";
			this->lbResult->Size = System::Drawing::Size(249, 23);
			this->lbResult->TabIndex = 6;
			this->lbResult->Text = L"Number of positive numbers:";
			// 
			// lbFinal
			// 
			this->lbFinal->AutoSize = true;
			this->lbFinal->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFinal->Location = System::Drawing::Point(272, 213);
			this->lbFinal->Name = L"lbFinal";
			this->lbFinal->Size = System::Drawing::Size(18, 23);
			this->lbFinal->TabIndex = 7;
			this->lbFinal->Text = L"\?";
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(16, 350);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(392, 65);
			this->tableLayoutPanel1->TabIndex = 8;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &form2::tableLayoutPanel1_Paint);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(199, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(190, 56);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &form2::btnClear_Click);
			// 
			// btnGo
			// 
			this->btnGo->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnGo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGo->Location = System::Drawing::Point(3, 3);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(190, 56);
			this->btnGo->TabIndex = 0;
			this->btnGo->Text = L"Go";
			this->btnGo->UseVisualStyleBackColor = false;
			this->btnGo->Click += gcnew System::EventHandler(this, &form2::btnGo_Click);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->ClientSize = System::Drawing::Size(420, 427);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lbFinal);
			this->Controls->Add(this->lbResult);
			this->Controls->Add(this->tbNum3);
			this->Controls->Add(this->tbNum2);
			this->Controls->Add(this->tbNum1);
			this->Controls->Add(this->lbNum2);
			this->Controls->Add(this->lbNum3);
			this->Controls->Add(this->lbNum1);
			this->MaximumSize = System::Drawing::Size(438, 474);
			this->MinimumSize = System::Drawing::Size(438, 474);
			this->Name = L"form2";
			this->Text = L"Task 2";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnGo_Click(System::Object^ sender, System::EventArgs^ e) {
		int a, b, c;
		a = Convert::ToInt32(tbNum1->Text);
		b = Convert::ToInt32(tbNum2->Text);
		c = Convert::ToInt32(tbNum3->Text);
		int Arr[3] = { a, b, c };
		int count = 0;
		for (int i = 0; i < 3; i++)
		{
			if (Arr[i] > 0) { count++; }
		}
		lbFinal->Text = Convert::ToString(count);
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		tbNum1->Text = "";
		tbNum2->Text = "";
		tbNum3->Text = "";
		lbFinal->Text = "?";
	}
};
}
