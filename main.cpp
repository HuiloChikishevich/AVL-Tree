#include <iostream>;

class TreeNode
{  private:
    int key;
    std::string polinom;
    TreeNode *leftPtr,*rightPtr;
    public:
   TreeNode();
   ~TreeNode();
   void show(TreeNode *&Tree);
   void add_node(int x,std::string p,TreeNode *&MyTree);
   bool is_palindrome(const std::string &word);
};


    public AVLTree()
       {
          root = null;  // konstructor
       }



       TreeNode::~TreeNode(TreeNode *Tree)
{if(!Tree) return;
     if(Tree->leftPtr)
             { cleanup(Tree->leftPtr);
       Tree->leftPtr = 0;                         // destructor
    }
    if(Tree->rightPtr != 0 )
    { cleanup(Tree->rightPtr);
       Tree->rightPtr = 0;
    }
    delete Tree;
 }




       node_st *tree_root=0;		// koren dereva
Insert(value,&tree_root);	// vstavka znachenii v derevo

bool Insert(int value,node_st **root)
{
	bool res=false;
	node_st *node=*root;
	if(!node) {                                                               // dobavlenie elementa
		*root=NewItem(value);
		return true;
	}
	if(value==node->value) return false;
	if(value<node->value)   res=Insert(value,&node->p1) && !!--node->b;
	else                    res=Insert(value,&node->p2) && !!++node->b;
	if(BalanceInsert(root)) res=false;
	return res;
}




Tree1.Insert(A[i]); Tree2.Insert(A[i]);
}
}
void PathLength(TreeNode<T> *t,long &totallength,int item)        // poisk v dereve
{
return; else
{
