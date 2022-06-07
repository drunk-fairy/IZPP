#pragma once
#include <cstdlib>
#include <algorithm>

namespace lab64 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c14;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c24;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form4::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->c11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->c21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->c11, this->c12,
					this->c13, this->c14
			});
			this->dataGridView1->Location = System::Drawing::Point(20, 92);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(332, 176);
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(29, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate matrix";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form4::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(29, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Process matrix";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form4::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->c21, this->c22,
					this->c23, this->c24
			});
			this->dataGridView2->Location = System::Drawing::Point(29, 386);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(332, 176);
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
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(503, 618);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"form4";
			this->Text = L"Task 4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

			this->dataGridView1->ColumnCount = 4;
			this->dataGridView1->Rows->Add(4);
			this->dataGridView2->ColumnCount = 4;
			this->dataGridView2->Rows->Add(4);
		}

#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int A[4][4];

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				A[i][j] = rand() % 20;
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(A[i][j]);
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(dataGridView1->Rows[0]->Cells[0]->Value) != "")
		{
			int A1[4][4];
			int max = A1[0][0];
			int maxi;
			int sum_0;

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					int elmt = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					A1[i][j] = elmt;
					if (i == 0) { sum_0 += elmt; }
					if (elmt > max) { max = elmt; maxi = i; }
				}
			}

			if (max == sum_0)
			{
				for (int j = 0; j < 4; j++) { swap(A1[0][j], A1[maxi][j]); }
			}

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString(A1[i][j]);
				}
			}

			if (max == sum_0)
			{
				MessageBox::Show("Processed successfully. The biggest element DID equal the sum of first row elements.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else
			{
				MessageBox::Show("Processed successfully. The biggest element did NOT equal the sum of first row elements.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		else
		{
			MessageBox::Show("First, generate the matrix", "Data entry error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
};
}
