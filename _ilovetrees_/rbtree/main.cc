#include "iostream"
#include "deque"
#define none NULL
#define nl "\n"
#define nl2 "\n\n"

using	namespace std;

int	Max(int l, int r) { return (l > r) ? l : r; }; // simple util

class	avltree
{

int	val;
int	hite; // avl special
avltree	*l;
avltree	*r;

public:
	avltree();
	~avltree();
	avltree(int);

	avltree	*Insert(avltree *, int);
	void	printer_inorder(avltree *);
	void	printer_bfs(avltree *root);

	int	GetHeight(avltree*);
};

avltree::avltree() : val(0), l(none), r(none) {}
avltree::avltree(int n) : val(n), l(none), r(none), hite(1) {}
avltree::~avltree() {}

// avl special :: get height
int	avltree::GetHeight(avltree *tree)
{
	if (tree)
		return hite;
	return 0;
}


// inorder printer
void	avltree::printer_inorder(avltree *node)
{
	if (!node)
	{
		cout << nl;
		return ;
	}
	cout << " (go left) ";
	printer_inorder(node->l);
	cout << node->val << ' ';
	cout << " (go right) ";
	printer_inorder(node->r);
}


avltree	*avltree::Insert(avltree *node, int n)
{
	if (!node)
		return (new avltree(n));
	if (node->val < n)
		node->r = Insert(node->r, n);
	else if (node->val > n)
		node->l = Insert(node->l, n);
	return (node);
}

void	avltree::printer_bfs(avltree *root)
{
	cout << nl "BFS " nl2;
	
	deque<avltree *>	D;
	D.push_front(root);
	while (D.empty() == false)
	{
		avltree	*node = D.front();
		
		cout << node->val << nl;

		D.pop_front();
		if (node->l)
			D.push_back(node->l);
		if (node->r)
			D.push_back(node->r);
	}
}

int	main()
{
	avltree	*root = NULL;
	avltree	tree;
	
	root = tree.Insert(root, 42);
	
	tree.Insert(root, 32);
	tree.Insert(root, 16);
	tree.Insert(root, 12);
	tree.Insert(root, 64);
	tree.Insert(root, 128);
	tree.Insert(root, 123);
	tree.Insert(root, 256);

	tree.printer_inorder(root);
	tree.printer_bfs(root);

}

// util

