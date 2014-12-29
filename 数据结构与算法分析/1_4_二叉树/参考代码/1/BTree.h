#include<iostream>
#include<cstdlib>
using namespace std;

template<typename T>class BinaryTree;

template<typename T>
class Node{
private:
	Node<T> *lchild,*rchild;
	T data;
public:
	Node(){lchild=NULL;rchild=NULL;}
	Node(T value,Node<T> *left=NULL,Node<T> *right=NULL){
		data = value;
		lchild = left;
		rchild = right;
	}
	friend class BinaryTree<T>;
};

template<typename T>
class BinaryTree{
private:
	Node<T> *root;                  //�������ĸ�ָ��
	void InOrder(Node<T> *Current);                //�������
	void PreOrder(Node<T> *Current);				//ǰ�����
	void PostOrder(Node<T> *Current);				//�������
	void Insert(const T &data,Node<T> * &b); //�����㣬����Ϊ���ã�
	void Destory(Node<T> * Current);        //ɾ����
public:
	BinaryTree(){root=NULL;}						//�������캯��
	~BinaryTree(){Destory(root);}						//��������
	void Creat(T* data,int n);                    //���������򣩶�����
	void InOrder(){InOrder(root);}                //������������к���Ϊ�ӿ�
	void PreOrder(){PreOrder(root);}		      //ǰ����������к���Ϊ�ӿ�
	void PostOrder(){PostOrder(root);}			  //������������к���Ϊ�ӿ�
	//����������
	Node<T>* createBTree(const string &s, int &i);
};

template<typename T>
Node<T>* BinaryTree<T>::createBTree(const string &s, int &i){

}
template<typename T> 
void BinaryTree<T>::Destory(Node<T> *Current){
	if(Current!=NULL){
		Destory(Current->lchild);
		Destory(Current->rchild);
		delete Current;  						//�����ͷŸ����
	}
}

template<typename T>
void BinaryTree<T>::Insert(const T &data,Node<T> * &b){
	if(b==NULL){								//�ѵ�����,����
		b=new Node<T>(data);
		if(b==NULL){
			cout<<"�ռ䲻��"<<endl;
			exit(1);
		}
	}
	else if(data<b->info) Insert(data,b->lchild);			//С��,��������ȥ��
	     else Insert(data,b->rchild);	//���ڵ���,��������ȥ��
}
template<typename T>
void BinaryTree<T>::Creat(T* data,int n){		//����һ�ö���������
	for(int i=0;i<n;i++) Insert(data[i],root);
}
template<typename T>
void BinaryTree<T>::InOrder(Node<T> *Current){
	if(Current!=NULL){							//�ݹ���ֹ����
		InOrder(Current->lchild);					//�������������
		cout<<Current->data<<'\t';					//���ʸ���㣬ע������λ��
		InOrder(Current->rchild);					//�������������
	}
}
template<typename T>
void BinaryTree<T>::PreOrder(Node<T> *Current){
	if(Current!=NULL){
		cout<<Current->data<<'\t';						//ע��ǰ������������λ��
		PreOrder(Current->lchild);
		PreOrder(Current->rchild);
	}
}
template<typename T>
void BinaryTree<T>::PostOrder(Node<T> *Current){
	if(Current!=NULL){
		PostOrder(Current->lchild);
		PostOrder(Current->rchild);
		cout<<Current->data<<'\t';  						//������ʸ����
	}
}