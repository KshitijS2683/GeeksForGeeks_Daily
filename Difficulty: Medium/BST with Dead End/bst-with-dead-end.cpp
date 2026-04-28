/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

// class Solution {
//   public:
//     bool isDead(Node *root,int min,int max,int parent,int dir)
//     {
//         if(root == NULL)
//         {
//             return false;
//         }
//         else if(root->left == NULL && root->right == NULL)
//         {
//             // if(dir == -1)
//             // {
//             //     if(parent - root->data == 1 && min == root->data)
//             //     {
//             //         return true;
//             //     }
//             // }
//             // else
//             // {
//             //     if(root->data - parent == 1 && max == root->data)
//             //     {
//             //         return true;
//             //     }
//             // }
//             if(min == max)
//             {
//                 return true;
//             }
//         }
//         else
//         {
//             return isDead(root->left,1,root->data-1,root->data,-1) ||  isDead(root->right,root->data+1,INT_MAX,root->data,1);
//         }
//         return false;
//     }
//     bool isDeadEnd(Node *root) {
//         // Code here
//         return isDead(root,1,INT_MAX,0,0);
        
//     }
// };

class Solution {
  public:
    bool isDead(Node *root, int min, int max, int parent, int dir)
    {
        if(root == NULL)
        {
            return false;
        }

        // leaf node
        if(root->left == NULL && root->right == NULL)
        {
            // correct dead end condition
            if(min == max)
            {
                return true;
            }
            return false; // ✅ added
        }

        // ✅ fix min/max propagation (don't reset to 1 or INT_MAX blindly)
        return isDead(root->left, min, root->data - 1, root->data, -1) ||  
               isDead(root->right, root->data + 1, max, root->data, 1);
    }

    bool isDeadEnd(Node *root) {
        // ✅ start with valid BST range
        return isDead(root, 1, INT_MAX, 0, 0);
    }
};