#include"header.h"
using namespace std;
int main() {
	Node* dau = nullptr;
	int chon = 0;
	do {
		cout << "\n=======MENU=======\n";
		cout << "1.Them dau\n";
		cout << "2.Them cuoi\n";
		cout << "3.In danh sach\n";
		cout << "4.Xoa dau\n";
		cout << "5.Xoa cuoi\n";
		cout << "6.Xoa theo vi tri\n";
		cout << "7.Xoa theo gia tri\n";
		cout << "8.tim theo gia tri\n";
		cout << "9.Tim theo gia tri\n";
		cout << "10.Dem node\n";
		cout << "11.Tim min\n";
		cout << "12.Tim max\n";
		cout << "13.Tinh tong node\n";
		cout << "14.Tinh trung binh node\n";
		cout << "15.Tinh chan le\n";
		cout << "16.Dao node\n";
		cout << "17.Chen sau node\n";
		cout << "18.sap xep tu be den lon\n";
		cout << "19.sap xep tu lon den be\n";
		cout << "20.Kiem tra danh sach can hay khong\n";
		cout << "21.xoa het!\n";
		cin >> chon;
		int giatri, vitri;
		switch (chon) {
		case 1:
			cout << "moi nhap gia tri can them vao dau danh sach: ";
			cin >> giatri;
			themDau(dau, giatri);
			break;
		case 2:
				cout << "moi nhap gia tri can them cuoi danh sach: ";
				cin >> giatri;
				themCuoi(dau, giatri);
				break;
		case 3:
			cout << "danh sach hien tai: ";
			inDS(dau);
			break;
		case 4:
			xoaDau(dau);
			break;
		case 5:
			xoaCuoi(dau);
			break;
		case 6:
			cout << "moi nhap vi tri can xoa: ";
			cin >> vitri;
			cout << "da xoa node tai vi tri "<<vitri;
			break;
		case 7:
			cout << "moi nhap gia tri can xoa: ";
			cin >> giatri;
			cout << "da xoa node co gia tri " << giatri;
		case 8:
			cout<<"moi nhap gia tri can tim"

		}
	}
	while (chon != 0);
}