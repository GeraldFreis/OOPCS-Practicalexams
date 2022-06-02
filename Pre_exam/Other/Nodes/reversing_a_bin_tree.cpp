#include <iostream>
#include <stack>
#include <vector>

// node needs to have 2 children (left and right)
struct Node {
    Node *child_left;
    Node *child_middle;
    Node *child_right;
};

/* A has child E, B
    start left
    following a depth first traversal
    E has child i
    I has child J
 end of left 

beginning of right
    following a depth first traversal
    B has child F
    F has child G
    G has children C, K H
    K has no child
    end of left 
    C has child D
    D has no child (end of right)
    H has child L
    L has no child (end of middle)
*/

// traversing the array
int depth_first_traversal(Node **list, int len){
    int longest_len = 0;
    std::vector<Node*> longest_nodes;
    for(int i = 0; i < len; i++){
        std::vector<Node*> these_nodes;
        Node *current_node = list[i];
        these_nodes.push_back(current_node);
        while(current_node->child_left != nullptr){
            longest_len += 1;
            current_node = current_node->child_left;
            these_nodes.push_back(current_node);
        }
        
    }
}

int main(){
    Node *A; Node *B; Node *C; Node *D;
    Node *E; Node *F; Node *G; Node *H;
    Node *I; Node *J; Node *K; Node *L;

    // left part of the tertiary tree
    A->child_left = E; A->child_middle = nullptr; A->child_right = B;
    E->child_left = I; E->child_middle = nullptr; E->child_right = nullptr;
    I->child_left = J; I->child_middle = nullptr; I->child_right = nullptr;
    J->child_left = nullptr; J->child_middle = nullptr; J->child_right = nullptr;

    //right part of the tree
    B->child_left = F; B->child_middle = nullptr; B->child_right = nullptr;
    F->child_left = G; F->child_middle = nullptr; F->child_right = nullptr;
    G->child_left = K; G->child_middle = H; G->child_right = C;
    // left side of G
    K->child_left = nullptr; K->child_middle = nullptr; K->child_right = nullptr;
    // middle of G
    H->child_left = L; H->child_middle = nullptr; H->child_right = nullptr;
    L->child_left = nullptr; L->child_middle = nullptr; L->child_right = nullptr;
    // right side of G
    C->child_left = D; C->child_middle = nullptr; C->child_right = nullptr;
    D->child_left = nullptr; D->child_middle = nullptr; D->child_right = nullptr;

    Node **nodelist = new Node*[12];
    nodelist[0] = A; nodelist[1] = B; nodelist[2] = C; nodelist[3] = D;
    nodelist[4] = E; nodelist[5] = F; nodelist[6] = G; nodelist[7] = H;
    nodelist[8] = I; nodelist[9] = J; nodelist[10] = K; nodelist[11] = L;
    
    
}
