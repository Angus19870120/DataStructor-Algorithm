/*********************************************************************
	@ Title:			ʵ�ֶ�������������	

	@ Description:		
                        1.ʵ�ֶ�������ADT���ݹ���ʽ��
	                    2.ʵ�ֶ�������ADT��������ʽ��					
	@ Conclusion:			

	@ Author:		rh_Jameson

	@ Date:			2014/12/22
**********************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include"bin_tree.h"

using namespace std;

//---------------------1�����Զ�������ADT���ݹ飩----------------------//
void testBinaryTree()
{
	string s = "124###35#6###";
    BinaryTree<string> *bt = new BinaryTree<string>(s);
    cout << "����������ing..." << endl;
	cout << "������ǰ�������";
	bt->pubForPreOrder();
	cout << endl;
	cout << "���������������";
	bt->pubForInOrder();
	cout << endl;
	cout << "���������������";
	bt->pubForPostOrder();
	cout << endl;
	cout << "��������α�����";
	bt->pubForLayerOrder();
	cout << endl;
	bt->pubForFindNode("4");
	cout << "���������Ϊ��" << bt->pubForGetBTDepth() << endl;
	cout << "���ٶ������Ƿ�ɹ���" << bt->pubForDelBTree() << endl;;


}

int main()
{
    testBinaryTree();	
	return 0;
}
