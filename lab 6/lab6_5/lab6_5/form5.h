#pragma once
#include <cstdlib>

namespace lab65 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ el19;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form5::typeid));
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
			this->el13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->el19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(19) {
				this->el1, this->el2,
					this->el3, this->el4, this->el5, this->el6, this->el7, this->el8, this->el9, this->el10, this->el11, this->el12, this->el13,
					this->el14, this->el15, this->el16, this->el17, this->el18, this->el19
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(838, 81);
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
			// el13
			// 
			this->el13->MinimumWidth = 6;
			this->el13->Name = L"el13";
			this->el13->Width = 30;
			// 
			// el14
			// 
			this->el14->MinimumWidth = 6;
			this->el14->Name = L"el14";
			this->el14->Width = 30;
			// 
			// el15
			// 
			this->el15->MinimumWidth = 6;
			this->el15->Name = L"el15";
			this->el15->Width = 30;
			// 
			// el16
			// 
			this->el16->MinimumWidth = 6;
			this->el16->Name = L"el16";
			this->el16->Width = 30;
			// 
			// el17
			// 
			this->el17->MinimumWidth = 6;
			this->el17->Name = L"el17";
			this->el17->Width = 30;
			// 
			// el18
			// 
			this->el18->MinimumWidth = 6;
			this->el18->Name = L"el18";
			this->el18->Width = 30;
			// 
			// el19
			// 
			this->el19->MinimumWidth = 6;
			this->el19->Name = L"el19";
			this->el19->Width = 30;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 79);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Згенерувати й обробити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form5::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn20,
					this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23
			});
			this->dataGridView2->Location = System::Drawing::Point(633, 427);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(216, 77);
			this->dataGridView2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(629, 393);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Результат:";
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn20->Name = L"n1";
			this->dataGridViewTextBoxColumn20->Width = 30;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn21->Name = L"n2";
			this->dataGridViewTextBoxColumn21->Width = 30;
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn22->Name = L"n3";
			this->dataGridViewTextBoxColumn22->Width = 30;
			
			// 
			// form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(874, 531);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"form5";
			this->Text = L"Task 5";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int A[19];
		int neg3[3];
		int count = 0;

		for (int i = 0; i < 19; i++)
		{
			A[i] = rand() % 100 - 50;
			dataGridView1->Rows[0]->Cells[i]->Value = Convert::ToString(A[i]);
			if (count < 3)
			{
				if (A[i] < 0) { neg3[count] = A[i]; count++; }
			}
		}

		for (int i = 0; i < 3; i++)
		{
			dataGridView2->Rows[0]->Cells[i]->Value = Convert::ToString(neg3[i]);
		}

		MessageBox::Show("Виконано успішно.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	};
}
