#pragma once
#include <cstdlib>

namespace lab62 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el_3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el_4;








	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form2::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->el1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->el1, this->el2,
					this->el3, this->el4
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 100);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(263, 191);
			this->dataGridView1->TabIndex = 0;
			// 
			// el1
			// 
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->el1->DefaultCellStyle = dataGridViewCellStyle2;
			this->el1->HeaderText = L"el1";
			this->el1->MinimumWidth = 6;
			this->el1->Name = L"el1";
			this->el1->Width = 30;
			// 
			// el2
			// 
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			this->el2->DefaultCellStyle = dataGridViewCellStyle3;
			this->el2->HeaderText = L"el2";
			this->el2->MinimumWidth = 6;
			this->el2->Name = L"el2";
			this->el2->Width = 30;
			// 
			// el3
			// 
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			this->el3->DefaultCellStyle = dataGridViewCellStyle4;
			this->el3->HeaderText = L"el3";
			this->el3->MinimumWidth = 6;
			this->el3->Name = L"el3";
			this->el3->Width = 30;
			// 
			// el4
			// 
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			this->el4->DefaultCellStyle = dataGridViewCellStyle5;
			this->el4->HeaderText = L"el4";
			this->el4->MinimumWidth = 6;
			this->el4->Name = L"el4";
			this->el4->Width = 30;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Moccasin;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(37, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate matrix";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Moccasin;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(37, 336);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 63);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Process matrix";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form2::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->dataGridView2->Location = System::Drawing::Point(37, 426);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(263, 191);
			this->dataGridView2->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn9
			// 
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			this->dataGridViewTextBoxColumn9->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridViewTextBoxColumn9->HeaderText = L"el1";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 30;
			// 
			// dataGridViewTextBoxColumn10
			// 
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Black;
			this->dataGridViewTextBoxColumn10->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridViewTextBoxColumn10->HeaderText = L"el2";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 30;
			// 
			// dataGridViewTextBoxColumn11
			// 
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::Black;
			this->dataGridViewTextBoxColumn11->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridViewTextBoxColumn11->HeaderText = L"el3";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 30;
			// 
			// dataGridViewTextBoxColumn12
			// 
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::Black;
			this->dataGridViewTextBoxColumn12->DefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridViewTextBoxColumn12->HeaderText = L"el4";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 30;
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(475, 653);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Name = L"form2";
			this->Text = L"Task 2";
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
		int D[4][4];
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				D[i][j] = rand() % 100 - 50;
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(D[i][j]);
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(dataGridView1->Rows[0]->Cells[0]->Value) != "")
		{
			int tmp_arr[4][4];
			int max = tmp_arr[0][0];
			int maxi;
			int maxj;

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					int elmt = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					tmp_arr[i][j] = elmt;
					if (elmt > max) { max = elmt; maxi = i; maxj = j; }
				}
			}

			if (maxi == maxj) 
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
							if (i == j) { tmp_arr[i][j] = max; }
					}
				}
			}
			
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString(tmp_arr[i][j]);
				}
			}

			if (maxi == maxj)
			{
				MessageBox::Show("Processed succesfully. The biggest element WAS on the main diagonal", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else
			{
				MessageBox::Show("Processed succesfully. The biggest element was NOT on the main diagonal", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else
		{
			MessageBox::Show("First, generate the matrix", "Data entry error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
};
}
