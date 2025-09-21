#include"header.h"
using namespace std;
Node* taoNode(int giatri) {
	Node* moi = new Node;
	moi->giatri = giatri;
	moi->truoc = nullptr;
	moi->sau = nullptr;
	return moi;
}
void themDau(Node*& dau, int giatri) {
	Node* moi = taoNode(giatri);
	moi->sau = dau;
	if (dau != nullptr) {
		dau->truoc = moi;
		
	}
	dau = moi;
}
void themCuoi(Node*& dau, int giatri) {
	Node* moi = taoNode(giatri);
	if (dau == nullptr) {
		dau = moi;
		return;
	}
	Node* tam = dau;
	while (tam->sau != nullptr) {
		tam = tam->sau;
}
	tam->sau = moi;
	moi->truoc = tam;
}
void inDS(Node* dau) {
	Node* tam = dau;
	while (tam != nullptr) {
		cout << tam->giatri<<" ";
		tam = tam->sau;
	}
	cout << endl;
}
void themSauGiaTri(Node*& dau, int giatri, int saugiatri) {
	Node* tam = dau;
	while (tam != nullptr && tam->giatri != saugiatri) {
		tam = tam->sau;
	}
	if (tam == nullptr) {
		cout << "khong tim thay node de chen\n";
		return;
	}
	Node* moi = taoNode(giatri);
	moi->sau = tam->sau;
	if (tam->sau != nullptr) {
		tam->sau->truoc = moi;
	}
	tam->sau = moi;
	moi->truoc = tam;
}
void xoaDau(Node*& dau) {
	if (dau == nullptr) {
		cout << "danh sach rong" << endl;
		return;
	}
	Node* tam = dau;
	dau = dau->sau;
	if (dau != nullptr) {
		dau->truoc = nullptr;
	}
	delete tam;
}
void xoaCuoi(Node*& dau) {
	if (dau == nullptr) {
		cout << "danh sach rong" << endl;
	}
	Node* tam = dau;
	while (tam->sau != nullptr) {
		tam = tam->sau;
	}
	if (tam->truoc != nullptr) {
		tam->truoc->sau = nullptr;
	}
	else {
		dau = nullptr;
	}
	delete tam;
}
void xoaTheoGiaTri(Node*& dau, int giatri) {
	Node* tam = dau;
	while (tam != nullptr && tam->giatri != giatri) {
		tam = tam->sau;
	}
	if (tam == nullptr) {
		cout << "khong tim thay noode can xoa" << endl;
		return;
	}
	if (tam->truoc != nullptr) {
		tam->truoc->sau = tam->sau;
	}
	else {
		dau = tam->sau;
	}
	if (tam->sau != nullptr) {
		tam->sau->truoc = tam->truoc;
	}
	delete tam;
}
void xoaTheoViTri(Node*& dau, int vitri) {
	if (dau == nullptr) {
		cout << "danh sach rong " << endl;
		return;
	}
	Node* tam = dau;
	int i = 0;
	while (tam != nullptr && i < vitri) {
		tam = tam->sau;
		i++;
	}
	if (tam->truoc != nullptr) {
		tam->truoc->sau = tam->sau;
	}
	else {
		dau = tam->sau;
	}
	if (tam->sau != nullptr) {
		tam->sau->truoc = tam->truoc;
	}
	delete tam;
}
void xoaHet(Node*& dau) {
	Node* tam = dau;
	while (tam != nullptr) {
		Node* xoa = tam;
		tam = tam->sau;
		delete xoa;
	}
	dau = nullptr;
}
Node* timKiemTheoViTri(Node* dau, int vitri) {
	Node* tam = dau;
	int i = 0;
	while (tam != nullptr && i < vitri) {
		tam = tam->sau;
		i++;
	}
	if (tam == nullptr) {
		cout << "khong tim thay vi tri " << endl;
		return nullptr;
	}
	cout << "da tim thay node "<<tam->giatri<< " tai vi tri " <<vitri<< endl;
	return tam;
}
Node* timTheoGiaTri(Node* dau, int giatri) {
	Node* tam = dau;
	int vitri = 0;
	while (tam != nullptr) {
		if (tam->giatri == giatri) {
			cout << "da tim thay node " << giatri << " tai vi tri " << vitri<<endl;
			return tam;
		}
		tam = tam->sau;
		vitri++;
	}
	cout << "khong tim thay node " << giatri << endl;
	return nullptr;
}
int demNode(Node* dau) {
	int dem = 0;
	Node* tam = dau;
	if (tam == nullptr) {
		cout << "danh sach rong" << endl;
		return 0;
	}
	while (tam != nullptr) {
		tam = tam->sau;
		dem++;
	}
	return dem;
}
int timMin(Node*& dau) {
	Node* tam = dau;
	int Min = tam->giatri;
	if (dau == nullptr) {
		cout << "danh sach rong" << endl;
		return -1;
	}
	while (tam != nullptr) {
		if (tam->giatri < Min) {
			Min = tam->giatri;
		}
		tam = tam->sau;
	}
	return Min;
}
int timMax(Node*& dau) {
	Node* tam = dau;
	int Max = tam->giatri;
	if (tam == nullptr) {
		cout << "danh sach rong" << endl;
		return -1;
	}
	while (tam != nullptr) {
		if (tam->giatri > Max) {
			Max = tam->giatri;
		}
		tam = tam->sau;
	}
	return Max;
}
int tinhTongNode(Node* dau) {
	Node* tam = dau;
	int tinhtong = 0;
	if (tam == 0) {
		cout << "danh sach rong " << endl;
		return -1;
	}
	while (tam != nullptr) {
		tinhtong =  tinhtong+tam->giatri;
		tam = tam->sau;
	}
	return tinhtong;
}
int tinhTBNode(Node* dau) {
	if (dau == nullptr) {
		cout << "danh sach rong" << endl;
		return -1;
	}
	Node* tam = dau;
	int tinhTong = 0;
	int demNode = 0;
	while (tam != nullptr) {
		tinhTong = tinhTong + tam->giatri;
		demNode++;
		tam = tam->sau;
	}
	return tinhTong / demNode;
}
void demChanLe(Node* &dau, int &chan, int &le) {
	Node* tam = dau;
	 chan = 0;
	 le = 0;
	if (tam == nullptr) {
		cout << "danh sach rong " << endl<<endl;
		return ;
	}
	while (tam != nullptr) {
		if (tam->giatri % 2 != 0) {
			le++;
		}
		else {
			chan++;

		}
		tam = tam->sau;
	}
}
void daoNode(Node*& dau) {
	Node* hienTai = dau;
	Node* truoc = nullptr;
	if (hienTai == nullptr) {
		cout << "danh sach rong " << endl;
		return ;
	}
	while (hienTai != nullptr) {
		truoc = hienTai->truoc;
		hienTai->truoc = hienTai->sau;
		hienTai->sau = truoc;
		hienTai = hienTai->truoc;
	}
	if (truoc != nullptr) {
		dau=truoc->truoc;
		
	}

}
void chenSauNode(Node*& dau, int giatritim, int giatrichen) {
	if (dau == nullptr) {
		cout << "danh sach rong " << endl;
		return;
	}
	Node* tam = dau;
	while (tam != nullptr && tam->giatri != giatritim){
		tam = tam->sau;

		}
	Node* moi = new Node;
	moi->giatri = giatrichen;
	moi->sau = tam->sau;
	moi->truoc = tam;
	if (tam->sau != nullptr) {
		tam->sau->truoc = moi;
	}
	tam->sau = moi;
}
void sapXepTuBeDenLon(Node*& dau){
	if (dau == nullptr) {
		cout << "danh sach rong " << endl;
		return;
	}
	for (Node* i = dau; i->sau != nullptr; i = i->sau) {
		for (Node* j = i->sau; j != nullptr; j = j->sau) {
			if (i->giatri > j->giatri) {
				swap(i->giatri, j->giatri);
			}
		}
	}
	}
void sapXepTuLonDenBe(Node*& dau) {
	if (dau == nullptr) {
		cout << "danh sach rong " << endl;
		return;
	}
	for (Node* i = dau; i->sau != nullptr; i = i->sau) {
		for (Node* j = i->sau; j != nullptr; j = j->sau) {
			if (i->giatri < j->giatri) {
				swap(i->giatri, j->giatri);
			}
		}
	}
}
bool kTraDSCan(Node*& dau) {
	if (dau == nullptr) {
		return true;
	}
	Node* trai = dau;
	Node* phai = dau;
	while (phai->sau != nullptr) {
		phai = phai->sau;
	}
	while (trai != nullptr && phai != nullptr && trai != phai && trai->truoc != phai) {
		if (trai->giatri != phai->giatri) {
			return false;
		}
		trai = trai->sau;
		phai = phai->truoc;
	}
	return true;
}
