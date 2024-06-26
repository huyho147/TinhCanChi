#include <iostream>
using namespace std;
void TinhCanChi(int nam)
{
	const string Can[10] = { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky" };
	const string Chi[12] = { "Than", "Dau", "Tuat", "Hoi","Ti", "Suu", "Dan", "Meo", "Thin", "Ty", "Ngo", "Mui" };
	cout << Can[nam % 10] << " " << Chi[nam % 12] << endl;
}

int main()
{
	cout << "Tinh nam!!! \n";
	for (int i = 1990; i <= 2050; i++)
	{
		cout << "Nam " << i << ": ";
		TinhCanChi(i);
	}
}