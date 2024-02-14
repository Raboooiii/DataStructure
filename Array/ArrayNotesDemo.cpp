#include "ArrayNotes.cpp"

int main(){
	cout<<"INSERTION OPERATIONS\n";
	Array<int> myArray;
	cout<<"INSERTION AT END \n";
	myArray.insert_at_end(3);
	myArray.insert_at_end(5);
	myArray.insert_at_end(6);
	cout<<myArray;
	cout<<"INSERTION AT BEGINNING \n";
	myArray.insert_at_beg(10);
	myArray.insert_at_beg(12);
	myArray.insert_at_beg(14);
	cout<<myArray;
	cout<<"INSERTION AT POSITION \n";
	myArray.insert_at_pos(20,3);
	myArray.insert_at_pos(30,4);
	cout<<myArray;
	cout<<"SEARCHING OPERATIONS: \n";
	cout<<"LINEAR SEARCH \n";
	int lin=myArray.linear_search(20);
	cout<<"INDEX POSITION :"<<lin<<endl;
	cout<<"BINARY SEARCH \n";
	int bin=myArray.binary_search(10);
	cout<<"INDEX POSITION:"<<bin<<endl;
	cout<<"DELETION OPERATIONS: \n";
	cout<<"DELETION AT BEGINNING \n";
	myArray.delete_at_beg();
	cout<<myArray;
	cout<<"DELETION AT END \n";
	myArray.delete_at_end();
	cout<<myArray;
	cout<<"DELETION AT INDEX \n";
	myArray.delete_at_index(2);
	cout<<myArray<<endl;
	cout<<"SORTING OPERATIONS: \n";
	myArray.selection_sort();
	cout<<"AFTER SELECTION SORT:\n"<<myArray;
	myArray.insert_at_beg(23);
	myArray.insert_at_beg(45);
	myArray.bubble_sort();
	cout<<"AFTER BUBBLE SORT:\n"<<myArray;

//Quick Sort
	cout<<"QUICK  SORT:\n";
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nOriginal array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "\nSorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

	//Merge Sort
	cout<<"\nMERGE SORT:\n";
    int arraym[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arraym) / sizeof(arraym[0]);

    cout << "\nGiven array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arraym[i] << " ";
    cout << endl;

    mergeSort(arraym, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arraym[i] << " ";
    cout << endl;

	//Another Array

    Array2<int> arrNew;
    int a[] = {1, 2, 3, 3, 5, 5, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
        arrNew.arr2[i] = a[i];

    cout<< arr <<endl;

    arrNew.rotate_clockwise(2, 10);
    arrNew.rotate_anti_clockwise(3, 10);
    arrNew.listDistinctElement();
    arrNew.frequencyTable();


    return 0;
}
