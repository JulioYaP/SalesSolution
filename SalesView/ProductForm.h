#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// My namespaces
	using namespace SalesModel;			// For Classes and Methods
	using namespace SalesController;	// For Controllers
	using namespace System::Collections::Generic; // For List


	/// <summary>
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		// Build
		Product^ product = gcnew Product();

		ProductForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textProductId;
	private: System::Windows::Forms::TextBox^ textProductName;
	private: System::Windows::Forms::TextBox^ textProductDescription;
	private: System::Windows::Forms::TextBox^ textProductPriceMin;

	private: System::Windows::Forms::TextBox^ textProductPriceMaj;
	private: System::Windows::Forms::TextBox^ textProductStock;






	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::Button^ btnUpdateProduct;
	private: System::Windows::Forms::Button^ btnDeleteProduct;




	private: System::Windows::Forms::DataGridView^ ProductGrid;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductPriceMin;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductPriceMaj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductStock;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textProductId = (gcnew System::Windows::Forms::TextBox());
			this->textProductName = (gcnew System::Windows::Forms::TextBox());
			this->textProductDescription = (gcnew System::Windows::Forms::TextBox());
			this->textProductPriceMin = (gcnew System::Windows::Forms::TextBox());
			this->textProductPriceMaj = (gcnew System::Windows::Forms::TextBox());
			this->textProductStock = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->btnUpdateProduct = (gcnew System::Windows::Forms::Button());
			this->btnDeleteProduct = (gcnew System::Windows::Forms::Button());
			this->ProductGrid = (gcnew System::Windows::Forms::DataGridView());
			this->ProductId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductPriceMin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductPriceMaj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripción";
			this->label3->Click += gcnew System::EventHandler(this, &ProductForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio (min.)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Precio (may.)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 245);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Stock";
			// 
			// textProductId
			// 
			this->textProductId->Location = System::Drawing::Point(138, 17);
			this->textProductId->Name = L"textProductId";
			this->textProductId->Size = System::Drawing::Size(100, 22);
			this->textProductId->TabIndex = 6;
			// 
			// textProductName
			// 
			this->textProductName->Location = System::Drawing::Point(138, 61);
			this->textProductName->Name = L"textProductName";
			this->textProductName->Size = System::Drawing::Size(203, 22);
			this->textProductName->TabIndex = 7;
			// 
			// textProductDescription
			// 
			this->textProductDescription->Location = System::Drawing::Point(138, 91);
			this->textProductDescription->Multiline = true;
			this->textProductDescription->Name = L"textProductDescription";
			this->textProductDescription->Size = System::Drawing::Size(203, 83);
			this->textProductDescription->TabIndex = 8;
			// 
			// textProductPriceMin
			// 
			this->textProductPriceMin->Location = System::Drawing::Point(138, 180);
			this->textProductPriceMin->Name = L"textProductPriceMin";
			this->textProductPriceMin->Size = System::Drawing::Size(100, 22);
			this->textProductPriceMin->TabIndex = 9;
			// 
			// textProductPriceMaj
			// 
			this->textProductPriceMaj->Location = System::Drawing::Point(138, 213);
			this->textProductPriceMaj->Name = L"textProductPriceMaj";
			this->textProductPriceMaj->Size = System::Drawing::Size(100, 22);
			this->textProductPriceMaj->TabIndex = 10;
			// 
			// textProductStock
			// 
			this->textProductStock->Location = System::Drawing::Point(138, 245);
			this->textProductStock->Name = L"textProductStock";
			this->textProductStock->Size = System::Drawing::Size(100, 22);
			this->textProductStock->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(421, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(239, 171);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Location = System::Drawing::Point(23, 295);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(215, 47);
			this->btnAddProduct->TabIndex = 13;
			this->btnAddProduct->Text = L"Agregar";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &ProductForm::btnAddProduct_Click);
			// 
			// btnUpdateProduct
			// 
			this->btnUpdateProduct->Location = System::Drawing::Point(255, 295);
			this->btnUpdateProduct->Name = L"btnUpdateProduct";
			this->btnUpdateProduct->Size = System::Drawing::Size(219, 47);
			this->btnUpdateProduct->TabIndex = 14;
			this->btnUpdateProduct->Text = L"Modificar";
			this->btnUpdateProduct->UseVisualStyleBackColor = true;
			this->btnUpdateProduct->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdateProduct_Click);
			// 
			// btnDeleteProduct
			// 
			this->btnDeleteProduct->Location = System::Drawing::Point(493, 295);
			this->btnDeleteProduct->Name = L"btnDeleteProduct";
			this->btnDeleteProduct->Size = System::Drawing::Size(197, 47);
			this->btnDeleteProduct->TabIndex = 15;
			this->btnDeleteProduct->Text = L"Eliminar";
			this->btnDeleteProduct->UseVisualStyleBackColor = true;
			this->btnDeleteProduct->Click += gcnew System::EventHandler(this, &ProductForm::button3_Click);
			// 
			// ProductGrid
			// 
			this->ProductGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ProductGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ProductId,
					this->ProductName, this->ProductPriceMin, this->ProductPriceMaj, this->ProductStock
			});
			this->ProductGrid->Location = System::Drawing::Point(15, 371);
			this->ProductGrid->Name = L"ProductGrid";
			this->ProductGrid->RowHeadersWidth = 51;
			this->ProductGrid->RowTemplate->Height = 24;
			this->ProductGrid->Size = System::Drawing::Size(675, 205);
			this->ProductGrid->TabIndex = 16;
			// 
			// ProductId
			// 
			this->ProductId->HeaderText = L"ID";
			this->ProductId->MinimumWidth = 6;
			this->ProductId->Name = L"ProductId";
			this->ProductId->Width = 80;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Nombre";
			this->ProductName->MinimumWidth = 6;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 300;
			// 
			// ProductPriceMin
			// 
			this->ProductPriceMin->HeaderText = L"Precio Unit. (Min.)";
			this->ProductPriceMin->MinimumWidth = 6;
			this->ProductPriceMin->Name = L"ProductPriceMin";
			this->ProductPriceMin->Width = 80;
			// 
			// ProductPriceMaj
			// 
			this->ProductPriceMaj->HeaderText = L"Precio Unit. (May.)";
			this->ProductPriceMaj->MinimumWidth = 6;
			this->ProductPriceMaj->Name = L"ProductPriceMaj";
			this->ProductPriceMaj->Width = 80;
			// 
			// ProductStock
			// 
			this->ProductStock->HeaderText = L"Stock";
			this->ProductStock->MinimumWidth = 6;
			this->ProductStock->Name = L"ProductStock";
			this->ProductStock->Width = 80;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 588);
			this->Controls->Add(this->ProductGrid);
			this->Controls->Add(this->btnDeleteProduct);
			this->Controls->Add(this->btnUpdateProduct);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textProductStock);
			this->Controls->Add(this->textProductPriceMaj);
			this->Controls->Add(this->textProductPriceMin);
			this->Controls->Add(this->textProductDescription);
			this->Controls->Add(this->textProductName);
			this->Controls->Add(this->textProductId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProductForm";
			this->Text = L"ProductForm";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

// Delete
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Look For the product and delete
	Controller::DeleteProduct(Convert::ToInt32(textProductId->Text));

	// Refresh Grid
	RefreshGrid();
}

// Create/Add
private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// PutOn
	PutOnProduct();
	// Add
	Controller::AddProduct(product);
	// Refresh Grid
	RefreshGrid();
}
	   void RefreshGrid() {
		   
		   // Remake ProductList
		   // Build List
		   List<Product^>^ ProductList = Controller::ReadAllProudcts();

		   // Clean Grid
		   ProductGrid->Rows->Clear();

		   // Remake Grid
		   for (int i = 0; i < ProductList->Count; i++)
			   ProductGrid->Rows->Add(gcnew array<String^>{
					"" + ProductList[i]->getId(),
				    "" + ProductList[i]->Name,
				    "" + ProductList[i]->PriceMin,
				    "" + ProductList[i]->PriceMaj,
				    "" + ProductList[i]->Stock
		   });
	}
	   void PutOnProduct() {
		   // Put on
		   product->setId(Convert::ToInt32(textProductId->Text));
		   product->Name = textProductName->Text;
		   product->Description = textProductDescription->Text;
		   product->PriceMin = Convert::ToDouble(textProductPriceMin->Text);
		   product->PriceMaj = Convert::ToDouble(textProductPriceMaj->Text);
		   product->Stock = Convert::ToInt32(textProductStock->Text);
		   product->Status = 'A';
	   }

// Refresh
private: System::Void btnUpdateProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	// PutOn
	PutOnProduct();
	Controller:: UpdateProduct(Controller::ReadProductById(product->getId()));
	// Refresh Grid
	RefreshGrid();

}
};
}
