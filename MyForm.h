#pragma once

#define _USE_MATH_DEFINES

#include <algorithm>
#include <vector>
#include <functional>
#include <cmath>
#include <stdexcept>
#include <string>

#define KSI (M_PI/4.0)

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i; // Итерация
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X; // X
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1; // vn
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2; // Истинная траектория
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ absF_2_minus_F_1; // Ошибка
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F2_2; // v2n
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ absF2_2_minus_F_1; // abs(vn-v2n)






	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;






	private: System::Windows::Forms::ComboBox^ comboBox1;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;






	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;





	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->absF_2_minus_F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F2_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->absF2_2_minus_F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(14, 12);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(745, 326);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1257, 347);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(279, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->i, this->X,
					this->F_1, this->F_2, this->absF_2_minus_F_1, this->F2_2, this->absF2_2_minus_F_1
			});
			this->dataGridView1->Location = System::Drawing::Point(14, 434);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(753, 370);
			this->dataGridView1->TabIndex = 2;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->MinimumWidth = 6;
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Width = 50;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 75;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"vi";
			this->F_1->MinimumWidth = 6;
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 135;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"ui";
			this->F_2->MinimumWidth = 6;
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 135;
			// 
			// absF_2_minus_F_1
			// 
			this->absF_2_minus_F_1->HeaderText = L"abs(ui-vi)";
			this->absF_2_minus_F_1->MinimumWidth = 6;
			this->absF_2_minus_F_1->Name = L"absF_2_minus_F_1";
			this->absF_2_minus_F_1->ReadOnly = true;
			this->absF_2_minus_F_1->Width = 135;
			// 
			// F2_2
			// 
			this->F2_2->HeaderText = L"v2i";
			this->F2_2->MinimumWidth = 6;
			this->F2_2->Name = L"F2_2";
			this->F2_2->ReadOnly = true;
			this->F2_2->Width = 135;
			// 
			// absF2_2_minus_F_1
			// 
			this->absF2_2_minus_F_1->HeaderText = L"abs(vi-v2i)";
			this->absF2_2_minus_F_1->MinimumWidth = 6;
			this->absF2_2_minus_F_1->Name = L"absF2_2_minus_F_1";
			this->absF2_2_minus_F_1->ReadOnly = true;
			this->absF2_2_minus_F_1->Width = 135;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1104, 354);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(129, 22);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"10000";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(-206, -5);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 16);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Задача";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(-206, 48);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 16);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Размерность сетки:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тестовая", L"Основная" });
			this->comboBox1->Location = System::Drawing::Point(809, 354);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(276, 24);
			this->comboBox1->TabIndex = 26;
			this->comboBox1->Text = L"Тестовая";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextUpdate += gcnew System::EventHandler(this, &MyForm::comboBox1_TextUpdate);
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 347);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 16);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Xmin";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(149, 347);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 16);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Xmax";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(57, 344);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(84, 22);
			this->textBox5->TabIndex = 31;
			this->textBox5->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(197, 344);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(91, 22);
			this->textBox7->TabIndex = 32;
			this->textBox7->Text = L"5";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(313, 341);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 26);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Масштабировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(482, 340);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 16);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Ymin";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(619, 343);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 16);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Ymax";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(527, 340);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(84, 22);
			this->textBox10->TabIndex = 36;
			this->textBox10->Text = L"0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(668, 343);
			this->textBox11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(91, 22);
			this->textBox11->TabIndex = 37;
			this->textBox11->Text = L"1,2";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Location = System::Drawing::Point(809, 415);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(753, 137);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(8, 64);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 16);
			this->label26->TabIndex = 9;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(8, 48);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 16);
			this->label25->TabIndex = 8;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(8, 219);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 16);
			this->label21->TabIndex = 7;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(8, 203);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 16);
			this->label20->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(8, 144);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 16);
			this->label19->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(8, 128);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 16);
			this->label18->TabIndex = 4;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(8, 112);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 16);
			this->label17->TabIndex = 3;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(8, 96);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 16);
			this->label16->TabIndex = 2;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(8, 80);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 16);
			this->label15->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 32);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 16);
			this->label14->TabIndex = 0;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(791, 12);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(745, 326);
			this->zedGraphControl2->TabIndex = 39;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1654, 772);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"Lab2 Balance Method";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:

	void matrix_solver(std::size_t n, std::vector<double>& BotDiag, std::vector<double>& Diag, std::vector<double>& UDiag, std::vector<double>& b, std::vector<double>& y) {
		
		if (n < 2) return;
		y.resize(n);
		std::vector<double> alpha(n - 1, 0.0);
		std::vector<double> beta(n, 0.0);

		alpha[0] = -UDiag.at(0) / Diag.at(0);
		beta[0] = b.at(0) / Diag.at(0);

		for (std::size_t i = 1; i < n - 1; ++i) {
			double den = -Diag[i] - BotDiag[i] * alpha[i - 1];
			alpha[i] = UDiag[i] / den;
			beta[i] = (-b[i] + BotDiag[i] * beta[i - 1]) / den;
		}

		double denom = Diag[n - 1] + BotDiag[n - 1] * alpha[n - 2];

		y[n - 1] = (b[n - 1] - BotDiag[n - 1] * beta[n - 2]) / denom;

		for (int i = static_cast<int>(n) - 2; i >= 0; --i) {
			y[i] = alpha[i] * y[i + 1] + beta[i];
		}
	}

	double k1_test(double x) { 
		return std::sqrt(2) * std::cos(KSI); 
	}
	double k2_test(double x) { 
		return 2.0; 
	}
	double q1_test(double x) { 
		return KSI; 
	}
	double q2_test(double x) { 
		return KSI*KSI; 
	}
	double f1_test(double x) { 
		return std::sin(2.0*KSI); 
	}
	double f2_test(double x) { 
		return std::sin(KSI); 
	}


	double k1(double x) { 
		return std::sqrt(2) * std::cos(x);
	}
	double k2(double x) { 
		return 2.0;
	}
	double q1(double x) { 
		return x; 
	}
	double q2(double x) { 
		return x*x; 
	}
	double f1(double x) { 
		return std::sin(2.0 * x); 
	}
	double f2(double x) { 
		return std::sin(x); 
	}

	double u1(double X) // для x < π/4
	{
		double R = std::sqrt(M_PI / 4.0); // sqrt(π/4)
		double C1 = -0.085350839278829735;
		double C2 = -0.187888705456333072;
		double C3 = 4.0 / M_PI; // 4/π
		double U = C1 * exp(R * X) + C2 * exp(-R * X) + C3;
		return U;
	}

	double u2(double X) // для x > π/4
	{
		double R = M_PI / (4.0 * sqrt(2)); // π/(4√2)
		double C1 = -0.064586468094884511;
		double C2 = -0.058849982371126784;
		double C3 = 8.0 * sqrt(2.0) / (M_PI * M_PI) ; // 8√2/π²
		double U = C1 * exp(R * X) + C2 * exp(-R * X) + C3;
		return U;
	}

	double a_test(double x, double h, double ksi) {
		double xl = x - h;
		double xr = x;

		if (ksi >= xr) {
			return k1_test(x);
		}
		else if (ksi <= xl) {
			return k2_test(x);
		}
		else {
			double lint = (ksi - xl) / 1.0;
			double rint = (xr - ksi) / 2.0;
			return h / (lint + rint);
		}
	}

	double ai(double x, double h, double ksi) {
		double xl = x - h;
		double xr = x;

		if (ksi >= xr) {
			return k1(x - h / 2.0);
		}
		else if (ksi <= xl) {
			return k2(x - h / 2.0);
		}
		else {
			double mid1 = (xl + ksi) / 2.0;
			double mid2 = (ksi + xr) / 2.0;
			double integral = (ksi - xl) / k1(mid1) + (xr - ksi) / k2(mid2);
			return h / integral;
		}
	}

	double d_test(double x, double h, double ksi) {
		double xl = x - h / 2.0;
		double xr = x + h / 2.0;

		if (ksi >= xr) {
			return q1_test(x);
		}
		else if (ksi <= xl) {
			return q2_test(x);
		}
		else {
			return (M_PI/4.0 * (ksi - xl) + M_PI*M_PI/16.0 * (xr - ksi)) / h;
		}
	}

	double di(double x, double h, double ksi) {
		double xl = x - h / 2.0;
		double xr = x + h / 2.0;

		if (ksi >= xr) {
			return q1(x);
		}
		else if (ksi <= xl) {
			return q2(x);
		}
		else {
			double mid1 = (xl + ksi) / 2.0;
			double mid2 = (ksi + xr) / 2.0;
			return (q1(mid1) * (ksi - xl) + q2(mid2) * (xr - ksi)) / h;
		}
	}

	double phi_test(double x, double h, double ksi) {
		double xl = x - h / 2.0;
		double xr = x + h / 2.0;

		if (ksi >= xr) {
			return f1_test(x);
		}
		else if (ksi <= xl) {
			return f2_test(x);
		}
		else {
			return (1.0 * (ksi - xl) + std::sqrt(2.0)/2.0 * (xr - ksi)) / h;
		}
	}

	double phii(double x, double h, double ksi) {
		double xl = x - h / 2.0;
		double xr = x + h / 2.0;

		if (ksi >= xr) {
			return f1(x);
		}
		else if (ksi <= xl) {
			return f2(x);
		}
		else {
			double mid1 = (xl + ksi) / 2.0;
			double mid2 = (ksi + xr) / 2.0;
			return (f1(mid1) * (ksi - xl) + f2(mid2) * (xr - ksi)) / h;
		}
	}

	void balanceMethod(std::size_t n, bool flag, std::vector<double>& y) {
		if (n < 2) throw std::runtime_error("n must be at least 2");

		std::size_t N = n + 1;

		double ksi = M_PI / 4.0, mu1 = 1.0, mu2 = 1.0, h = 1.0 / n;

		std::vector<double> up(N, 0.0), diag(N, 0.0), bot(N, 0.0), bvec(N, 0.0);

		diag[0] = 1.0; bvec[0] = mu1;
		diag[N - 1] = 1.0; bvec[N - 1] = mu2;

		if (!flag) {
			for (std::size_t i = 1; i < N - 1; ++i) {
				double xi = i * h;
				double kl = a_test(xi, h, ksi);
				double kr = a_test(xi + h, h, ksi);

				bot[i] = kl / (h * h);
				up[i] = kr / (h * h);
				diag[i] = -(kl + kr) / (h * h) - d_test(xi, h, ksi);
				bvec[i] = -phi_test(xi, h, ksi);
			}
		}
		else {
			for (std::size_t i = 1; i < N - 1; ++i) {
				double xi = i * h;
				double kl = ai(xi, h, ksi);
				double kr = ai(xi + h, h, ksi);

				bot[i] = kl / (h * h);
				up[i] = kr / (h * h);
				diag[i] = -(kl + kr) / (h * h) - di(xi, h, ksi);
				bvec[i] = -phii(xi, h, ksi);
			}
		}

		matrix_solver(N, bot, diag, up, bvec, y);
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		panel->GraphObjList->Clear();

		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		panel2->CurveList->Clear();
		panel2->GraphObjList->Clear();

		// Списки для графиков
		PointPairList^ list_numeric = gcnew PointPairList(); // Численное решение
		PointPairList^ list_analytic = gcnew PointPairList(); // Аналитическое
		PointPairList^ list_diff = gcnew PointPairList(); // График ошибки

		dataGridView1->Rows->Clear();

		// Чтение и валидация n (Число интервалов)
		if (String::IsNullOrEmpty(textBox6->Text)) {
			MessageBox::Show("Введите число разбиений (n).");
			return;
		}

		int n_intervals;
		if (!Int32::TryParse(textBox6->Text, n_intervals)) {
			MessageBox::Show("Введите целое число.");
			return;
		}

		if (n_intervals < 2) {
			MessageBox::Show("n должно быть >= 2 для метода прогонки.");
			return;
		}

		// Подготовка параметров
		std::vector<double> res;

		// Параметры для расчетов и вывода
		double h = 1.0 / n_intervals;
		double ksi = M_PI / 4.0;
		std::size_t N_nodes = static_cast<std::size_t>(n_intervals) + 1;

		double max_error = 0.0;
		int max_error_index = -1;

		// Логика выбора задачи
		String^ mode = comboBox1->Text;

		if (mode == "Тестовая") {
			dataGridView1->Columns[5]->Visible = false;
			dataGridView1->Columns[6]->Visible = false;
			dataGridView1->Columns[3]->Visible = true;
			dataGridView1->Columns[4]->Visible = true;
			try {
				balanceMethod(n_intervals, 0, res);
			}
			catch (const std::exception& ex) {
				MessageBox::Show("Ошибка в расчетах: " + gcnew String(ex.what()));
				return;
			}

			// Обработка результатов
			for (std::size_t i = 0; i < N_nodes; ++i) {
				double x = i * h;
				double v_numeric = res[i];


				double u_exact = (x <= ksi + 1e-15) ? u1(x) : u2(x);

				double err = Math::Abs(u_exact - v_numeric);

				// Заполняем таблицу
				int rowId = dataGridView1->Rows->Add();
				dataGridView1->Rows[rowId]->Cells[0]->Value = (int)i;
				dataGridView1->Rows[rowId]->Cells[1]->Value = Math::Round(x, 15);
				dataGridView1->Rows[rowId]->Cells[2]->Value = Math::Round(u_exact, 15); // u(x)
				dataGridView1->Rows[rowId]->Cells[3]->Value = Math::Round(v_numeric, 15); // v(x)
				dataGridView1->Rows[rowId]->Cells[4]->Value = err; // полная точность для анализа

				// Добавляем точки на графики
				list_numeric->Add(x, v_numeric);
				list_analytic->Add(x, u_exact);
				list_diff->Add(x, u_exact - v_numeric); // График разности (u - v)

				// Поиск максимума ошибки
				if (err > max_error) {
					max_error = err;
					max_error_index = (int)i;
				}
			}

			// Настройка графиков
			panel->Title->Text = "Тестовая задача";
			panel2->Title->Text = "Разность точного и численного решения";
			LineItem^ curve1 = panel->AddCurve("Численное v(x)", list_numeric, Color::Red, SymbolType::Plus);
			LineItem^ curve2 = panel->AddCurve("Точное u(x)", list_analytic, Color::Blue, SymbolType::None);
			LineItem^ curve3 = panel2->AddCurve("|u - v|", list_diff, Color::Green, SymbolType::None);

			label26->Text = String::Format("Max |u - v| = {0:E10} при x = {1}", max_error, max_error_index*h);

		}
		else if (mode == "Основная") {

			dataGridView1->Columns[3]->Visible = false;
			dataGridView1->Columns[4]->Visible = false;
			dataGridView1->Columns[5]->Visible = true;
			dataGridView1->Columns[6]->Visible = true;

			std::vector<double> res_fine; // Решение на сетке 2n
			int n_fine = n_intervals * 2;

			try {
				// Решаем на сетке n
				balanceMethod(n_intervals, 1, res);
				// Решаем на сетке 2n
				balanceMethod(n_fine, 1, res_fine);
			}
			catch (const std::exception& ex) {
				MessageBox::Show("Ошибка в расчетах: " + gcnew String(ex.what()));
				return;
			}

			// Проход по ГРУБОЙ сетке (узлы 0, 1, 2... N)
			// Соответствующие узлы мелкой сетки: 0, 2, 4... 2N
			for (std::size_t i = 0; i < N_nodes; ++i) {
				double x = i * h;
				double v_coarse = res[i];

				// Берем значение из мелкой сетки с шагом 2*i
				// Так как мелкая сетка имеет шаг h/2, то 2 шага мелкой = 1 шаг грубой.
				double v_fine = res_fine[2 * i];

				double diff = Math::Abs(v_coarse - v_fine);

				// Заполняем таблицу
				int rowId = dataGridView1->Rows->Add();
				dataGridView1->Rows[rowId]->Cells[0]->Value = (int)i;
				dataGridView1->Rows[rowId]->Cells[1]->Value = Math::Round(x, 15);
				dataGridView1->Rows[rowId]->Cells[2]->Value = Math::Round(v_coarse, 15); // v(x)
				dataGridView1->Rows[rowId]->Cells[5]->Value = Math::Round(v_fine, 15);   // v2(x)
				dataGridView1->Rows[rowId]->Cells[6]->Value = diff;


				list_numeric->Add(x, v_coarse);         // Решение n
				list_analytic->Add(x, v_fine);          // Решение 2n
				list_diff->Add(x, v_fine - v_coarse);   // Разность

				if (diff > max_error) {
					max_error = diff;
					max_error_index = (int)i;
				}
			}

			panel->Title->Text = "Основная задача";
			panel2->Title->Text = "Разность решений";
			panel->AddCurve("Сетка n", list_numeric, Color::Red, SymbolType::Plus);
			panel->AddCurve("Сетка 2n", list_analytic, Color::Blue, SymbolType::None);
			panel2->AddCurve("v2 - v", list_diff, Color::Green, SymbolType::None);

			label26->Text = String::Format("Max |v_n - v_2n| = {0:E4} при x = {1}", max_error, max_error_index*h);

		}
		else {
			MessageBox::Show("Выберите тип задачи (Тестовая/Основная).");
			return;
		}

		label14->Text = "Число разбиений n = " + n_intervals;
		label25->Text = String::Format("Шаг h = {0:F6}", h);

		panel->XAxis->Scale->Min = 0.0;
		panel->XAxis->Scale->Max = 1.0;
		panel->AxisChange();
		zedGraphControl1->Invalidate();
		panel2->XAxis->Scale->Min = 0.0;
		panel2->XAxis->Scale->Max = 1.0;
		panel2->AxisChange();
		zedGraphControl2->Invalidate();
	}


	private:
		System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
			// Инициализация графика при загрузке (если требуется)
		}

	private:
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			// Обработчик кнопки установки границ графика
			try {
				GraphPane^ panel = zedGraphControl1->GraphPane;
				GraphPane^ panel2 = zedGraphControl2->GraphPane;

				// Безопасное преобразование с проверкой на пустые строки
				if (String::IsNullOrEmpty(textBox5->Text) ||
					String::IsNullOrEmpty(textBox7->Text) ||
					String::IsNullOrEmpty(textBox10->Text) ||
					String::IsNullOrEmpty(textBox11->Text)) {
					MessageBox::Show("Пожалуйста, заполните все поля границ графика.");
					return;
				}

				double xmin = Convert::ToDouble(textBox5->Text);
				double xmax = Convert::ToDouble(textBox7->Text);
				double ymin = Convert::ToDouble(textBox10->Text);
				double ymax = Convert::ToDouble(textBox11->Text);

				// Проверка корректности введенных данных
				if (xmin >= xmax) {
					MessageBox::Show("Минимальное значение X должно быть меньше максимального!");
					return;
				}
				if (ymin >= ymax) {
					MessageBox::Show("Минимальное значение Y должно быть меньше максимального!");
					return;
				}

				// Проверка на разумные пределы (опционально)
				if (xmax - xmin > 1000000 || ymax - ymin > 1000000) {
					if (MessageBox::Show("Задан очень большой диапазон значений. Продолжить?",
						"Предупреждение",
						MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::No) {
						return;
					}
				}

				// Установка новых границ
				panel->XAxis->Scale->Min = xmin;
				panel->XAxis->Scale->Max = xmax;
				panel->YAxis->Scale->Min = ymin;
				panel->YAxis->Scale->Max = ymax;
				panel2->XAxis->Scale->Min = xmin;
				panel2->XAxis->Scale->Max = xmax;
				panel2->YAxis->Scale->Min = ymin;
				panel2->YAxis->Scale->Max = ymax;

				// Обновление графика
				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();
				zedGraphControl2->AxisChange();
				zedGraphControl2->Invalidate();
			}
			catch (FormatException^) {
				MessageBox::Show("Ошибка: Введите корректные числовые значения для границ графика.\n" +
					"Используйте точку как разделитель дробной части.");
			}
			catch (OverflowException^) {
				MessageBox::Show("Ошибка: Введены слишком большие числа.");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Неожиданная ошибка при установке границ графика:\n" + ex->Message);
			}
		}

	private:
		System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			// Можно оставить пустым или добавить логику при изменении выбора
		}

	private:
		System::Void comboBox1_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
			// Можно оставить пустым или добавить логику при обновлении текста
		}

	private:
		System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			// Обработчик изменения типа задачи
			try {
				// Сброс всех информационных меток
				label14->Text = "";
				label25->Text = "";
				label26->Text = "";
				label15->Text = "";
				label16->Text = "";
				label17->Text = "";
				label18->Text = "";
				label19->Text = "";
				label20->Text = "";
				label21->Text = "";

				// Очистка графика
				GraphPane^ panel = zedGraphControl1->GraphPane;
				GraphPane^ panel2 = zedGraphControl2->GraphPane;
				panel->CurveList->Clear();
				panel->Title->Text = ""; // Очистка заголовка
				panel2->CurveList->Clear();
				panel2->Title->Text = ""; // Очистка заголовка

				// Сброс подписей осей к значениям по умолчанию
				panel->XAxis->Title->Text = "x";
				panel->YAxis->Title->Text = "y";
				panel2->XAxis->Title->Text = "x";
				panel2->YAxis->Title->Text = "y";

				// Установка автоматического масштабирования
				panel->XAxis->Scale->MinAuto = true;
				panel->XAxis->Scale->MaxAuto = true;
				panel->YAxis->Scale->MinAuto = true;
				panel->YAxis->Scale->MaxAuto = true;
				panel2->XAxis->Scale->MinAuto = true;
				panel2->XAxis->Scale->MaxAuto = true;
				panel2->YAxis->Scale->MinAuto = true;
				panel2->YAxis->Scale->MaxAuto = true;

				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();
				zedGraphControl2->AxisChange();
				zedGraphControl2->Invalidate();

				// Очистка таблицы результатов
				dataGridView1->Rows->Clear();

				// Принудительное обновление интерфейса
				this->Refresh();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при изменении типа задачи:\n" + ex->Message);
			}
		}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
