#include<iostream>
#include<ostream>
#include<cmath>

int Binary(int n)
{
	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	return n % 2 + 10 * Binary(n / 2);
}

struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int data = 0, Node* left = nullptr, Node* right = nullptr) :
		data(data), left(left), right(right) {}
};

class BTree
{
private:
	Node* root;
	
	void Insert(Node* &root, Node* node)
	{
		if (root == nullptr)
		{
			root = node;
			return;
		}
		if (root->data > node->data)
		{
			return Insert(root->left, node);
		}
		if (root->data < node->data)
		{
			return Insert(root->right, node);
		}
		if (root->data == node->data)
		{
			return;
		}
	}

	Node* Extract(Node*& node)
	{
		Node* tnode = node;

		if (node->left == nullptr && node->right == nullptr)
		{
			node = nullptr;
		}
		else if (node->left == nullptr)
		{
			node = node->right;
		}
		else if (node->right == nullptr)
		{
			node = node->left;
		}
		else if (node->left->right == nullptr)
		{
			node->left->right = node->right;
			node = node->left;
		}
		else if (node->right->left == nullptr)
		{
			node->right->left = node->left;
			node = node->right;
		}
		else
		{
			Node* t = node->right;
			while (t->left->left != nullptr)
			{
				t = t->left;
			}
			Node* nnode = Extract(t->left);
			nnode->left = node->left;
			nnode->right = node->right;
			node = nnode;
		}

		tnode->right = nullptr;
		tnode->left = nullptr;
		return tnode;
	}

/*	void Print(std::ostream& stream, Node*& root, int depth = 0)
	{
		if (root == nullptr)
		{
			return;
		}
		Print(stream, root->right, depth + 1);
		for (int i = 0; i < depth; ++i)
		{
			std::cout << "\t";
		}
		stream << root->data << std::endl;
		Print(stream, root->left, depth + 1);
	} */

	int Depth(Node* node)
	{
		if (node == nullptr)
		{
			return 0;
		}
		int left = Depth(node->left);
		int right = Depth(node->right);
		int mx = (left > right ? left : right);
		return mx + 1;
	}

	void Print(std::ostream& stream, Node*& root)
	{
		if (root == nullptr)
		{
			return;
		}
		for (int i = 0; i < Depth(root); ++i)
		{
			std::cout << std::endl;
			std::cout << std::endl;
			for (int k = 0; k < 3 * (int(pow(2,Depth(root) - i - 1))); ++k)
			{
				stream << " ";
			}
			for (int j = 0; j < pow(2, i); ++j)
			{
				if (Elem(i + 1, j) != 0)
				{
					stream << Elem(i + 1, j);
				}
				else
				{
					stream << " ";
				}
				for (int k = 0; k < 3 * (int(pow(2, Depth(root) - i))); ++k)
				{
					stream << " ";
				}
			}
			std::cout << std::endl;
			
		}
	}

	int ElemBin(Node*& root, int row, int el)
	{
		if (root == nullptr)
		{
			return 0;
		}
		if (row == 1)
		{
			return root->data;
		}
		
		if (el / int(pow(10, (row - 2))) == 1)
		{
			return ElemBin(root->right, row - 1, el % int(pow(10, row - 2)));
		}
		if (el / int(pow(10, (row - 2))) != 1)
		{
			return ElemBin(root->left, row - 1, el % int(pow(10, row - 2)));
		}

	}

	Node*& GetNode(Node*& root, int element)
	{
		if (root == nullptr || root->data == element)
		{
			return root;
		}
		if (root->data > element)
		{
			return GetNode(root->left, element);
		}
		if (root->data < element)
		{
			return GetNode(root->right, element);
		}
	}


public:

	BTree() : root(nullptr) {}

	void Add(int data)
	{
		Insert(root, new Node(data));
	}

	void Remove(int data)
	{
		Node* &node = GetNode(root, data);
		if (node != nullptr)
		{
			Node* extracted = Extract(node);
			delete extracted;
		}
	}

	bool Contains(int data)
	{
		return (GetNode(root, data) != nullptr);
	}

	int Elem(int row, int el)
	{
		return ElemBin(this->root, row, Binary(el));
	}

	friend std::ostream& operator<<(std::ostream& stream, BTree& tree)
	{
		stream << "__________________" << std::endl;
		if (tree.root == nullptr)
		{
			stream << "EMPTY" << std::endl;
		}
		else
		{
			tree.Print(stream, tree.root);
		}
		stream << "__________________" << std::endl;
		return stream;
	}
};

int main(int argc, char* argv[])
{
	BTree tree;
	tree.Add(8);
	tree.Add(4);
	tree.Add(12);
	tree.Add(2);
	tree.Add(6);
	tree.Add(10);
	tree.Add(14);
	tree.Add(1);
	tree.Add(3);
	tree.Add(5);
	tree.Add(7);
	tree.Add(9);
	tree.Add(11);
	tree.Add(13);
	tree.Add(15);
	std::cout << tree << std::endl;
	tree.Remove(8);
	std::cout << tree << std::endl;
	tree.Remove(10);
	std::cout << tree << std::endl;
	tree.Remove(12);
	std::cout << tree << std::endl;
	return EXIT_SUCCESS;
}	