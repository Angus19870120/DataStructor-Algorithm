#include<iostream>
#include<cstdlib>
#include"BTree.h"
using namespace std;
int main(){
	const int n=15;
	int i,a[n]={10,5,15,8,3,18,13,12,14,16,20,1,4,6,9};
	BinaryTree<int> btree;
	btree.Creat(a,n);
	cout<<"�������ݣ�"<<endl;
	for(i=0;i<n;i++) cout<<a[i]<<'\t';
	cout<<endl<<"����"<<endl;
	btree.InOrder();    //��������������
	cout<<endl<<"ǰ��"<<endl;
	btree.PreOrder();
	cout<<endl<<"����"<<endl;
	btree.PostOrder();
	cout<<endl;
	return 0;
}