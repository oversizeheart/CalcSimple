#pragma once

namespace Calcsimple {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Snow;
			this->button1->Location = System::Drawing::Point(12, 118);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"⌫";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DimGray;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 40, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(418, 100);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->UseWaitCursor = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Orange;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Snow;
			this->button2->Location = System::Drawing::Point(118, 118);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 2;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Orange;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Snow;
			this->button3->Location = System::Drawing::Point(224, 118);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 3;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Orange;
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Snow;
			this->button4->Location = System::Drawing::Point(330, 118);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 4;
			this->button4->Text = L"±";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Snow;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(12, 224);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 0;
			this->button5->Text = L"1";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Snow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(118, 224);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 2;
			this->button6->Text = L"2";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Snow;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(224, 224);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 3;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Orange;
			this->button8->Font = (gcnew System::Drawing::Font(L"Montserrat", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Snow;
			this->button8->Location = System::Drawing::Point(330, 224);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 4;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Snow;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Location = System::Drawing::Point(12, 330);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 0;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Snow;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Location = System::Drawing::Point(118, 330);
			this->button10->Margin = System::Windows::Forms::Padding(0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 100);
			this->button10->TabIndex = 2;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Snow;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Location = System::Drawing::Point(224, 330);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 100);
			this->button11->TabIndex = 3;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Orange;
			this->button12->Font = (gcnew System::Drawing::Font(L"Montserrat", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Snow;
			this->button12->Location = System::Drawing::Point(330, 330);
			this->button12->Margin = System::Windows::Forms::Padding(0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 100);
			this->button12->TabIndex = 4;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Snow;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->Location = System::Drawing::Point(12, 436);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 100);
			this->button13->TabIndex = 0;
			this->button13->Text = L"7";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Snow;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(118, 436);
			this->button14->Margin = System::Windows::Forms::Padding(0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 100);
			this->button14->TabIndex = 2;
			this->button14->Text = L"8";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Snow;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->button15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Location = System::Drawing::Point(224, 436);
			this->button15->Margin = System::Windows::Forms::Padding(0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 100);
			this->button15->TabIndex = 3;
			this->button15->Text = L"9";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Orange;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->Font = (gcnew System::Drawing::Font(L"Montserrat", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Snow;
			this->button16->Location = System::Drawing::Point(330, 436);
			this->button16->Margin = System::Windows::Forms::Padding(0);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 100);
			this->button16->TabIndex = 4;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Snow;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Location = System::Drawing::Point(12, 542);
			this->button17->Margin = System::Windows::Forms::Padding(0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 100);
			this->button17->TabIndex = 0;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Snow;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button18->Location = System::Drawing::Point(118, 542);
			this->button18->Margin = System::Windows::Forms::Padding(0);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 100);
			this->button18->TabIndex = 2;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Orange;
			this->button19->Font = (gcnew System::Drawing::Font(L"Montserrat", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Snow;
			this->button19->Location = System::Drawing::Point(224, 542);
			this->button19->Margin = System::Windows::Forms::Padding(0);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 100);
			this->button19->TabIndex = 3;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Orange;
			this->button20->Font = (gcnew System::Drawing::Font(L"Montserrat", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::Snow;
			this->button20->Location = System::Drawing::Point(330, 542);
			this->button20->Margin = System::Windows::Forms::Padding(0);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(100, 100);
			this->button20->TabIndex = 4;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(444, 649);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
		else if (textBox1->Text == "")
		{
			textBox1->Text = "0";
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		
		if (textBox1->Text == "0")
		{
			textBox1->Text = Numbers->Text;
		}
		else
		{
			textBox1->Text = textBox1->Text + Numbers->Text;
		}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOp = safe_cast<Button^>(sender);

	firstDigit = Double::Parse(textBox1->Text);
	textBox1->Text = "";

	operators = NumbersOp->Text;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

	secondDigit = Double::Parse(textBox1->Text);

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else
	{
		result = 0;
		textBox1->Text = System::Convert::ToString("?Operator");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Text = "0";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Text = "0";
	operators = nullptr;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text;
	}
}
};
}
