#pragma once
#include <cstdlib>

namespace lab54 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form4::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->c1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->c1, this->c2,
					this->c3, this->c4
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 24);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(278, 170);
			this->dataGridView1->TabIndex = 0;
			// 
			// c1
			// 
			this->c1->MinimumWidth = 6;
			this->c1->Name = L"c1";
			this->c1->Width = 30;
			// 
			// c2
			// 
			this->c2->MinimumWidth = 6;
			this->c2->Name = L"c2";
			this->c2->Width = 30;
			// 
			// c3
			// 
			this->c3->MinimumWidth = 6;
			this->c3->Name = L"c3";
			this->c3->Width = 30;
			// 
			// c4
			// 
			this->c4->MinimumWidth = 6;
			this->c4->Name = L"c4";
			this->c4->Width = 30;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(21, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 84);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate and process";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form4::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(281, 341);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(281, 397);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(111, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 337);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 26);
			this->label1->TabIndex = 4;
			this->label1->Text = L"biggest of the positive numbers:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 393);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"smallest of negative numbers:";
			// 
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(524, 473);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"form4";
			this->Text = L"Task 4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

			this->dataGridView1->ColumnCount = 4;
			this->dataGridView1->Rows->Add(4);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int D[4][4];
		int max = D[0][0];
		int min = D[0][0];
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				D[i][j] = rand() % 100 - 50;
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(D[i][j]);
				if ((D[i][j] > 0) && (D[i][j] > max)) { max = D[i][j]; }
				if ((D[i][j] < 0) && (D[i][j] < min)) { min = D[i][j]; }
			}
		}
		textBox1->Text = Convert::ToString(max);
		textBox2->Text = Convert::ToString(min);

		MessageBox::Show("Completed succesfully", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
};
}
