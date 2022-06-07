#pragma once
#include <cstdlib>

namespace lab63 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c25;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form3::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->c11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->c21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->c11, this->c12,
					this->c13, this->c14, this->c15
			});
			this->dataGridView1->Location = System::Drawing::Point(35, 118);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(298, 199);
			this->dataGridView1->TabIndex = 0;
			// 
			// c11
			// 
			this->c11->MinimumWidth = 6;
			this->c11->Name = L"c11";
			this->c11->Width = 30;
			// 
			// c12
			// 
			this->c12->MinimumWidth = 6;
			this->c12->Name = L"c12";
			this->c12->Width = 30;
			// 
			// c13
			// 
			this->c13->MinimumWidth = 6;
			this->c13->Name = L"c13";
			this->c13->Width = 30;
			// 
			// c14
			// 
			this->c14->MinimumWidth = 6;
			this->c14->Name = L"c14";
			this->c14->Width = 30;
			// 
			// c15
			// 
			this->c15->MinimumWidth = 6;
			this->c15->Name = L"c15";
			this->c15->Width = 30;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(35, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 72);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate matrix";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(35, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 72);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Process matrix";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form3::button2_Click_1);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->c21, this->c22,
					this->c23, this->c24, this->c25
			});
			this->dataGridView2->Location = System::Drawing::Point(35, 434);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(298, 197);
			this->dataGridView2->TabIndex = 3;
			// 
			// c21
			// 
			this->c21->MinimumWidth = 6;
			this->c21->Name = L"c21";
			this->c21->Width = 30;
			// 
			// c22
			// 
			this->c22->MinimumWidth = 6;
			this->c22->Name = L"c22";
			this->c22->Width = 30;
			// 
			// c23
			// 
			this->c23->MinimumWidth = 6;
			this->c23->Name = L"c23";
			this->c23->Width = 30;
			// 
			// c24
			// 
			this->c24->MinimumWidth = 6;
			this->c24->Name = L"c24";
			this->c24->Width = 30;
			// 
			// c25
			// 
			this->c25->MinimumWidth = 6;
			this->c25->Name = L"c25";
			this->c25->Width = 30;
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(509, 660);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"form3";
			this->Text = L"Task 3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

			this->dataGridView1->ColumnCount = 5;
			this->dataGridView1->Rows->Add(5);
			this->dataGridView2->ColumnCount = 5;
			this->dataGridView2->Rows->Add(5);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int A[5][5];

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				A[i][j] = rand() % 100 - 50;
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(A[i][j]);
			}
		}
	}

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(dataGridView1->Rows[0]->Cells[0]->Value) != "")
		{
			int A1[5][5];
			int min = A1[0][0];
			int mini, minj;

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					int elmt = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					A1[i][j] = elmt;
					if (elmt < min) { min = elmt; mini = i; minj = j; }
				}
			}

			if (mini == 0)
			{
				for (int j = minj + 1; j < 5; j++)
				{
					A1[mini][j] = 0;
				}
			}

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString(A1[i][j]);
				}
			}

			if (mini == 0)
			{
				MessageBox::Show("Processed successfully. The smallest element WAS in the first row.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else
			{
				MessageBox::Show("Processed successfully. The smallest element was NOT in the first row.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		else
		{
			MessageBox::Show("First, generate the matrix", "Data entry error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
};
}
