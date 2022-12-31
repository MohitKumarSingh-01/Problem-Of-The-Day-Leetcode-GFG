//User function Template for C++

/* Tree Node
struct Node
{
	int data;
	Node* left;
	Node* right;
};*/

class Solution
{
    public:
    int singlevalued(Node *root)
    {
       int count = 0;

        trv(root, count);

        return count;
    }
    
    bool trv(Node *root, int &cnt){

        if(root == NULL)    return true;

        if(root->left == NULL and root->right == NULL){

            cnt++;

            return true;

        };

        bool blt = trv(root->left, cnt);        

        bool brt = trv(root->right, cnt);

        int r = root->data;

        int lt = r, rt = r;

        if(root->left)  lt = root->left->data;

        if(root->right) rt = root->right->data;

        if((blt and brt) and ((lt == rt) and (lt == r))){

            cnt++;

            return true;

        }

        else    return false;

    }
    
};
