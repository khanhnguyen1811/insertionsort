#include <iostream>
using namespace std; 
void InsertionSort(int arr[], int sopt){
	int i, j, mark; 
	//chay i tu phan tu thu 2 den phan tu cuoi. 
	for (i = 1; i < sopt; i++)
	{
		//gia tri tai do = mark. 
		mark = arr[i];
		//xet j va i. 
		j = i - 1; 
		// neu vi tri >= 0 va gia tri > mark, thi ta swap. 
		while (j > 0 && arr[j] > mark)
		{
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = mark;
	}
}
void Swapp(int *pa, int *pb){
	int tam; 
	tam = *pa; 
	*pa = *pb; 
	*pb = tam;
}
void BubbleSort(int arr[], int sopt){
	int i, j; 
	for (i = 0; i < sopt-1; i++)
	{
		for (j = 0; j < sopt-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				Swapp(&arr[j], &arr[j + 1]);
			}
		}
	}
}
void SelectionSort(int arr[], int sopt){
	int i, j; 
	for (i = 0; i < sopt; i++)
	{
		for (j = i+1; j < sopt; j++)
		{
			if (arr[i] > arr[j])
			{
				Swapp(&arr[i], &arr[j]);
			}
		}
	}
}
int main(){
	int arr[100], i, sopt; 
	cout << "nhap sopt : "; cin >> sopt; 
	for (i = 0; i < sopt; i++)
	{
		cin >> arr[i];
	}
	SelectionSort(arr, sopt);
	//BubbleSort(arr, sopt);
	//InsertionSort(arr, sopt); 
	cout << "mang sap xep la: " << "\n";
	for (i = 0; i < sopt; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}