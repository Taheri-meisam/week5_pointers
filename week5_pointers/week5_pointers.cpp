// week 5


#include <iostream>
#include <vector>
#include <string>




// Function in struct 

struct funInStruct {
	std::string name;
	std::vector<int> courses;
	int sizeofvector() {
		return courses.size();
	}
};


// struct inheritance 
struct a {
	int a_struct;
};
struct b {
	int b_struct;
};
struct c : public a,b {
	int check;
};

int numbers[100];

// pass array to a function
void numbarr(int num[], int );
void numbarr(int num[], int size) {

	for (int i = 0; i <size; i++) {
		std::cout << i << " value is " << num[i] << std::endl ;
	}
}
/// 
/// 
/// // Variable_type *pointer;
int* int_ptr = nullptr;
double* d_ptr = nullptr;
char* char_pointer = nullptr;
std::string* str_ptr = nullptr;
int main()
{
	c obj1;
	obj1.a_struct = 0;
	int numArr[10] = { 1,2,3,4,5,6,7,8,6 };
	numbarr(numArr, 10);
	// function in struct
	funInStruct fs;
	fs.courses.push_back(20);
	std::cout << "size of vector :" << fs.sizeofvector() <<std::endl;

	//
	//Accessing the address of variables &
	int a = 30;
	char ch = 'A';
	std::string st = "";
	std::cout << "Address of interger a : " << &a << std::endl;
	std::cout << "address if char ch :  " << &ch << std::endl; //Char here is a null-terminated string
	//std::cout << treats char as a string, so it tries not to print the address of ch. Therefore, we need to
	//tell the compiler this is not a string and I want to have its address. if we cast ch to a void pointer
	// then it will treat it as a single char. and it will print its address
	std::cout << "address if char ch :  " << static_cast<void*> (&ch) << std::endl;
	std::cout << " address of string st : " << &st << std::endl;


	//
	std::cout << "Pointer int : " << int_ptr << std::endl;
	std::cout << "Pointer double : " << d_ptr << std::endl;
	std::cout << "Pointer char : " << (void*) char_pointer << std::endl;
	std::cout << "Pointer string : " << str_ptr << std::endl;


	//// example of none pointer value 
	int num = 100;
	std::cout << "Value : " << num << std::endl;
	std::cout << "'Size of num  : " << sizeof(num) << std::endl;
	std::cout << "Address of num in the memory: " << &num << std::endl;



	//// example of a pointer value 
	int* p1;
	//std::cout << "value of P1:  " << p1 << std::endl; // error // garbage 
	std::cout << "Address of p1 " << &p1 << std::endl;
	p1 = nullptr; // P1 does not point anywhere 
	std::cout << "value of p1 is :  " << p1 << std::endl;
	int* p2 = nullptr;
	std::cout << "value of p2 is :  " << p2 << std::endl;
	///
	/// 
	/// 
	/// 
	/// 
	/// 
	/// Compiler error 
	/*int  b = 100;
	double d = 20.2;
	int* i_Ptr = nullptr;
	i_Ptr = &d;  // address of double value assigned to int pointer
	*/

	// swap the variable data using pointers 
	int a2 = 101;
	int b2 = 202;

	int* val1 = &a2;
	int *val2 = &b2;
	int *temp = nullptr;

	std::cout << "Value 1 : " << *val1 << "  value 2 : " << *val2 << std::endl;
	temp = val1;
	val1 = val2;
	val2 = temp;
	std::cout << "Value 1 : " << *val1 << "  value 2 : " << *val2 << std::endl;

	// dereferencing a pointer 

	int Myval = 100;
	int* myValPtr = &Myval;
	std::cout << "My deferenced Val is :" << *myValPtr << std::endl;
	*myValPtr = 200;
	std::cout << "My new  deferenced Val is :" << *myValPtr << std::endl;
	std::cout << "My new  deferenced Val is :" << **&myValPtr << std::endl; // getting address, then point to address and dereference again
	std::cout << "My new  deferenced Val is :" << *&myValPtr << std::endl; // address and pointer to address

	/// 
	/// 
	/// Vector pointer dereferencing
	/// 
	/// 
	
	std::vector < std::string> names = { "Jack", "Alice", "Niel" };
	std::vector <std::string>* VectorPtr = &names;
	std::cout << "Vector pointer dereferencing value at 0 is: " <<
		(*VectorPtr).at(0) << std::endl; // () are important here 
	for (auto vals : *VectorPtr) {
		std::cout << "Vector pointer dereferencing values : " <<
			vals << std::endl;
	}

	// Dynamic memory allocation 
	int *ValuePtr = nullptr;
	ValuePtr = new int; // allocating an int on Heap 
	*ValuePtr = 200;
	delete ValuePtr; // free the allocated storage 


	// Dynamic memory allocation an Array 

	int* MyArrayPtr = nullptr;
	int size = 100;
	MyArrayPtr = new int[size];

	delete[] MyArrayPtr;

	
	
	return 0;


}

