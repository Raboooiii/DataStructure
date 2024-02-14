#include<iostream>
#include<ostream>
using namespace std;
template <class T>
class Array
{
	int LB,UB;
	T A[100];
	public:
		Array();
		Array(int,int,T[]);
		void insert_at_end(T);
		void insert_at_beg(T);
		void insert_at_pos(T,int);
		void delete_at_beg();
		void delete_at_end();
		void delete_at_index(int);
		T linear_search(T);
		void swap(int,int);
		void selection_sort();
		T binary_search(T);
		void bubble_sort();
		template<typename V>
		void quickSort(V arr[], int low, int high);
		template<typename W>
		void mergeSort(W arr[], int l, int r);
		template<class U>
		friend ostream & operator <<(ostream &,Array <U>);
};
template <typename X>
class Array2 
{
	public:
		 X arr2[100];
		
		 void rotate_clockwise(int LB, int UB);
		 void rotate_anti_clockwise(int LB, int UB);
		 void listDistinctElement();
	         void frequencyTable();
		 template<typename Y>
		 friend ostream& operator<<(ostream& out, const Array2<Y>& N);
};
