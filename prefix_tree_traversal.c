/* Traverse a prefix tree and print out all subnets which fall under
 * the input subnet
 *
 *  root : The root of the prefix tree
 *  val  : The input subnet
 *  addr : The subnet at each recursion level
 *  pos  : The bit position currently being evaluated, initialized to (1<<31)
 */
 
 void prefix_tree_traversal(node* root, int val, int addr, int pos) {
    
    if (root == NULL) {
        return;
    }   
    
    if (root->valid) {
        printf("%d\n", addr);
    }

    if (pos) { 
        if (val & (1<<31)) {
            addr |= pos;
        }
        prefix_tree_traversal(root->left, val<<1, addr, pos>>1);
        prefix_tree_traversal(root->right, val<<1, addr, pos>>1);
    }
}
        
    
