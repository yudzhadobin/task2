#pragma once
#include "MyPoint.h"

namespace task2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			bm = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
			pictureBox->Image = bm;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox;
			 ArrayList^ list_of_points = gcnew ArrayList();
			 Bitmap^ bm;
			 int count = 1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  drawBezieN;
	private: System::Windows::Forms::Button^  third_bezei;
	private: System::Windows::Forms::Button^  compositBezie_Button;
	private: System::Windows::Forms::Button^  clearButton;
	private: System::Windows::Forms::Button^  closeLineButton;
	protected:

	protected:

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
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->drawBezieN = (gcnew System::Windows::Forms::Button());
			this->third_bezei = (gcnew System::Windows::Forms::Button());
			this->compositBezie_Button = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->closeLineButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(3, 3);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(938, 475);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			this->pictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox);
			this->panel1->Location = System::Drawing::Point(12, 56);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(942, 479);
			this->panel1->TabIndex = 1;
			// 
			// drawBezieN
			// 
			this->drawBezieN->Location = System::Drawing::Point(16, 12);
			this->drawBezieN->Name = L"drawBezieN";
			this->drawBezieN->Size = System::Drawing::Size(142, 38);
			this->drawBezieN->TabIndex = 2;
			this->drawBezieN->Text = L"Кривая n-го порядка";
			this->drawBezieN->UseVisualStyleBackColor = true;
			this->drawBezieN->Click += gcnew System::EventHandler(this, &MainForm::drawBezieN_Click);
			// 
			// third_bezei
			// 
			this->third_bezei->Location = System::Drawing::Point(164, 12);
			this->third_bezei->Name = L"third_bezei";
			this->third_bezei->Size = System::Drawing::Size(142, 38);
			this->third_bezei->TabIndex = 3;
			this->third_bezei->Text = L"3-его порядка";
			this->third_bezei->UseVisualStyleBackColor = true;
			this->third_bezei->Click += gcnew System::EventHandler(this, &MainForm::third_bezei_Click);
			// 
			// compositBezie_Button
			// 
			this->compositBezie_Button->Location = System::Drawing::Point(312, 12);
			this->compositBezie_Button->Name = L"compositBezie_Button";
			this->compositBezie_Button->Size = System::Drawing::Size(142, 38);
			this->compositBezie_Button->TabIndex = 1;
			this->compositBezie_Button->Text = L"Cоставная кривая Безье";
			this->compositBezie_Button->UseVisualStyleBackColor = true;
			this->compositBezie_Button->Click += gcnew System::EventHandler(this, &MainForm::compositBezie_Button_Click);
			// 
			// clearButton
			// 
			this->clearButton->Location = System::Drawing::Point(816, 12);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(138, 38);
			this->clearButton->TabIndex = 4;
			this->clearButton->Text = L"Очистить";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MainForm::clearButton_Click);
			// 
			// closeLineButton
			// 
			this->closeLineButton->Location = System::Drawing::Point(460, 13);
			this->closeLineButton->Name = L"closeLineButton";
			this->closeLineButton->Size = System::Drawing::Size(142, 37);
			this->closeLineButton->TabIndex = 5;
			this->closeLineButton->Text = L"Замкнуть";
			this->closeLineButton->UseVisualStyleBackColor = true;
			this->closeLineButton->Click += gcnew System::EventHandler(this, &MainForm::closeLineButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 547);
			this->Controls->Add(this->closeLineButton);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->compositBezie_Button);
			this->Controls->Add(this->third_bezei);
			this->Controls->Add(this->drawBezieN);
			this->Controls->Add(this->panel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void pictureBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		MyPoint^ point = gcnew MyPoint(gcnew Point(e->X, e->Y), count++);
		point->draw(bm);
		pictureBox->Refresh();
		list_of_points->Add(point);
	}

	private: int fact(int number) {
		int result = 1;
		for (int i = number; i > 1; i--)
		{
			result *= i;
		}
		Console::WriteLine(number + "! = " + result);
		return result;
	}

	private: System::Void drawBezieN_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ im = Graphics::FromImage(bm);
		double delta_t = 0.02;
		int n = list_of_points->Count - 1;

		for (int i = 1; i < list_of_points->Count; i++)
		{
			MyPoint^ start_point = (MyPoint^)list_of_points[i - 1];
			MyPoint^ end_point = (MyPoint^)list_of_points[i];
			im->DrawLine(Pens::Red, start_point->getX(), start_point->getY() , end_point->getX(), end_point->getY());
		}

		ArrayList^ points = gcnew ArrayList();
		MyPoint^ cur_point;
		
		for (double t = 0; t <= 1; t += delta_t) {
			t = Math::Round(t, 2);
			double cur_x = 0;
			double cur_y = 0;
			for (int i = 0; i <= n ; i++) {
				if (t == 0.98 &&  i == n-1) {
					int j = 5;
				}
				cur_point = (MyPoint^)list_of_points[i];
				cur_y += cur_point->getY() * ((double)fact(n) / (fact(i)*fact(n - i)))* Math::Pow(t, i) * Math::Pow((1 - t), n - i);
				double delta_x = fact(n) / (double)(fact(i)* fact(n - i)) * Math::Pow(t, i) * Math::Pow(1 - t, n - i) * cur_point->getX();

				cur_x += delta_x;
			}

			points->Add(gcnew Point(cur_x, cur_y));
			int j = 5;
		}


		for (int i = 1; i < points -> Count; i++)
		{
			im->DrawLine(Pens::Blue, *(Point^)points[i - 1], *(Point^)points[i]);
		}

		pictureBox->Refresh();

	}

private: System::Void third_bezei_Click(System::Object^  sender, System::EventArgs^  e) {
	Graphics^ im = Graphics::FromImage(bm);
	double delta_t = 0.02;
	int n = list_of_points->Count - 1;
/*
	for (int i = 1; i < list_of_points->Count; i++)
	{
		MyPoint^ start_point = (MyPoint^)list_of_points[i - 1];
		MyPoint^ end_point = (MyPoint^)list_of_points[i];
		im->DrawLine(Pens::Red, start_point->getX(), start_point->getY(), end_point->getX(), end_point->getY());
	}
	*/
	
	MyPoint^ first = (MyPoint^)list_of_points[0];
	MyPoint^ second = (MyPoint^)list_of_points[1];
	MyPoint^ third = (MyPoint^)list_of_points[2];
	MyPoint^ fouth = (MyPoint^)list_of_points[3];
	drawBrezenh(bm, first, second, third, fouth);

	pictureBox->Refresh();

}

	void drawBrezenh(Bitmap^ bm, MyPoint^ first, MyPoint^ second, MyPoint^ third, MyPoint^ fouth) {
			 double delta_t = 0.02;
			 int n = list_of_points->Count - 1;
			 ArrayList^ points = gcnew ArrayList();
			 Graphics^ im = Graphics::FromImage(bm);
			 for (double t = 0; t <= 1; t += delta_t) {
				 t = Math::Round(t, 2);
				 double cur_x = Math::Pow(1 - t, 3) * first->getX() + 3 * t *  Math::Pow(1 - t, 2) * second->getX() + 3 * Math::Pow(t, 2) * (1 - t) * third->getX() + Math::Pow(t, 3) * fouth->getX();
				 double cur_y = Math::Pow(1 - t, 3) * first->getY() + 3 * t *  Math::Pow(1 - t, 2) * second->getY() + 3 * Math::Pow(t, 2) * (1 - t) * third->getY() + Math::Pow(t, 3) * fouth->getY();
				 points->Add(gcnew Point(cur_x, cur_y));
			 }
			 for (int i = 1; i < points->Count; i++)
			 {
				 im->DrawLine(Pens::Blue, *(Point^)points[i - 1], *(Point^)points[i]);
			 }
	}

private: System::Void compositBezie_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	//draw_extra_points
	ArrayList^ extra_points = gcnew ArrayList();
	for (int i = 0; i < list_of_points->Count; i++)
	{
		if ((i+1) % 3 == 0 ) {
			MyPoint^ cur = (MyPoint^)list_of_points[i - i / 3];
			MyPoint^ next = (MyPoint^)list_of_points[i + 1 - i / 3];
			int dist_x = next->getX() - cur->getX();
			int dist_y = next->getY() - cur->getY();

			MyPoint^ extra = gcnew MyPoint(gcnew Point(next->getX() + dist_x, next->getY() + dist_y), 0);
			extra->draw(bm);
			extra_points->Add(extra);
		}
	}

	for (int i = 0; i < extra_points->Count; i++)
	{
		this->list_of_points->Insert(1 + 3 * (1 + i), extra_points[i]);
	}
	for (int i = 0; i < list_of_points->Count; i += 3)
	{
		try {
			drawBrezenh(bm, (MyPoint^)list_of_points[i], (MyPoint^)list_of_points[i + 1], (MyPoint^)list_of_points[i + 2], (MyPoint^)list_of_points[i + 3]);
		}
		catch (Exception^ e) {

		}
	}
	pictureBox->Refresh();
}

private: System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e) {
	bm = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
	pictureBox->Image = bm;
	
	pictureBox->Refresh();
	
	this->list_of_points->Clear();
	this->count = 1;
}

private: System::Void closeLineButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
