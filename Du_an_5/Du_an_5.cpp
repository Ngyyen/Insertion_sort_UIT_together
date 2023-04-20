#include <iostream>
#include "Double_linked_list.h"
#include <string>
#include <fstream>
using namespace std;
int main()
{
	for (int i = 1; i <= 13; ++i) {
		string file_name = "intdata";
		if (i < 10) {
			file_name += "0";
		}
		string num_file = to_string(i);
		string file_in = file_name + num_file + ".inp";
		ifstream fi(file_in);
		Double_linked_list lst;
		lst.Nhap(fi);
		lst.Insertion_sort();
		string file_out = file_name + num_file + ".out";
		ofstream fo(file_out);
		lst.print(fo);
	}
	/*
	Double_linked_list list;
	list.print(cout);
	list.append(100);
	list.prepend(55);
	list.append(1);
	list.insert(1, 37);
	list.insert(2, 44);
	list.print(cout);
	list.Insertion_sort();
	*/
	return 0;
}