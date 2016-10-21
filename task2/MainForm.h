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
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(3, 3);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(1038, 516);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			this->pictureBox->Click += gcnew System::EventHandler(this, &MainForm::pictureBox_Click);
			this->pictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox);
			this->panel1->Location = System::Drawing::Point(6, 65);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1046, 524);
			this->panel1->TabIndex = 1;
			// 
			// drawBezieN
			// 
			this->drawBezieN->Location = System::Drawing::Point(6, 21);
			this->drawBezieN->Name = L"drawBezieN";
			this->drawBezieN->Size = System::Drawing::Size(142, 38);
			this->drawBezieN->TabIndex = 2;
			this->drawBezieN->Text = L"Кривая n-го порядка";
			this->drawBezieN->UseVisualStyleBackColor = true;
			this->drawBezieN->Click += gcnew System::EventHandler(this, &MainForm::drawBezieN_Click);
			// 
			// third_bezei
			// 
			this->third_bezei->Location = System::Drawing::Point(154, 21);
			this->third_bezei->Name = L"third_bezei";
			this->third_bezei->Size = System::Drawing::Size(142, 38);
			this->third_bezei->TabIndex = 3;
			this->third_bezei->Text = L"3-его порядка";
			this->third_bezei->UseVisualStyleBackColor = true;
			this->third_bezei->Click += gcnew System::EventHandler(this, &MainForm::third_bezei_Click);
			// 
			// compositBezie_Button
			// 
			this->compositBezie_Button->Location = System::Drawing::Point(302, 21);
			this->compositBezie_Button->Name = L"compositBezie_Button";
			this->compositBezie_Button->Size = System::Drawing::Size(142, 38);
			this->compositBezie_Button->TabIndex = 1;
			this->compositBezie_Button->Text = L"Cоставная кривая Безье";
			this->compositBezie_Button->UseVisualStyleBackColor = true;
			this->compositBezie_Button->Click += gcnew System::EventHandler(this, &MainForm::compositBezie_Button_Click);
			// 
			// clearButton
			// 
			this->clearButton->Location = System::Drawing::Point(901, 21);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(138, 38);
			this->clearButton->TabIndex = 4;
			this->clearButton->Text = L"Очистить";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MainForm::clearButton_Click);
			// 
			// closeLineButton
			// 
			this->closeLineButton->Location = System::Drawing::Point(450, 22);
			this->closeLineButton->Name = L"closeLineButton";
			this->closeLineButton->Size = System::Drawing::Size(142, 37);
			this->closeLineButton->TabIndex = 5;
			this->closeLineButton->Text = L"Замкнуть";
			this->closeLineButton->UseVisualStyleBackColor = true;
			this->closeLineButton->Click += gcnew System::EventHandler(this, &MainForm::closeLineButton_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1066, 621);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->clearButton);
			this->tabPage1->Controls->Add(this->closeLineButton);
			this->tabPage1->Controls->Add(this->drawBezieN);
			this->tabPage1->Controls->Add(this->third_bezei);
			this->tabPage1->Controls->Add(this->compositBezie_Button);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1058, 595);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(192, 74);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1080, 640);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panel1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
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

	private: System::Void drawBezieN_Click(System::Object^  sender, System::EventArgs^  e) {
		clear(false);

		drawPoints(this->list_of_points);
		joinPoints(Pens::Green, this->list_of_points);

		Graphics^ im = Graphics::FromImage(bm);
		
		double delta_t = 0.02;
		int n = list_of_points->Count - 1;

		ArrayList^ points = gcnew ArrayList();
		MyPoint^ cur_point;

		for (double t = 0; t <= 1; t += delta_t) {
			t = Math::Round(t, 2);//love it
			
			double cur_x = 0;
			double cur_y = 0;
			double coef;
			
			for (int i = 0; i <= n; i++) {
				cur_point = (MyPoint^)list_of_points[i];
				coef = ((double)fact(n) / (fact(i)*fact(n - i)))* Math::Pow(t, i) * Math::Pow((1 - t), n - i);
				
				cur_y += cur_point->getY() * coef;
				cur_x += cur_point->getX() * coef;
			}

			points->Add(gcnew MyPoint(cur_x, cur_y, 0));
		}
		
		joinPoints(Pens::Blue, points);

		pictureBox->Refresh();

	}

	private: System::Void third_bezei_Click(System::Object^  sender, System::EventArgs^  e) {
		clear(false);

		drawPoints(this->list_of_points);
		joinPoints(Pens::Green, this->list_of_points);

		MyPoint^ first = (MyPoint^)list_of_points[0];
		MyPoint^ second = (MyPoint^)list_of_points[1];
		MyPoint^ third = (MyPoint^)list_of_points[2];
		MyPoint^ fouth = (MyPoint^)list_of_points[3];
		drawBrezenh(bm, first, second, third, fouth);

		pictureBox->Refresh();

	}

	private: System::Void compositBezie_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		//draw_extra_points

		clear(false);
		
		int extra_points_count = list_of_points->Count % 3;
		int extra_points_index = list_of_points->Count - extra_points_count;
		if (extra_points_count != 0) {
			list_of_points->RemoveRange(extra_points_index, extra_points_count);
			this->count -= extra_points_count;
		}
		drawPoints(this->list_of_points);
		joinPoints(Pens::Green, this->list_of_points);
		ArrayList^ extra_points = gcnew ArrayList();
		for (int i = 0; i < list_of_points->Count; i++)
		{
			if ((i + 1) % 3 == 0) {
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


		for (int i = 0; i <= list_of_points->Count - 3; i += 3)
		{
			
			drawBrezenh(bm, (MyPoint^)list_of_points[i], (MyPoint^)list_of_points[i + 1], (MyPoint^)list_of_points[i + 2], (MyPoint^)list_of_points[i + 3]);
			
		}
		pictureBox->Refresh();
	}

	private: System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e) {
		clear(true);

		pictureBox->Refresh();
	}

	private: System::Void closeLineButton_Click(System::Object^  sender, System::EventArgs^  e) {
		deleteExtraPoints(this->list_of_points);
		
		MyPoint^ cur = (MyPoint^)list_of_points[list_of_points->Count - 1];
		MyPoint^ prev = (MyPoint^)list_of_points[list_of_points->Count - 2];

		int dist_x = cur->getX() - prev->getX();
		int dist_y = cur->getY() - prev->getY();

		MyPoint^ extra = gcnew MyPoint(gcnew Point(cur->getX() + dist_x, cur->getY() + dist_y), 0);

		extra->draw(bm);
		list_of_points->Add(extra);
		cur = (MyPoint^)list_of_points[0];
		prev = (MyPoint^)list_of_points[1];
		dist_x = cur->getX() - prev->getX();
		dist_y = cur->getY() - prev->getY();

		MyPoint^ extra1 = gcnew MyPoint(gcnew Point(cur->getX() + dist_x, cur->getY() + dist_y), 0);

		extra1->draw(bm);
		list_of_points->Add(extra1);

		drawBrezenh(bm, (MyPoint^)list_of_points[list_of_points->Count - 3], (MyPoint^)list_of_points[list_of_points->Count - 2], (MyPoint^)list_of_points[list_of_points->Count - 1], (MyPoint^)list_of_points[0]);
		pictureBox->Refresh();
	}

	private: System::Void pictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: void drawBrezenh(Bitmap^ bm, MyPoint^ first, MyPoint^ second, MyPoint^ third, MyPoint^ fouth) {
		double delta_t = 0.02;
		int n = list_of_points->Count - 1;
		ArrayList^ points = gcnew ArrayList();
		Graphics^ im = Graphics::FromImage(bm);
		for (double t = 0; t <= 1; t += delta_t) {
			t = Math::Round(t, 2);
			double cur_x = Math::Pow(1 - t, 3) * first->getX() + 3 * t *  Math::Pow(1 - t, 2) * second->getX() + 3 * Math::Pow(t, 2) * (1 - t) * third->getX() + Math::Pow(t, 3) * fouth->getX();
			double cur_y = Math::Pow(1 - t, 3) * first->getY() + 3 * t *  Math::Pow(1 - t, 2) * second->getY() + 3 * Math::Pow(t, 2) * (1 - t) * third->getY() + Math::Pow(t, 3) * fouth->getY();
			points->Add(gcnew MyPoint(cur_x, cur_y));
		}
		
		joinPoints(Pens::Blue, points);
	}

	private: void drawPoints(ArrayList^ list) {
		for (int i = 0; i < list->Count; i++)
		{
			((MyPoint^)list[i])->draw(bm);
		}
	}

	private: int fact(int number) {
		int result = 1;
		for (int i = number; i > 1; i--)
		{
			result *= i;
		}
		return result;
	}

	private: void joinPoints(Pen^ pen, ArrayList^ list) {
		Graphics^ im = Graphics::FromImage(bm);
		for (int i = 1; i < list->Count; i++)
		{
			MyPoint^ start_point = (MyPoint^)list[i - 1];
			MyPoint^ end_point = (MyPoint^)list[i];
			if (start_point->isExtra() || end_point->isExtra()) {
				continue;
			}
			im->DrawLine(pen, start_point->getX(), start_point->getY(), end_point->getX(), end_point->getY());
		}
	}

	private: void deleteExtraPoints(ArrayList^ list)
	{
		for (int i = 0; i < list->Count; i++)
		{
			MyPoint^ cur = (MyPoint^)list[i];
			if (cur->isExtra()) {
				list->Remove(cur);
				i--;
			}
		}
	}

	private: void clear(bool isFull) {
		bm = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
		pictureBox->Image = bm;
		if (isFull) {
			this->list_of_points->Clear();
			this->count = 1;
		}
		else {
			deleteExtraPoints(list_of_points);
		}
	}
};
}
