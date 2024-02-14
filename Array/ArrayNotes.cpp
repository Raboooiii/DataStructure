#include"ArrayNotes.h"

template <class T>
Array<T>::Array()
{
	LB=1;
	UB=0;
}
template<class T>
Array<T>::Array(int LB,int UB,T x[])
{	
}
template<class T>
void Array<T>::insert_at_end(T key)
{
	UB=UB+1;
	A[UB]=key;
}
int k;
template<class T>
void Array<T>::insert_at_beg(T key)
{
	UB+=1;
	k=UB-1;
	while (k>=LB)
	{
		A[k+1]=A[k];
		k-=1;
	}
	A[LB]=key;
}
template<class T>
void Array<T>::insert_at_pos(T key,int pos)
{
	
	UB+=1;
	k=UB-1;
	while (k>=pos)
	{
		A[k+1]=A[k];
		k-=1;
	}
	A[pos]=key;
}
template<class T>
void Array<T>::delete_at_beg()
{
	LB+=1;
	
}
template<class T>
void Array<T>::delete_at_end()
{
	UB-=1;
	
}
template<class T>
void Array<T>::delete_at_index(int pos)
{
	if (LB<=pos and UB>=pos)
	{
		k=pos+1;
		while (k<=UB)
		{
		  A[k-1]=A[k];
	   	  k+=1;	
		}
		UB-=1;
	}
	else
	{
		cout<<"OUT OF BOUND";
	}
	
}
template<class T>
T Array<T>::linear_search(T key)
{
	int index=NULL;
	int i=LB;
	while (i<=UB)
	{
		if (A[i]==key)
		{
			index=i;
			break;
		}
		i=i+1;
	}
	return index;
}

template<class T>
void Array<T>::swap(int p,int q)
{
	T t=A[p];
	A[p]=A[q];
	A[q]=t;
}
template<class T>
void Array<T>::selection_sort()
{
	for(int i=LB;i<UB;i++)
	{
		int min=i;
		for(int j=i+1;j<=UB;j++)
		{
			if (A[j]<A[min])
			{
				min=j;
			}
		}
		if (min!=i)
		{
			swap(i,min);
		}
	}
}
template<class T>
T Array<T>::binary_search(T key)
{
	int p=LB;
	int q=UB;
	while (p<=q)
	{
		int mid=(p+q)/2;
		if (A[mid]>key)
		{
			q=mid-1;
		}
		else if(A[mid]<key)
		{
			p=mid+1;
		}
		else
		{
			return mid;
		}
	}
	return NULL;
}
template<class T>
void Array<T>::bubble_sort()
{
	for(int i=LB;i<UB;i++)
	{
		for(int j=LB;j<UB+LB-i-1;j++)
		{
			if (A[j]>A[j+1])
			{
				swap(j,j+1);
			}
		}
	}
}

template<typename V>
int partition(V arr[], int LB, int UB) {
    V pivot = arr[UB];
    int i = LB - 1;

    for (int j = LB; j < UB; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[UB]);
    return i + 1;
}

template<typename V>
void quickSort(V arr[], int LB, int UB) {
    if (LB < UB) {
        int pi = partition(arr, LB, UB);

        quickSort(arr, LB, pi - 1);
        quickSort(arr, pi + 1, UB);
    }
}

template void quickSort<int>(int arr[], int LB, int UB);
template void quickSort<float>(float arr[], int LB, int UB);
template void quickSort<double>(double arr[], int LB, int UB);

template<typename W>
void merge(W arraym[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    W L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arraym[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arraym[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arraym[k] = L[i];
            i++;
        } else {
            arraym[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arraym[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arraym[k] = R[j];
        j++;
        k++;
    }
}

template<typename W>
void mergeSort(W arraym[], int l, int r) {
    if (l >= r) {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(arraym, l, m);
    mergeSort(arraym, m + 1, r);
    merge(arraym, l, m, r);
}

template void mergeSort<int>(int arraym[], int l, int r);
template void mergeSort<float>(float arraym[], int l, int r);
template void mergeSort<double>(double arraym[], int l, int r);

template <class U>
ostream & operator <<(ostream & os, Array<U> M)
{
	int i;
	os<<endl;
	for(i=M.LB;i<=M.UB;i++)
	{
		os<<M.A[i]<<" ";
	}
	os<<endl;
	return os;
}

template <typename X>
void Array2<X>::rotate_clockwise(int LB, int UB) {
    cout << "Elements after rotating " << LB << " positions Clockwise are : ";
    for (int i = 0; i < UB; i++)
        cout << arr2[(i + LB) % UB] << " ";
    cout << endl;
}

template <typename X>
void Array2<X>::rotate_anti_clockwise(int LB, int UB) {
    cout << "Elements after rotating " << -LB << " positions AntiClockwise are : ";
    for (int i = 0; i < UB; i++)
        cout << arr2[(UB + i - LB) % UB] << " ";
    cout << endl;
}

template <typename X>
void Array2<X>::listDistinctElement() {
    int freq[11] = {0};
    cout << "The Distinct Elements in the array are : ";
    for (int i = 0; i < 10; i++) {
        if (!freq[arr2[i]])
            cout << arr2[i] << " ";
        freq[arr2[i]] = 1;
    }
    cout << endl;
}

template <typename X>
void Array2<X>::frequencyTable() {
    int n = 10;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "\nFrequency Table of Each Element is as follows:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " -> ";
        for (int j = 0; j <= i; j++)
            if (a[j] == a[i]) cout << "1";
        cout << endl;
    }
}

template <typename Y>
ostream& operator<<(ostream& out, const Array2<Y>& N) {
    out << "Array Elements: ";
    for (int i = 0; i < 10; ++i) {
        out << N.arr2[i] << " ";
    }
    return out;
}
