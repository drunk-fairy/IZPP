#pragma once
#include <cstdlib>

namespace lan66 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form6
	/// </summary>
	public ref class form6 : public System::Windows::Forms::Form
	{
	public:
		form6(void)
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
		~form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el12;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->el1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->el1, this->el2,
					this->el3, this->el4, this->el5, this->el6, this->el7, this->el8, this->el9, this->el10, this->el11, this->el12
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(700, 64);
			this->dataGridView1->TabIndex = 0;
			// 
			// el1
			// 
			this->el1->MinimumWidth = 6;
			this->el1->Name = L"el1";
			this->el1->Width = 30;
			// 
			// el2
			// 
			this->el2->MinimumWidth = 6;
			this->el2->Name = L"el2";
			this->el2->Width = 30;
			// 
			// el3
			// 
			this->el3->MinimumWidth = 6;
			this->el3->Name = L"el3";
			this->el3->Width = 30;
			// 
			// el4
			// 
			this->el4->MinimumWidth = 6;
			this->el4->Name = L"el4";
			this->el4->Width = 30;
			// 
			// el5
			// 
			this->el5->MinimumWidth = 6;
			this->el5->Name = L"el5";
			this->el5->Width = 30;
			// 
			// el6
			// 
			this->el6->MinimumWidth = 6;
			this->el6->Name = L"el6";
			this->el6->Width = 30;
			// 
			// el7
			// 
			this->el7->MinimumWidth = 6;
			this->el7->Name = L"el7";
			this->el7->Width = 30;
			// 
			// el8
			// 
			this->el8->MinimumWidth = 6;
			this->el8->Name = L"el8";
			this->el8->Width = 30;
			// 
			// el9
			// 
			this->el9->MinimumWidth = 6;
			this->el9->Name = L"el9";
			this->el9->Width = 30;
			// 
			// el10
			// 
			this->el10->MinimumWidth = 6;
			this->el10->Name = L"el10";
			this->el10->Width = 30;
			// 
			// el11
			// 
			this->el11->MinimumWidth = 6;
			this->el11->Name = L"el11";
			this->el11->Width = 30;
			// 
			// el12
			// 
			this->el12->MinimumWidth = 6;
			this->el12->Name = L"el12";
			this->el12->Width = 30;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Azure;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(19, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate array";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form6::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Azure;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(231, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 65);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Process array";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form6::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 278);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Product of odd elements:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(14, 225);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Number of odd elements:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(278, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(278, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"\?";
			// 
			// form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(731, 360);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"form6";
			this->Text = L"Task 6";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int C[12];
		for (int i = 0; i < 12; i++)
		{
			C[i] = rand() % 10 - 5;
			dataGridView1->Rows[0]->Cells[i]->Value = Convert::ToString(C[i]);
		}

		label3->Text = "?";
		label4->Text = "?";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(dataGridView1->Rows[0]->Cells[0]->Value) != "")
		{
			int C[12];
			int count = 0;;
			int prod = 1;

			for (int i = 0; i < 12; i++)
			{
				C[i] = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
			}

			for (int i = 0; i < 12; i++)
			{
				if (C[i] % 2 != 0) { count += 1; prod *= C[i]; }
			}

			label3->Text = Convert::ToString(count);
			label4->Text = Convert::ToString(prod);

			MessageBox::Show("Processed successfully", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else
		{
			MessageBox::Show("First, generate the array", "Data entry error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
};
}
