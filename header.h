#pragma once
#include<iostream>
using namespace std;
struct Node {
	int giatri;
	Node* truoc;
	Node* sau;
};
Node* taoNode(int giatri);
void themDau(Node*& dau, int giatri);
void themCuoi(Node*& dau, int giatri);
void inDS(Node *dau);
void themSauGiaTri(Node*& dau, int giatri, int saugiatri);
void xoaDau(Node*& dau);
void xoaCuoi(Node*& dau); 
void xoaTheoGiaTri(Node*& dau,int giatri);
void xoaTheoViTri(Node*& dau, int vitri);
void xoaHet(Node*& dau);
Node* timKiemTheoViTri(Node* dau, int vitri);
Node* timTheoGiaTri(Node* dau, int giatri);
int demNode(Node* dau);
int timMin(Node*& dau);
int timMax(Node*& dau);
int tinhTongNode(Node* dau);
int tinhTBNode(Node* dau);
void demChanLe(Node* &dau, int &chan, int &le);
void daoNode(Node*& dau);
void chenSauNode(Node*& dau, int giatritim,int giatrichen);
void sapXepTuBeDenLon(Node*& dau);
void sapXepTuLonDenBe(Node*& dau);
bool kTraDSCan(Node*& dau);
